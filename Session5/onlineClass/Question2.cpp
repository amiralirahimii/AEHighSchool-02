#include <iostream>

using namespace std;

int main(){
	int number;
	cin >> number;
	int biggestPrime;
	for(int i=2; i<number; i++){
		bool isPrime = true;
		for(int j=2; j<i; j++){
			if(i % j == 0){
				isPrime = false;
			}
		}
		if(isPrime == true){
			biggestPrime = i;
			
		}
	}
	cout << biggestPrime;
}
