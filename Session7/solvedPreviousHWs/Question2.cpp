#include <iostream>

using namespace std;

int main(){
	int number;
	cin >> number;
	int result = 0;
	while(number != 0){
		result = result * 10;
		result = result + (number % 10);
		number = number / 10;
	}
	cout << result;
}
