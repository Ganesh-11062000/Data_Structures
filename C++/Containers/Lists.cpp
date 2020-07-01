//	Access functions
//	we can use iterator and advance it to get values

//	functions on List
//	1) front()
//	2) back()
//	3) push_front(val)
//	4) push_back(val)
//	5) pop_front()
//	6) pop_back()
//	7) assign
//	8) insert(it,val)
//	9) remove(val)			=> remove the all occurances of val
//	10) sort()				=> sorts in ascending order
//	11) list1.merge(list2) 	=> list1 gets updated
//	12) erase()				=> removes all values
//	13) reverse()			=> reverse the list


//	Capacity functions
//	1) Size()
//	2) empty()



#include<bits/stdc++.h>
using namespace std;

int main(){
	list<int> list1,list2;
	
	// insert front
	list1.push_back(3);
	list1.push_front(1);
	
	// iterator to start - position 0
	auto it = list1.begin();
	
	// iterator points to position 1	
	advance(it,1);
	list1.insert(it,2);

	// display list 1	
	cout << "List 1 => ";
	for(int x:list1) cout << x << " ";
	
	// initialize list 2 with 4
	list2.assign(3,4);
	
	cout << "\nList 2 => ";
	for(auto it = list2.begin();it!=list2.end();it++){
		cout << *it << " ";
	}	
	
	// pop elements from front & back
	list2.pop_front();
	list2.pop_back();
	
	
	list2.push_back(5);
	list2.push_back(2);
	list2.push_back(9);
	list2.push_back(7);
	
	
	// remove 2 from list 2
	list2.remove(2);
	
	
	// display list 2	
	cout << "\nList 2 => ";
	for(int x:list2) cout << x << " ";
	
	
	// sort list 2
	list2.sort();	
	cout << "\nList 2 => ";
	for(int x:list2) cout << x << " ";
	
	
	auto it2 = list2.begin();
	advance(it2,1);
	cout << "\nlist2[1] = " << *it2;
		
	//merging two list : no return value	
	list1.merge(list2);
	
	// display list 1 after merging	
	cout << "\nList 1 => ";
	for(int x:list1) cout << x << " ";
	
	
	cout << "\nFront => " << list1.front();
	cout << "\nBack => " << list1.back();
	
	list1.reverse();
	// display list 1 after reversing	
	cout << "\nList 1 => ";
	for(int x:list1) cout << x << " ";
	
			
	return 0;
}

//	Output : 
//	List 1 => 1 2 3
//	List 2 => 4 4 4
//	List 2 => 4 5 9 7
//	List 2 => 4 5 7 9
//	list2[1] = 5
//	List 1 => 1 2 3 4 5 7 9
//	Front => 1
//	Back => 9
//	List 1 => 9 7 5 4 3 2 1
