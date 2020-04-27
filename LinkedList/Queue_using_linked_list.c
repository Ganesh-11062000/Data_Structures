#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

typedef struct head{
    node *start;
}head;


void Display(head *t){
    if(t->start == NULL){
        printf("Queue is empty \n");
        return;
    }else{
        node *q;
        q = t->start;

        printf("Queue => ");
        while (q != NULL)
        {
            printf("%d ",q->data);
            q = q->next;
        }
        printf("\n");
    }
}

//insert at end
void Insert(head *t,int ele){
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
    Display(t);
}

//delete element at beginning
int Delete(head *t){
    int ele;

    if(t->start == NULL){
        printf("Queue is empty \n");
        return -1;
    }else{
        ele = t->start->data;       
        t->start = t->start->next;

        printf("Deleted element = %d \n",ele);
        Display(t);

        return ele;
    }
}

int QueueFront(head *t){
    int ele;

    if(t->start == NULL){
        printf("Queue is empty \n");
        return -1;
    }else{
        ele = t->start->data;       

        printf("Element at front of Queue = %d \n",ele);
        Display(t);

        return ele;
    }
}

void main(){
    head x;
    x.start = NULL;

    int ch,ele;

    while(1){
        
        printf("Enter 1:Insert 2:Delete 3:QueueFront 4:Display 5:Exit\n");
        scanf("%d",&ch);

        if(ch==5){
            break;
        }

        switch (ch)
        {
            case 1:
                printf("Enter an integer value - ");
                scanf("%d",&ele);
                Insert(&x,ele);
                break;
            case 2:
                Delete(&x);
                break;
            case 3:
                QueueFront(&x);
                break;
            case 4:
                Display(&x);
                break;
            default: printf("Invalid choice\n");

        }

        printf("\n---------------------------------------------\n");
    }
}