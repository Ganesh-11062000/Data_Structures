#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	//enables fast io 
	//works for cin and cout	
	
	int T;
	cin >> T;
	
	for(int tc = 0;tc < T;tc++){
		int n;
		cin >> n;
		
		int arr[n];
		for(int i = 0;i<n;i++){
			cin >> arr[i];
		}
		
		int prevCarSpeed = arr[0];
		int ans = 0;
		
		for(int i=0;i < n;i++){
			if(prevCarSpeed >= arr[i]){
				ans++;
				prevCarSpeed = arr[i];
			}
			
		}
		cout << ans << endl;	
	}
	return 0;
}

//	https://www.codechef.com/LRNDSA01/problems/LAPIN
