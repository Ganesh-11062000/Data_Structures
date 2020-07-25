//	1 x  -Push the element x into the stack.
//	2    -Delete the element present at the top of the stack.
//	3    -Print the maximum element in the stack.

//	1 <= N <= 10^5
//	1 <= x <= 10^9

#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> s1;	//actual stack
	stack<int> s2;	//stack to store min values
	
	int N;		//number of queries
	int p,x;
	int max = 0;
	
	cin >> N;
	
	for(int i = 0;i < N;i++){
		cin >> p;
		
		if(p == 1){
			cin >> x;
			s1.push(x);
			
			if(x > max){
				max = x;
			}
			
			s2.push(max);
		
		}else if(p == 2){
			s1.pop();
			s2.pop();
			
			if(s2.size() == 0){
				max = 0;
			}
		}else if(p == 3){
			cout << s2.top() << endl;
		}
	}
		
	return 0;
}


