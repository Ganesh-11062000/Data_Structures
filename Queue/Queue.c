#include<stdio.h>
#define MAX 10

typedef struct Queue{
    int Q[MAX];
    int f;      //front
    int r;      //rear
}Queue;

int isEmpty(Queue *t){
    if(t->f == t->r + 1){
        return 1;
    }else{
        return 0;
    }
}

void Display(Queue *t){
    if(isEmpty(t)==1){
        printf("Queue is empty \n");
        return;
    }else{
        printf("Queue => ");
        for(int i=t->f;i<=t->r;i++){
            printf("%d ",t->Q[i]);
        }
        printf("\n");
    }
}

void Insert(Queue *t,int ele){
    if(t->r == MAX-1){
        printf("Queue overflow \n");
        return;
    }else{
        t->r ++;
        t->Q[t->r] = ele;

        Display(t);
    }
}

int Delete(Queue *t){
    int ele;

    if(isEmpty(t)==1){
        printf("Queue underflow \n");
        return -1;
    }else{
        ele = t->Q[t->f];
        t->f ++;

        Display(t);

        return ele; 
    }
}

int QueueFront(Queue *t){
    int ele;

    if(isEmpty(t)==1){
        printf("Queue is empty \n");
        return -1;
    }else{
        ele = t->Q[t->f];
        printf("%d \n",ele);

        return ele;
    }
}

void main(){
    Queue x;
    x.f = 0;
    x.r = -1;

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