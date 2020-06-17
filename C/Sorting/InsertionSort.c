#include<stdio.h>

// sort like playing cards
// best case = O(n)
// worst case = O(n^2)

void insertionSort(int a[],int n){
    int i,j,val;

    for(i=0; i<n-1;i++){
        val = a[i+1];

        if(val < a[i]){
            j = i;
            while(j>=0 && a[j]>val){
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = val;
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

    insertionSort(a,n);

    printf("\nAfter Sorting -\n");
    display(a,n);
}