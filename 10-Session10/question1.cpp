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
	
	int sums[n];
	
	for(int i=0; i<n; i++){
		sums[i] = 0;
	}
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			sums[j] += board[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		cout << sums[i] << "\n";
	}
}
