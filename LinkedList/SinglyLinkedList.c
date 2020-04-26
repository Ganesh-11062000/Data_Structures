#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

typedef struct head{
    struct node* start;
}head;

//display all elements 
void display(head *t){
    if(t->start == NULL){
        printf("Linked List is empty \n");
        return;
    }else{
        node *q;
        q = t->start;

        printf("Linked List => ");
        while (q != NULL)
        {
            printf("%d ",q->data);
            q = q->next;
        }
        printf("\n");
    }
}

//insert at beginning
void insertBeg(head *t,int ele){

    node *p;
    p = (node*)malloc(sizeof(int));
    p->data = ele;
    p->next = NULL;

    if(t->start == NULL){
        t->start = p;
    }else{
        p->next = t->start;
        t->start = p;
    }

    display(t);
}

//insert at end
void insertEnd(head *t,int ele){
    node *p;
    p = (node*)malloc(sizeof(node));
    p->data = ele;
    p->next = NULL;

    if(t->start == NULL){
        t->start = p;
    }else{
        node *q;
        q = t->start;
        
        while (q->next != NULL)
        {
            q = q->next;
        }

        q->next = p;
    }

    display(t);
}

//delete element present at beginning
int deleteBeg(head *t){
    int ele;

    if(t->start == NULL){
        printf("Linked List is empty \n");
        return -1;
    }else{
        ele = t->start->data;       // get data of t->start
        t->start = t->start->next;

        printf("Deleted element = %d \n",ele);
        display(t);

        return ele;
    }

}

//delete element present at end
int deleteEnd(head *t){
    int ele;

    if(t->start == NULL){

        printf("Linked List is empty \n");
        return -1;

    }else if(t->start->next == NULL){

        ele = t->start->data;
        t->start = NULL;

    }else{
        node *q;
        q = t->start;

        while(q->next->next != NULL){
            q = q->next;
        }

        ele = q->next->data;
        q->next = NULL;
    }

    printf("Deleted element = %d \n",ele);
    display(t);

    return ele;
}

//delete element at position pos
void deletePos(head *t,int pos){
    if(t->start == NULL){
        printf("Linked List is empty \n");
        return;
    }else if(pos == 0){
        t->start = t->start->next;
    }
    else{
        int i = 0;
        node *q = t->start;

        //stop just before pos-1
        while(i!=pos-1){
            q = q->next;
            i++;
        }

        //deletes element at pos
        q->next = q->next->next;
    }

    display(t);
}

//delete element ele from linked list
void deleteEle(head *t,int ele){
    if(t->start == NULL){
        printf("Linked List is empty \n");
        return;
    }else if(t->start->data == ele){
        t->start = t->start->next;
    }else{
            node *i;
            for(i = t->start; i->next!=NULL;i = i->next){
                if(i->next->data == ele){
                    i->next = i->next->next;
                    display(t);
                    return;
                }
            }

            if(i->next == NULL){
                printf("%d is not present \n",ele);
                return;
            }
        }      
}

int count(head *t){
    int count = 0;

    if(t->start == NULL){
        printf("Count = %d \n",count);
        return 0;
    }else{
        node *q = t->start;
        while(q!=NULL){
            q = q->next;
            count++;
        }
        printf("Count = %d \n",count);
        return count;
    }
}

void search(head *t,int ele){
    if(t->start == NULL){
        printf("Linked List is empty \n");
    }else{
        node *q = t->start;
        while (q!=NULL)
        {
            if(q->data == ele){
                printf("%d is found \n",ele);
                return;
            }
            q = q->next;
        }

        printf("%d is not found \n",ele);
    }
}

void main(){
    head x;
    x.start = NULL;

    int ch,ele,pos;

    while(1){
        
        printf("Enter 1:InsertBeg 2:InsertEnd 3:deleteBeg 4:DeleteEnd 5:DeletePos 6:DeleteEle 7:Display \n");
        printf("8:Count 9:Search 10:Exit \n");
        scanf("%d",&ch);

        if(ch==10){
            break;
        }

        switch (ch)
        {
            case 1:
                printf("Enter an integer value - ");
                scanf("%d",&ele);
                insertBeg(&x,ele);
                break;
            case 2:
                printf("Enter an integer value - ");
                scanf("%d",&ele);
                insertEnd(&x,ele);
                break;
            case 3:
                deleteBeg(&x);
                break;
            case 4:
                deleteEnd(&x);
                break;
            case 5:
                printf("Enter an valid position - ");
                scanf("%d",&pos);
                deletePos(&x,pos - 1);
                break;
            case 6:
                printf("Enter an integer value - ");
                scanf("%d",&ele);
                deleteEle(&x,ele);
                break;
            case 7:
                display(&x);
                break;
            case 8:
                count(&x);
                break;
            case 9:
                printf("Enter an integer value - ");
                scanf("%d",&ele);
                search(&x,ele);
                break;
            default: printf("Invalid choice \n");

        }

        printf("\n---------------------------------------------\n");
    }

}