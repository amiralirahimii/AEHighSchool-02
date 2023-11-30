#include <iostream>

using namespace std;

int main(){
	int number;
	cin >> number;
	int initNumber = number;
	bool isPrime = false;
	if(number <= 2){
		isPrime = true;
		cout << "Invalid Input";
	}
	while(isPrime == false){
		number = number - 1;
		isPrime = true;
		for(int j=2; j<number; j++){
			if(number % j == 0){
				isPrime = false;
			}
		}
	}
	if(initNumber > 2){
		cout << number;
	}
}
