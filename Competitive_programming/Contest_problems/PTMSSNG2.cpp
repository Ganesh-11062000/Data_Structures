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
			
			if(m1[x] == 2){
				m1.erase(x);
			}	
			if(m2[y] == 2){
				m2.erase(y);
			}
		}
		
		
		auto it1 = m1.begin();
		auto it2 = m2.begin();
		c1 = it1->first;
		c2 = it2->first;
		
		cout << c1 << " " << c2 <<  endl;
		m1.clear();
		m2.clear();	
	}
	
	return 0;
}
