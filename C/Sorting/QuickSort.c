#include<stdio.h>

// used recusrsive approach
// best case = O(nLogn)
// worst case = O(n^2)

int partition(int a[],int lb,int ub){
    int val = a[lb];    //pivot as start element
    int down = lb+1,up = ub,temp;

    while (down <= up)
    {
        while(down <= up && a[down] < val){
            down++;
        }

        while (down <= up && a[up] > val)
        {
            up--;
        }

        if(down < up){
            temp = a[down];
            a[down] = a[up];
            a[up] = temp;
        }  
    }

    // swap pivot with a[up]

    a[lb] = a[up];
    a[up] = val;
    
    return up;  //index of pivot
}

void quickSort(int a[],int lb,int ub){
    if(lb < ub){
        int p;
        p = partition(a,lb,ub);
        quickSort(a,lb,p-1);
        quickSort(a,p+1,ub);
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

    quickSort(a,0,n-1);

    printf("\nAfter Sorting -\n");
    display(a,n);
}