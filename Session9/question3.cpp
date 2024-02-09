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
	
	int sums[m];
	
	for(int i=0; i<m; i++){
		sums[i] = 0;
		for(int j=0; j<n; j++){
			sums[i] += board[i][j];
		}
	}
	for(int i=0; i<m; i++){
		cout << sums[i] << "\n";
	}
}
