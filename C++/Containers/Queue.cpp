//	Queue functions => all operations are in O(1)
//	1) push()   => push at end
//	2) pop()	=> pop first element
//	3) front()	=> returns first element
//	4) back()	=> returns last element
//	5) empty()
//	6) size()

#include<bits/stdc++.h>
using namespace std;

void displayQueue(queue<int> x){
	cout << "\nQueue => ";
	while(!x.empty()){
		cout << x.front() << " ";
		x.pop();
	}
	cout << endl;
}

int main(){
	
	queue<int> q;
	
	q.push(1);
	q.push(2);
	q.push(3);
	
	displayQueue(q);
	
	cout << "Queue is empty : " << q.empty() << endl;
	cout << "First element : " << q.front() << endl;
	cout << "Last element : " << q.back() << endl;
	cout << "Size of queue : " << q.size() << endl;
	
	return 0;
}

//	Output :
//	Queue => 1 2 3
//	Queue is empty : 0
//	First element : 1
//	Last element : 3
//	Size of queue : 3

