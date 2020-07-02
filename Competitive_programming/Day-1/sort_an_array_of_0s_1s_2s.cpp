//	Dutch National Flag Algorithm
//	1 while mid <= high
//	2	if a[mid] == 0 :
//	3		swap(a[low],a[mid])		
//	4		low++, mid++
//	5	if a[mid] == 1:
//	6		mid++
//	7	if a[mid] == 2:
//	8		swap(a[mid],a[high])
//	9		high--
		
		
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
	int low = 0;
	int mid = 0;
	int high = n-1;
	
	while(mid <= high){
		
		if(arr[mid] == 0){
			swap(arr[low++],arr[mid++]);
		}
		
		else if(arr[mid] == 1){
			mid++;
		}
		
		else if(arr[mid] == 2){
			swap(arr[mid],arr[high--]);
		}
		
		cout << "low = " << low << ", mid = " << mid << ", high = " << high << "\t";
		display(arr,n);
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
//	low = 1, mid = 1, high = 11     0 1 1 0 1 2 1 2 0 0 0 1
//	low = 1, mid = 2, high = 11     0 1 1 0 1 2 1 2 0 0 0 1
//	low = 1, mid = 3, high = 11     0 1 1 0 1 2 1 2 0 0 0 1
//	low = 2, mid = 4, high = 11     0 0 1 1 1 2 1 2 0 0 0 1
//	low = 2, mid = 5, high = 11     0 0 1 1 1 2 1 2 0 0 0 1
//	low = 2, mid = 5, high = 10     0 0 1 1 1 1 1 2 0 0 0 2
//	low = 2, mid = 6, high = 10     0 0 1 1 1 1 1 2 0 0 0 2
//	low = 2, mid = 7, high = 10     0 0 1 1 1 1 1 2 0 0 0 2
//	low = 2, mid = 7, high = 9      0 0 1 1 1 1 1 0 0 0 2 2
//	low = 3, mid = 8, high = 9      0 0 0 1 1 1 1 1 0 0 2 2
//	low = 4, mid = 9, high = 9      0 0 0 0 1 1 1 1 1 0 2 2
//	low = 5, mid = 10, high = 9     0 0 0 0 0 1 1 1 1 1 2 2
//	Sorted array => 0 0 0 0 0 1 1 1 1 1 2 2
