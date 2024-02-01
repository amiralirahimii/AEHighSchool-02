#include <iostream>

using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	int board[m][n];

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> board[i][j];
		}
	}
	
	
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
}
