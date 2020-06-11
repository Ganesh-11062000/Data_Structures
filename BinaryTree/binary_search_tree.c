#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *left,*right;
} node;

typedef struct head
{
    node *root;
} head;

node* father(head *t,node *p){
    node *q;        //pointer to father
    
    if(p == t->root){
        return NULL;
    }

    q = t->root;

    while (q != NULL)
    {
        if(q->left == p || q->right == p){
            return q;
        }
        if( p->data <= q->data){
            q = q->left;
        }else{
            q = q->right;
        }
    }

    return NULL;
}

//here r could be root of any subtree
node* findmax(node *r){
    while(r->right != NULL){
        r = r->right;
    }
    return r;
}

int search(head *t,int ele){
    node *q = t->root;

    while (q != NULL)
    {
       if(q->data == ele){
           return 1;
       }
       if( ele < q->data){
           q = q->left;
       }else{
           q = q->right;
       }
    }
    
    return 0;
}

void insert(head *t, int ele){
    node *p,*q;

    p = (node*)malloc(sizeof(node));
    p->data = ele;
    p->left = NULL;
    p->right = NULL;

    q = t->root;

    if(t->root == NULL){
        t->root = p;
        return;
    }

    while(q != NULL){
       if( ele <= q->data){
           if( q->left == NULL){
               q->left = p;
               return;
           }else{
               q = q->left;
           }
       } else {
           if( q->right == NULL){
               q->right = p;
               return;
           }else{
               q = q->right;
           }
       }
    }
}

void delete(head *t,int ele){
    node *q,*f;

    if(t->root == NULL){
        printf("BST is empty \n");
        return;
    }

    q = t->root;
    while(q != NULL){
        if( q->data == ele){
            break;
        }
        if( ele < q->data){
            q = q->left;
        }else{
            q = q->right;
        }
    }

    //ele not found
    if(q == NULL){
        printf("%d is not present in BST\n",ele);
        return;
    }

    //ele is present
    //1) it is a leaf node
    //     ()
    //    /  \ 
    // NULL  NULL

    if(q->left == NULL && q->right == NULL){
        if( q == t->root){
            t->root = NULL;
            return;
        }

        f = father(t,q);

        if(f->left == q){
            f->left = NULL;
        }else{
            f->right = NULL;
        }

        return;
    }

    // it has left sub tree
    //     ()
    //    /  \ 
    //  ()    ()

    if(q->left != NULL){
        int val;
        node *max;

        max = findmax(q->left);
        val = max->data;

        delete(t,val);

        q->data = val;

        return;
    }

    // no left sub tree
    
    //   (root)
    //    /  \ 
    // NULL   ()

    if(q == t->root){
        t->root = t->root->right;
        return;
    }

    //       (f)
    //       /      
    //     (q)
    //    /  \ 
    // NULL   ()

    f = father(t,q);

    if(f->left == q){
        f->left = q->right;
        return;
    }

    //  (f)
    //    \
    //     (q)
    //    /  \ 
    // NULL   ()

    if(f->right == q){
        f->right = q->right;
        return;
    }

}

void inOrder(node* x){
    if(x != NULL){
        inOrder(x->left);
        printf("%d ",x->data);
        inOrder(x->right);
    }
}

void preOrder(node *x){
    if(x != NULL){
        printf("%d ",x->data);
        preOrder(x->left);
        preOrder(x->right);
    }
}

void postOrder(node *x){
    if(x != NULL){
        postOrder(x->left);
        postOrder(x->right);
        printf("%d ",x->data);
    }
}

void main(){
    int ch,ele,n,i;

    head x;
    x.root = NULL;

    printf("Enter number of nodes initially required\n");
    scanf("%d",&n);

    for(int i=0;i < n;i++){
        printf("Enter element - ");
        scanf("%d",&ele);
        insert(&x,ele);
    }
    printf("\n");

    while(1){
        printf("Enter your choice :\n");
        printf("1)Insert 2)Delete 3)Search 4)inOrder 5)preOrder 6)postOrder 7)Exit\n");
        scanf("%d",&ch);

        if(ch == 7){
            break;
        }

        switch (ch)
        {
        case 1:
            printf("Enter ele to insert : ");
            scanf("%d",&ele);
            insert(&x,ele);
            inOrder(x.root);
            printf("\n");
            break;
        case 2:
            printf("Enter ele to delete : ");
            scanf("%d",&ele);
            delete(&x,ele);
            inOrder(x.root);
            printf("\n");
            break;
        case 3:
            printf("Enter ele to search : ");
            scanf("%d",&ele);
            if(search(&x,ele)==1)
                printf("%d is present\n",ele);
            else
                printf("%d not found !\n",ele);
            break;
        case 4:
            inOrder(x.root);
            printf("\n");
            break;
        case 5:
            preOrder(x.root);
            printf("\n");
            break;
        case 6:
            postOrder(x.root);
            printf("\n");
            break;
        default:
            printf("Invalid choice !!!\n");
        }
    }
}
