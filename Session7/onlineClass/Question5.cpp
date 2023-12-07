#include <iostream>

using namespace std;

// print the first n elements of fib series which: 1<=n<=1000 

int main(){
	int number;
	cin >> number;
	int fibSeries[1000];
	fibSeries[0] = 1;
	fibSeries[1] = 1;
	for(int i=2; i<number; i++){
		fibSeries[i] = fibSeries[i-1] + fibSeries[i-2];
	}
	for(int i=0; i<number; i++){
		cout << fibSeries[i] << " ";
	}
}
