#include <iostream>

using namespace std;

bool isPrime(int number){
	if(number == 1){
		return false;
	}
	for(int i=2; i<number; i++){
		if(number%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int number;
	cin >> number;
	if(isPrime(number) == true){
		cout << "Is Prime";
	}
	else{
		cout << "Is Not Prime";
	}
}
