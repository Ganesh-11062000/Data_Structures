#include<bits/stdc++.h>
using namespace std;

int main(){
	int T,N,i;
	long long x,y;		//co-ordinates
	long long c1,c2;	//final answer
	map<long long,int> m1,m2;
	cin >> T;
	
	for(int tc = 0;tc < T;tc++){
		cin >> N;
		
		for(i = 0;i < 4*N - 1;i++){
			cin >> x >> y;
			m1[x]++;
			m2[y]++;	
		}
		
		for(auto it1 = m1.begin();it1 != m1.end();it1++){
			if(abs(it1->second)%2 != 0){
				c1 = it1->first;
				break;
			}	
		}
		
		for(auto it2 = m2.begin();it2 != m2.end();it2++){
			if(abs(it2->second)%2 != 0){
				c2 = it2->first;
				break;
			}	
		}
		
		cout << c1 << " " << c2 <<  endl;
		m1.clear();
		m2.clear();	
	}
	
	return 0;
}
