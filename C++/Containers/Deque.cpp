//	Access functions
//	1) at()		=> arr.at(index)
//	2) []		=> arr[index]
//	3) front()	=> front element in array
//	4) back()	=> last element in array

//	Capacity functions
//	1) size()		=> number of elements in vector
//	2) capacity()	=> max. possible elements the vector can hold- 1,2,4,8,...
//	3) empty()		=> 1 if vector is empty else 0

//	Modifier functions
//	1) push_back()		=> add element at end of deque
//	2) pop_back()		=> delete last element
//	3) push_front()		=> add element at front of deque
//	4) pop_front()		=> delete first element
//	5) insert(it,val)	=> insert element
//  6) erase(it)		=> delete specific element
//	4) clear()			=> delete all elements

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	deque<int> q;
	
	q.push_front(2);
	q.push_front(1);
	q.push_back(3);
	q.push_back(4);
	
	cout << "Deque => ";
	for(int x:q){
		cout << x << " ";
	}
	
	q.pop_front();
	cout << "\nDeque => ";
	for(auto it = q.begin();it != q.end();it++){
		cout << *it << " ";
	}
	
	q.pop_back();
	cout << "\nDeque => ";
	for(int x:q){
		cout << x << " ";
	}
	return 0;
}

//	Output
//	Deque => 1 2 3 4
//	Deque => 2 3 4
//	Deque => 2 3
