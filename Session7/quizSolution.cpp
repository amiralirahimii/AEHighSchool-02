#include <iostream>

using namespace std;

// print sum of first n elements of the series: X - X^3 + X^5 - X^7 + ...

int main(){
	int x, n;
	cin >> x >> n;
	int sum = 0;
	int sign = 1;
	for(int i=0; i<n; i++){
		int thisElement = 1;
		for(int j=0; j<(2*i+1); j++){
			thisElement = thisElement * x;
		}
		sum = sum + sign * thisElement;
		sign = sign * -1;
	}
	cout << sum;
	
}
