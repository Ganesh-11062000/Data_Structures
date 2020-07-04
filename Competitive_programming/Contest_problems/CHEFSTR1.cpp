#include<bits/stdc++.h>
using namespace std;

int main(){
	int T,N,x1,x2,i;
	long long sum = 0;
	cin >> T;
	
	for(int tc = 0; tc < T;tc++){
		sum = 0;
		cin >> N;
		
		cin >> x1;
		for(i = 1;i < N;i++){
			cin >> x2;
			
			sum += abs(x2 - x1) - 1;
			x1 = x2;
		}
		
		cout << sum << endl;	
	}
	
	return 0;
}

//note : the sum can't be stored in int datatype
// we need long long - few test cases can fail for that reason
