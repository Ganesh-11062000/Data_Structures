#include<bits/stdc++.h>

using namespace std;

void all_primes(int *arr,int N){
	//set only odd numbers as prime
	for(long long i = 3;i <= N; i+= 2){
		arr[i] = 1;
	}	
	
	//iterate over odd numbers
	for(long long i = 3;i <= N; i+= 2){
		if(arr[i] == 1){
			for(long long j = i*i; j <= N;j += i){
				arr[j] = 0;
			}
		}
	}
	arr[2] = 1;
}

int main(){
	long long N;
	cin >> N;
	
	// 1 -> prime number
	// 0 -> not a prime number
	int primes[N+1] = {0};
	
	all_primes(primes,N);
	
	for(int i = 0;i <= N;i++){
		if(primes[i] == 1) cout << i << " ";
	}
	
	cout << endl;
	return 0;
}
