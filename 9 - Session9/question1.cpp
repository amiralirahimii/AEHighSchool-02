#include <iostream>

using namespace std;

int main(){
	int board[3][2];
//	board[0][0] = 1;
//	board[1][0] = 1;
//	board[2][0] = 1;
//	board[0][1] = 2;
//	board[1][1] = 2;
//	board[2][1] = 2;

	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			if(j == 0){
				board[i][j] = 1;
			}
			else if(j == 1){
				board[i][j] = 2;
			}
		}
	}
	
	
	for(int i=0; i<3; i++){
		for(int j=0; j<n; j++){
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
}


