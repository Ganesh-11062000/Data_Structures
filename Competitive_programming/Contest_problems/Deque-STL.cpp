//	First line of input will contain the number of test cases T. 
//	For each test case, you will be given the size of array N and the size of subarray to be used K. 
//	This will be followed by the elements of the array Ai.

#include<bits/stdc++.h> 
using namespace std;


void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> dq;
    multiset<int,greater<int>> s;
    int x,y;
    
    for(int i = 0;i < k; i++){
    	dq.push_back(arr[i]);
    	s.insert(arr[i]);
	}
	
	cout << *s.begin() << " ";
	
	for(int i = 0;i < n-k;i++){
		x = dq[0];
		y = arr[i+k];
		
		dq.pop_front();
		dq.push_back(y);
		
		//s.erase(x);		it will delete all occurances
		s.erase(s.lower_bound(x));
		s.insert(y);
		
		cout << *s.begin() << " ";
	}
	
	cout << endl;

}
//	3 4 6 3 4
//	3 4		4 3
//	4 6		6 4
//	6 3		6 3
//	3 4		4 3


int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}

//	N => size of array
//	k => size of sub array

//	https://www.hackerrank.com/challenges/deque-stl/problem
