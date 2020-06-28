#include<bits/stdc++.h>
using namespace std;

int main(){
	int T,i;
	cin >> T;
	
	for(int tc = 0;tc < T;tc++){
		string s;
		char c;
		cin >> s;
		
		int lFreq[26],rFreq[26];
		
		for(i = 0;i < 26;i++){
			lFreq[i] = 0;
			rFreq[i] = 0;
		}
		
		//abccab
		//rotor
		for(i = 0;i < s.length()/2;i++){
			c = s[i];
			lFreq[c - 'a']++;
		}
		
		for(i = (s.length()+1)/2;i<s.length();i++){
			c = s[i];
			rFreq[c - 'a']++;
		}
		
		bool isSame = true;
		for(i = 0;i < 26;i++){
			if (lFreq[i] != rFreq[i]){
				isSame = false;
				break;
			}	
		}
		
		if(isSame){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	
}

//	https://www.codechef.com/LRNDSA01/problems/LAPIN
