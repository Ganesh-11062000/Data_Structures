#include<stdio.h>

// used recursive approach
// best case = O(nLogn)
// worst case = O(nLogn)
// lb:lower bound, ub:upper bound

void merge(int a[],int lb,int m,int ub){
    int i = lb,j = m+1,k = 0;
    int temp[lb+ub+1];

    while(i <= m && j <= ub){
        if(a[i] < a[j]){
            temp[k++] = a[i];
            i++;
        }else{
            temp[k++] = a[j];
            j++;
        }
    }

    while(i <= m){
        temp[k++] = a[i];
        i++;
    }

    while(j <= ub){
        temp[k++] = a[j];
        j++;
    }

    k = 0;
    for(i = lb;i <= ub;i++){
        a[i] = temp[k++];
    }
}

void mergeSort(int a[],int lb,int ub){
    if(lb < ub){
        int m = (lb+ub)/2;
        mergeSort(a,lb,m);
        mergeSort(a,m+1,ub);
        merge(a,lb,m,ub);
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

    mergeSort(a,0,n-1);

    printf("\nAfter Sorting -\n");
    display(a,n);
}