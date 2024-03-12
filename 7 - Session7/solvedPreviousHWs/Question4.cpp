#include <iostream>

using namespace std;

int main(){
	int number;
	cin >> number;
	
	int toAdd = 9;
	int sum = 0;
	for(int i=0; i<number; i++){
		sum = sum + toAdd;
		toAdd = toAdd * 10 + 9;
	}
	cout << sum;
}
