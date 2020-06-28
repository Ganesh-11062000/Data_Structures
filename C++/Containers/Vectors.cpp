//	Access functions
//	1) at()		=> v1.at(index)
//	2) []		=> v1[index]
//	3) front()	=> front element in array
//	4) back()	=> last element in array

//	Capacity functions
//	1) size()		=> number of elements in vector
//	2) capacity()	=> max. possible elements the vector can hold- 1,2,4,8,...
//	3) empty()		=> 1 if vector is empty else 0

//	Iterator functions
//	1) begin()		=> iterator to beginning
//	2) end()		=> iterator to end
//	3) rbegin()		=> iterator to end but used for reverse iteration
//	4) rend()		=> iterator to beginning but used for reverse iteration


//	Modifier functions
//	1) push_back()		=> add element at end of vector
//	2) pop_back()		=> delete last element
//	3) insert(it,val)	=> erase elements
//	4) erase(it)			=> deletes a specific element
//	5) clear()

//	Other functions
//	1) assign()			=> initialize vector	
	

#include<bits/stdc++.h>
using namespace std;


int main(){
	vector<int> v1;
	
//	4 elements each initialized by 1
	v1.assign(4,1);
	
	v1.push_back(2);
	
	cout << "Vector => ";
	for(int i =0;i<v1.size();i++){
		cout << v1[i] << " ";
	}
	
	cout << "\nCapacity = " << v1.capacity() << endl;
	
	for(int i =0;i<v1.size();i++){
		v1[i] = i+1;
	}
	
	cout << "Vector => ";
	for(auto it = v1.begin();it != v1.end();it++){
		cout << *it << " ";
	}
	cout << endl;
	
	//insert 10 at index 1
	int index = 1;
	v1.insert(v1.begin()+index,10);		
	
	cout <<"v1[1] = " << v1[1] << endl;
	
	//remove element at index 0
	v1.erase(v1.begin());
	cout << "first element = " << v1[0] << endl;
	
	//remove element at end
	v1.pop_back();
	cout << "last element = " << v1[v1.size()-1] << endl;
	
	cout << "Vector => ";
	for(int x:v1){
		cout << x << " ";
	}
	
	cout << "\nReverse Vector => ";
	for(auto it = v1.rbegin();it != v1.rend();it++){
		cout << *it << " ";
	}
	cout << endl;
	
	
	return 0;
}

//	Output
//	Vector => 1 1 1 1 2
//	Capacity = 8
//	Vector => 1 2 3 4 5
//	v1[1] = 10
//	first element = 10
//	last element = 4
//	Vector => 10 2 3 4
//	Reverse Vector => 4 3 2 10
