#include <iostream>

using namespace std;

int factorial(int num){
	int result = 1;
	for(int i=2; i<=num; i++){
		result *= i;
	}
	return result;
}

int main(){
	int number;
	cin >> number;
	cout << factorial(number);
}
