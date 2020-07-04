#include<bits/stdc++.h>
using namespace std;


int power_of_card(long long n){
	int sum = 0;
	
	while(n != 0){
		sum += n%10;
		n = n/10;
	}
	
	return sum;
}

int main(){
	int  T,N,i;
	long long x,y;		//integer on card
	int p1,p2;			//points 
	int t1,t2;			//total
	
	cin >> T;
	
	for(int tc = 0;tc < T;tc++){
		cin >> N;
		
		p1 = 0;
		p2 = 0;
		for(i = 0;i < N;i++){
			cin >> x >> y;
			t1 = power_of_card(x);
			t2 = power_of_card(y);
			
			if(t1 > t2){
				p1++;
			}else if(t1 < t2){
				p2++;
			}else{
				p1++;
				p2++;
			}	
		}
		
		if( p1 > p2){
			cout << 0 << " " << p1 << endl;
		}else if( p1 < p2){
			cout << 1 << " " << p2 << endl;
		}else{
			cout << 2 << " " << p1 << endl;
		}
	}
	
	
	return 0;
}
