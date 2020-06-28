#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	
	for(int tc = 0; tc < T;tc++){
		
		int n;
		string nationality;
		string x;
		int rank,severity;
		int laddus = 0;
		
//		first line 
		cin >> n >> nationality;
		
		for(int i =0;i<n;i++){
			cin >> x;
			if(x == "CONTEST_WON"){
				cin >> rank;
				if (rank <= 20)
					laddus += ( 300 + 20 - rank);
				else
					laddus += 300;
								
			}else if(x == "TOP_CONTRIBUTOR"){
				laddus += 300;
			
			}else if(x == "BUG_FOUND"){
				cin >> severity;
				laddus += severity;
				
			}else if(x == "CONTEST_HOSTED"){
				laddus += 50;
				
			}
		}
		
		if(nationality == "INDIAN"){
			cout << laddus/200 << endl;
		}else{
			cout << laddus/400 << endl;
		}
	}
	return 0;
}



//	https://www.codechef.com/LRNDSA01/problems/LADDU
