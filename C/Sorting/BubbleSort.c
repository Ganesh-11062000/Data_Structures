#include<stdio.h>

// naive method
// best case = O(n^2)
// worst case = O(n^2)

void bubbleSort(int a[],int n){
    int i,j,temp;

    for(i = 0;i< n-1;i++){
        for(j = 0;j< n;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void display(int a[],int n){
    for(int i = 0;i< n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void main(){
    int a[20];
    int n,i,ele;

    printf("Enter number of elements (<20) : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter element - ");
        scanf("%d",&ele);
        a[i] = ele;
    }

    printf("\nBefore Sorting -\n");
    display(a,n);

    bubbleSort(a,n);

    printf("\nAfter Sorting -\n");
    display(a,n);
}