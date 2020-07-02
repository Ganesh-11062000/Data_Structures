//	You are given an array of n+2 elements. 
//	All elements of the array are in range 1 to n. 
//	And all elements occur once except two numbers which occur twice. 
//	Find the two repeating numbers.
//	For example, array = {4, 2, 4, 5, 2, 3, 1} and n = 5

//	The above array has n + 2 = 7 elements with all elements occurring once except 2 and 4 which occur twice. So the output should be 4 2.

#include<bits/stdc++.h>
using namespace std;


//	Method - 1
//	Time Complexity = O(n)
//	Space Complexity = O(n)

printRepeatingElements(int a[],int n){
	//initialized visited arrat to 0
	int visited[n+1] = {0};
	int x;
	
	for(int i = 0;i < n+2;i++)
	{
		x = a[i];
		
		if(visited[x] == 0){
			visited[x] = 1;
		}else{
			cout << a[i] << " ";
		}
	}	
}


int main(){

	int n;
	cin >> n;
	
	int arr[n];
	for(int i =0;i < n+2;i++){
		cin >> arr[i];
	}
	
	cout << "Array => ";
	for(int x:arr) cout << x << " ";
	cout << endl;
	
	printRepeatingElements(arr,n);
	
	return 0;
}
