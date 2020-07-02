//	Given an array of n elements which contains elements from 0 to n-1, with any of these numbers appearing any number of times.
//	Find these repeating numbers in O(n) and using only constant memory space.


#include<bits/stdc++.h>
using namespace std;

//	Method - 2
//	Time Complexity = O(n)
//	Space Complexity = O(1)

printDuplicateElements(int a[],int n){
	//	for each ele in array
	//	make the value at index ele -ve	
	
	int ele;
	
	for(int i =0;i < n;i++){
		ele = a[i];
		
		if(a[abs(ele)] > 0){
			a[abs(ele)] = -a[abs(ele)];
		}else{
			cout << abs(ele) << " ";
		}
	}
}


int main(){

	int n;
	cin >> n;
	
	int arr[n];
	for(int i =0;i < n;i++){
		cin >> arr[i];
	}
	
	cout << "Array => ";
	for(int x:arr) cout << x << " ";
	cout << endl;
	
	printDuplicateElements(arr,n);
	
	return 0;
}
