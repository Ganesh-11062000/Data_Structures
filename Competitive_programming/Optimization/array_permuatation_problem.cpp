// finding all possible permuatations of a string or an array
// we need to sort the array in ascending order
// if we all possible permuatations are performed
// we will end up with an array in descending order
// if initially array was in descending order next_permuation will retuan false !!!


#include<bits/stdc++.h>
using namespace std;

void display(vector<int> a){
	for(int i = 0;i < a.size();i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	vector<int> arr = {5,4,2};
	string str1 = "cab";
	string str2 = "baa";
	
	sort(arr.begin(),arr.end());
	cout << "Sorted Array => ";
	display(arr);
	
	while(next_permutation(arr.begin(),arr.end())){
		display(arr);
	}
	
	sort(str1.begin(),str1.end());
	cout << "\nSorted String 1 => ";
	cout << str1 << endl;
	
	do{
		cout << str1 << endl;
	}while(next_permutation(str1.begin(),str1.end()));
	
	
	
	sort(str2.begin(),str2.end());
	cout << "\nSorted String 2 => ";
	cout << str2 << endl;
	
	do{
		cout << str2 << endl;
	}while(next_permutation(str2.begin(),str2.end()));

	return 0;
}

//	Output :
//	Sorted Array => 2 4 5
//	2 5 4
//	4 2 5
//	4 5 2
//	5 2 4
//	5 4 2
//	
//	Sorted String 1 => abc
//	abc
//	acb
//	bac
//	bca
//	cab
//	cba
//	
//	Sorted String 2 => aab
//	aab
//	aba
//	baa
