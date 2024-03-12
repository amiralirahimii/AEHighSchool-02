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
	
//	sums[0] = 0
//	sums[0] += board[0][0]
//	sums[0] += board[0][1]
//	...
//	sums[0] += board[0][n-1]
//	sums[1] = 0 
//	sums[1] += board[0][0]
//	...
//  sums[1] += board[1][n-1]
//  ...
//	sums[m-1] = 0
//	...
//	sums[m-1] += board[m-1][n-1]
	for(int i=0; i<m; i++){
		cout << sums[i] << "\n";
	}
}

//3 3
//1 2 3
//1 2 3
//1 2 7
//
//6
//6
//10
