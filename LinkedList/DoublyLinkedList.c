#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *prev,*next;
}node;

typedef struct head{
    node *start,*last;
}head;

void display(head *t){
    if(t->start == NULL){
        printf("Linked List is empty \n");
        return;
    }else{
        node *q = t->start;

        printf("Linked List => ");
        while(q != NULL){
            printf("%d ",q->data);
            q = q->next;
        }
        printf("\n");
    }
}

void reverseDisplay(head *t){
    if(t->start == NULL){
        printf("Linked List is empty \n");
        return;
    }else{
        node *q = t->last;

        printf("Linked List => ");
        while(q != NULL){
            printf("%d ",q->data);
            q = q->prev;
        }
        printf("\n");
    }
}

void insertBeg(head *t,int ele){
    node *p;
    p = (node*)malloc(sizeof(node));

    p->data = ele;
    p->prev = NULL;
    p->next = NULL;

    if(t->start == NULL){
        t->start = p;
        t->last = p;
    }else{
        p->next = t->start;
        t->start->prev = p;
        t->start = p;
    }
    display(t);
}

void insertEnd(head *t,int ele){
    node *p;
    p = (node*)malloc(sizeof(node));

    p->data = ele;
    p->prev = NULL;
    p->next = NULL;

    if(t->start == NULL){
        t->start = p;
        t->last = p;
    }else{
        p->prev = t->last;
        t->last->next = p;
        t->last = p;
    }

    display(t);
}

int deleteBeg(head *t){
    int ele;

    if(t->start == NULL){
        printf("Linked List is empty \n");
        return -1;
    }else if(t->start == t->last){
        ele = t->start->data;
        t->start = NULL;
        t->last = NULL;
    }else{
        ele = t->start->data;
        t->start = t->start->next;
        t->start->prev = NULL;
    }

    display(t);
    return ele;
}

int deleteEnd(head *t){
    int ele;

    if(t->start == NULL){
        printf("Linked List is empty \n");
        return -1;
    }else if(t->start == t->last){
        ele = t->start->data;
        t->start = NULL;
        t->last = NULL;
    }else{
        ele = t->last->data;
        t->last = t->last->prev;
        t->last->next = NULL;
    }

    display(t);
    return ele;
}


void main(){
    head x;
    x.start = NULL;
    x.last = NULL;

    int ch,ele,pos,n;

    while(1){
        
        printf("Enter 1:InsertBeg 2:InsertEnd 3:deleteBeg 4:DeleteEnd \n");
        printf("      5:Display 6:ReverseDisplay 7:Exit \n");
        scanf("%d",&ch);

        if(ch==7){
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
                display(&x);
                break;
            case 6:
                reverseDisplay(&x);
                break;
            default: printf("Invalid choice \n");

        }

        printf("\n---------------------------------------------\n");
    }
}