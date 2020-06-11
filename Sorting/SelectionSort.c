#include<stdio.h>

// sort by repeatedly finding the minimum
// best case = O(n^2)
// worst case = O(n^2)

void selectionSort(int a[],int n){
    int i,j,min_index,temp;

    for(i = 0;i < n - 1; i++){
        min_index = i;

        for(j = i;j < n;j++){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }

        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
        
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

    selectionSort(a,n);

    printf("\nAfter Sorting -\n");
    display(a,n);
}