#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

typedef struct head{
    node *start;
}head;


void display(head *t){
    if(t->start == NULL){
        printf("Stack is empty \n");
        return;
    }else{
        node *q;
        q = t->start;

        printf("Stack => ");
        while (q != NULL)
        {
            printf("%d ",q->data);
            q = q->next;
        }
        printf("\n");
    }
}

void push(head *t,int ele){

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

int pop(head *t){
    int ele;

    if(t->start == NULL){
        printf("Stack is empty \n");
        return -1;
    }else{
        ele = t->start->data;       
        t->start = t->start->next;

        printf("Deleted element = %d \n",ele);
        display(t);

        return ele;
    }
}

int StackTop(head *t){
    int ele;

    if(t->start == NULL){
        printf("Stack is empty \n");
        return -1;
    }else{
        ele = t->start->data;      

        printf("Element at top of Stack = %d \n",ele);
        display(t);

        return ele;
    }
}


void main(){
    head x;
    x.start = NULL;

    int ch,ele;

    while(1){
        
        printf("Enter 1:Push 2:Pop 3:StackTop 4:Display 5:Exit \n");
        scanf("%d",&ch);

        if(ch==5){
            break;
        }

        switch (ch)
        {
            case 1:
                printf("Enter an integer value - ");
                scanf("%d",&ele);
                push(&x,ele);
                break;
            case 2:
                pop(&x);
                break;
            case 3:
                StackTop(&x);
                break;
            case 4:
                display(&x);
                break;
            default: printf("Invalid choice \n");

        }

        printf("\n---------------------------------------------\n");
    }


}