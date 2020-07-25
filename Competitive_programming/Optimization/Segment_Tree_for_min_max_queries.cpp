#include<bits/stdc++.h>

using namespace std;
int Tree[1000000] = {-1};
int A[1000000];

void build(int node,int start,int end){
	if(start == end){
		Tree[node] = A[start];
	}
	else{
		int mid = (start + end)/2;
		
		build(2*node+1,start,mid);
		build(2*node+2,mid+1,end);
		
		Tree[node] = Tree[2*node+1] + Tree[2*node+2];
	}
}

//	update query in O(logN)
void update(int node,int start,int end,int idx,int val){
	if(start == end){
		A[idx] += val;
		Tree[node] += val;
//		cout << node << Tree[node] << endl;
	}else{
		int mid = (start + end)/2;
		
		if(start <= idx && idx <= mid){
			update(2*node+1,start,mid,idx,val);
		}else{
			update(2*node+2,mid+1,end,idx,val);
		}
	}
	
	Tree[node] = Tree[2*node+1] + Tree[2*node+2];
}

int query(int node,int start,int end,int l,int r){
	// range is completely outside
	if(r < start || l > end){
		return 0;
	}
	
	// range is completely inside
	if(l <= start && end <= r){
		return Tree[node];
	}
	
	//range is partially inside
	int mid = (start + end)/2;
	int p1 = query(2*node+1,start,mid,l,r);
	int p2 = query(2*node+2,mid+1,end,l,r);
	
	return p1 + p2;
	
}

void printTree(int N){
	cout << "\nTree => ";
	for(int i = 0;i < 2*N-1;i++){
		cout <<  Tree[i] << " ";
	}
	cout << endl;	
}

int main(){
	int N;
	cin >> N;		//size of array
	
	for(int i = 0;i < N;i++){
		cin >> A[i];
	}
	
	build(0,0,N-1);
	cout << "\nA => ";
	for(int i = 0;i < N;i++){
		cout << A[i] << " ";
	}
	
	printTree(N);
	
	cout << "\n" << query(0,0,N-1,3,4) << endl;
	
	update(0,0,N-1,1,4);
	
	printTree(N);
	
	return 0;
}
