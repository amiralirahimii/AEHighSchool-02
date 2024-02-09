//input:
//5
//output:
//1 2 4 2 1
//2 4 8 4 2
//4 8 16 8 4
//2 4 8 4 2
//1 2 4 2 1
//
//input:
//4
//output:
//1 2 2 1
//2 4 4 2
//2 4 4 2
//1 2 2 1

#include <iostream>

using namespace std;

int main(){
	int size;
	cin >> size;
	int board[size][size];
	
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			if(i==0 && j==0){
				board[i][j] = 1;
			}
			else if(i!=0 && j==0){
				if(i < size/2){ // imagine size = 4 : size/2 = 2 -----> i = 0, 1 are considered top side
					board[i][j] = board[i-1][j]*2;	
				}
				else if(i == size/2){
					if(size % 2 == 0){
						board[i][j] = board[i-1][j];
					}
					else{
						board[i][j] = board[i-1][j]*2;
					}
				}
				else {
					board[i][j] = board[i-1][j]/2;
				}
			}
			else{
				if(j < size/2){
					board[i][j] = board[i][j-1]*2;
				}
				else if(j == size/2){
					if(size % 2 == 0){
						board[i][j] = board[i][j-1];
					}
					else{
						board[i][j] = board[i][j-1]*2;
					}
				}
				else {
					board[i][j] = board[i][j-1]/2;
				}
			}
		}
	}
	
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
	
}
