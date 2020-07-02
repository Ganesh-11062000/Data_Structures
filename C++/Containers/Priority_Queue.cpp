//	Priority Queue functions => all operations are in O(1)
//	1) push()   => push at end
//	2) pop()	=> pop first element
//	3) top()    => returns the first element
//	4) empty()
//	5) size()

//	all the inserted elements get sorted by their priority
//	we have top function like stack

#include<bits/stdc++.h>
using namespace std;

void displayQueue(priority_queue<int> x){
	cout << "\nQueue => ";
	while(!x.empty()){
		cout << x.front() << " ";
		x.pop();
	}
	cout << endl;
}

int main(){
	
	priority_queue<int> q;
	
	q.push(1);
	q.push(2);
	q.push(3);
	
	displayQueue(q);
	
	cout << "Priority Queue is empty : " << q.empty() << endl;
	cout << "First element : " << q.front() << endl;
	cout << "Last element : " << q.back() << endl;
	cout << "Size of priority queue : " << q.size() << endl;
	
	return 0;
}

//	Output :
//	Queue => 1 2 3
//	Queue is empty : 0
//	First element : 1
//	Last element : 3
//	Size of queue : 3

