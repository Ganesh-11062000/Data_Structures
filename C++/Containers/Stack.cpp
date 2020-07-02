//	Stack functions => all operations are in O(1)
//	1) push()   => push at end
//	2) pop()	=> pop last element
//	3) top()	=> returns last element
//	4) empty()
//	5) size()

#include<bits/stdc++.h>
using namespace std;

void displayStack(stack<int> x){
	cout << "\nStack = ";
	while(!x.empty()){
		cout << x.top() << " ";
		x.pop();	
	};
	cout << endl;
}

int main(){
	stack<int> S;
	
	S.push(1);
	S.push(3);
	S.push(5);
	
	cout << "Is Stack empty : " << S.empty() << endl;
	cout << "Stack Top : " << S.top() << endl;
	cout << "Size of Stack : " << S.size() << endl;
	
	displayStack(S);
	
	S.pop();
	cout << "After pop operation, Stack top : " << S.top() << endl;
	
	displayStack(S);
	
	return 0;
}

//	Output :
//	Is Stack empty : 0
//	Stack Top : 5
//	Size of Stack : 3
//	
//	Stack = 5 3 1
//	After pop operation, Stack top : 3
//	
//	Stack = 3 1
