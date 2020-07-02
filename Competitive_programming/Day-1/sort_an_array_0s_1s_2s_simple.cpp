//	Time Complexity : O(n)
//	Space complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
	for(int i = 0; i< n;i++)
		cout << arr[i] << " ";
	cout << endl;
}

void sort_array(int arr[],int n){
	int i,c0 = 0,c1 = 0,c2 = 0;
	
	//counting number of 0s,1s and 2s
	for(i = 0;i < n;i++){
		if(arr[i] == 0)	c0++;
		if(arr[i] == 1) c1++;
		if(arr[i] == 2) c2++;
	}	
	
	i = 0;
	while(c0--){
		arr[i++] = 0;
	}
	
	while(c1--){
		arr[i++] = 1;
	}
	
	while(c2--){
		arr[i++] = 2;
	}
}

int main(){
	int n;			//no. of elements in array
	cin >> n;
	
	int arr[n];
	for(int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	
	cout << "Actual array => ";
	display(arr,n);
	
	sort_array(arr,n);
	
	cout << "Sorted array => ";
	display(arr,n);
	
	return 0;
}


//	Output :
//	12
//	0 1 1 0 1 2 1 2 0 0 0 1
//	Actual array => 0 1 1 0 1 2 1 2 0 0 0 1
//	Sorted array => 0 0 0 0 0 1 1 1 1 1 2 2
