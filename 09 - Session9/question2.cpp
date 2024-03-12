#include <iostream>

using namespace std;

int main(){
	
	int board[5][30];

	for(int i=0; i<5; i++){
		for(int j=0; j<30; j++){
			board[i][j] = j+1;
		}
	}
	
	
	for(int i=0; i<5; i++){
		for(int j=0; j<30; j++){
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
}
