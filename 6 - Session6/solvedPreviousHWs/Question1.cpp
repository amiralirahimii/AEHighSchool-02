#include <iostream>

using namespace std;

int main(){
	int number;
	cin >> number;
	int result=0;
	for(int i=0; i<number; i++){
		int innerSum = 0;
		for(int j=0; j<=i; j++){
			innerSum = innerSum + j + 1;
		}
		result = result + innerSum;
	}
	cout << result;
}
