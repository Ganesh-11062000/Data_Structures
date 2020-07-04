#include<bits/stdc++.h>
using namespace std;


void display(int arr[8][8]){
	for(int i = 0;i < 8;i++){
		for(int j = 0;j < 8;j++){
			cout << (char)arr[i][j];
		}
		cout << endl;
	}
}

int main(){
	int T,K,i,r,c;
	cin >> T;
	
	for(int tc = 0;tc < T;tc++){
		
		int chess_board[8][8] = {
		{'O','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'}
		};
		
		cin >> K;
		
		if(K < 8){
			chess_board[0][K] = 'X';
			for(i = 0;i <= K;i++){
				chess_board[1][i] = 'X';
			}
		}else if(K < 56){
			r = K/8;
			c = K%8;
			
			for(i = 0;i < 8;i++){
				chess_board[r][i] = 'X';
			}
			if(K%8 != 0){
				for(i = 0;i < c;i++){
					chess_board[r][i] = '.';
					chess_board[r+1][i] = 'X';
				}	
				chess_board[r+1][i] = 'X';	
			}		
		}
		else if(K < 64){
			c = K%8;
			for(i = 0;i < 8-c;i++){
				chess_board[7][i] = 'X';
			}
		}
		
		display(chess_board);
		
	}
	
	return 0;
}

