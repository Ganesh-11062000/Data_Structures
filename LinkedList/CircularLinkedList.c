#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

typedef struct head{
    node *last;
}head;

void display(head *t){
    if(t->last == NULL){
        printf("Circular Linked List is empty  \n");
        return;
    }

    node *q = t->last->next;
    do{
        printf("%d ",q->data);
        q = q->next;
    }while(q != t->last->next);

    printf("\n");
}

//delete from beginning
int deleteBeg(head *t){
    if(t->last == NULL){
        printf("Circular Linked List is empty  \n");
        return -1;
    }

    //q points to start node
    node *q = t->last->next;

    //single element
    if(q == q->next){
        t->last = NULL;    

    }else{
        t->last->next = q->next;
    }

    display(t);
    return q->data;
}

//delete from end
int deleteEnd(head *t){
    if(t->last == NULL){
        printf("Circular Linked List is empty  \n");
        return -1;
    }

    node *p = t->last;
    node *q = t->last->next;

    //single element
    if(t->last == t->last->next){
        t->last = NULL;    
    }else{
        while(q->next != t->last){
            q = q->next;
        }
        q->next = q->next->next;
        t->last = q;
    }

    display(t);
    return p->data;
}

//insert at beginning
void insertBeg(head *t,int ele){
    node *p;
    p = (node*)malloc(sizeof(node));
    p->data = ele;

    if(t->last == NULL){
        p->next = p;
        t->last = p;
    }else{
        p->next = t->last->next;
    t->last->next = p;
    }

    display(t);
}

//insert at end
void insertEnd(head *t,int ele){
    node *p;
    p = (node*)malloc(sizeof(node));
    p->data = ele;
    p->next = NULL;

    if(t->last == NULL){
        p->next = p;
        t->last = p;
    }else{
        p->next = t->last->next;
        t->last->next = p;

        t->last = p;
    }

    display(t);
} 

void main(){
    head x;
    x.last = NULL;
    int ch,ele;

    while(1){
        printf("1:Insert_Beg 2:Insert_End 3:Delete_Beg 4:Delete_End 5:Display 6:Exit\n");
        scanf("%d",&ch);

        if(ch==6){
            break;
        }

        switch (ch)
        {
            case 1: printf("Enter an integer value - ");
                    scanf("%d",&ele);
                    insertBeg(&x,ele);
                    break;
            case 2: printf("Enter an integer value - ");
                    scanf("%d",&ele);
                    insertEnd(&x,ele);
                    break;
            case 3: deleteBeg(&x);
                    break;
            case 4: deleteEnd(&x);
                    break;
            case 5: display(&x);
                    break;
            default:printf("Invalid choice\n");
        }
    }
}