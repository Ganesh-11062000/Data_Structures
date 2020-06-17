#include<stdio.h>
#define MAX 50

typedef struct Stack{
    int S[MAX];
    int tos;
}Stack;

int isEmpty(Stack *t){
    if(t->tos == -1){
        return 1;
    }else{
        return 0;
    }
}

void display(Stack *t){
    if(isEmpty(t)==1){
        printf("Stack is empty \n");
        return;
    }else{
        printf("Stack => ");
        for(int i=t->tos;i>=0;i--){
            printf("%d ",t->S[i]);
        }
        printf("\n");
    }

}

void push(Stack *t,int ele){

    if(t->tos == MAX -1){
        printf("Stack overflow \n");
    }else{
        t->tos++;
        t->S[t->tos] = ele;
        display(t);
    }
    
}

int pop(Stack *t){
    int ele;

    if(isEmpty(t)==1){
        printf("Stack underflow \n");
        return -1;
    }else{
        ele = t->S[t->tos];
        t->tos--;

        display(t);

        return ele;
    }

}

int StackTop(Stack *t){
    int ele;

    if(isEmpty(t)==1){
        printf("Stack is empty \n");
        return -1;
    }else{
        ele = t->S[t->tos];

        printf("%d\n",ele);

        return ele;
    }
}


void main(){
    Stack x;
    x.tos = -1;

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