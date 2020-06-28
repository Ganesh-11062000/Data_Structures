//	Access functions
//	1) at()		=> arr.at(index)
//	2) []		=> arr[index]
//	3) front()	=> front element in array
//	4) back()	=> last element in array

//	Capacity functions
//	1) size()	=> returns size of array
//	2) empty()	=> 1 if array is empty else 0
	
//	Iterator functions
//	1) begin()		=> iterator to beginning
//	2) end()		=> iterator to end
//	3) rbegin()		=> iterator to end but used for reverse iteration
//	4) rend()		=> iterator to beginning but used for reverse iteration

//	Other functions
//	1) fill(ele)	=> initializes array elements with ele
	


#include<bits/stdc++.h>

using namespace std;

int main()
{
	//declaration of  array
	array <int,5> arr;
	
	//intialization of array
	arr.fill(0);
	
	cout << "Array => ";
	for(int i = 0;i < arr.size();i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	for(int i = 0;i < arr.size();i++){
		arr[i] = i+1;
	}
	
	cout << "First element = " << arr.front() << endl;
	
	cout << "Last element = " << arr.back() << endl;
	
	cout << "Array is empty : " << arr.empty() << endl;
	
	cout << "Size of Array = " << arr.size() << endl;
	
//	using iterator functions
	cout << "Array => ";
	for(auto it = arr.begin();it != arr.end();it++){
		cout << *it << " ";
	}
	cout << endl;
	
	int x = 1;
	for(auto it = arr.begin();it != arr.end();it++){
		*it = x++;
	}
	
	cout << "Array => ";
	for(auto it = arr.rbegin();it != arr.rend();it++){
		cout << *it << " ";
	}
	cout << endl;
	
	return 0;
}

//	Output
//	Array => 0 0 0 0 0
//	First element = 1
//	Last element = 5
//	Array is empty : 0
//	Size of Array = 5
//	Array => 1 2 3 4 5
//	Array => 5 4 3 2 1
