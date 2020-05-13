// - Int this we have 3 pegs and n discs of varying diameter
// - The problem is to shift n discs from source peg to destination peg 
// - By satisfying following to conditions
// 1) Only one disc can be moved at a time
// 2) Larger disc should not be kept on smaller discs

// Discs S - Source , D - Destination , A - Auxiliary

// Example - 
// Enter number of discs = 3
// Move disc from A to B 
// Move disc from A to C 
// Move disc from B to C 
// Move disc from A to B 
// Move disc from C to A 
// Move disc from C to B 
// Move disc from A to B

#include<stdio.h>

void towers(int n,char S,char D,char A){
    if(n == 1){
        printf("Move disc from %c to %c \n",S,D);
    }else{
        towers(n-1,S,A,D);  //move n-1 discs from S to A keeping D as Auxiliary
        towers(1,S,D,A);    //move 1 discs from S to D keeping A as Auxiliary
        towers(n-1,A,D,S);  //move n-1 discs from A to D keeping S as Auxiliary
    }
}

void main(){
    int n;
    printf("Enter number of discs = ");
    scanf("%d",&n);

    towers(n,'A','B','C');
}

