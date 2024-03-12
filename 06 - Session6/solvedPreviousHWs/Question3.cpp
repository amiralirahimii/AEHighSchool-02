#include <iostream>

using namespace std;

int main(){
	int number;
	cin >> number;
	double result = 0;
	for(int i=1; i<=number; i++){
		double expression = 1;
		for(int j=0; j<i; j++){
			expression = expression * i;
		}
		expression = 1 / expression;
		result = result + expression;
	}
	cout << result;
}
