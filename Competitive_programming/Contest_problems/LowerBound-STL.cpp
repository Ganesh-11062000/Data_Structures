#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 

int main(){
	vector<int> v;
	
	int N,x;
	cin >> N;
	
	for(int i=0;i<N;i++){
		cin >> x;
		v.push_back(x);		//O(1)
	}
	
	
	int Q;
	cin >> Q;
	
	//vector is already in sorted 
	
	for(int i=0;i < Q;i++){
		cin >> x;
		auto it = lower_bound(v.begin(),v.end(),x);		// O(logn)
		
		if( *it == x){
			cout << "Yes " << it - v.begin() + 1 << endl;
		}else{
			it = upper_bound(v.begin(),v.end(),x);
			cout << "No " <<  it - v.begin() + 1 << endl;
		}
		
		
	}
	return 0;
}

//	https://www.hackerrank.com/challenges/cpp-lower-bound/problem
