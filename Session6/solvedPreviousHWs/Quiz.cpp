#include <iostream>

using namespace std;

int main(){
	int base;
	int power;
	cin >> base >> power;
	int previousPower = base;
	for(int i=0; i<power-1; i++){
		int nextPower = 0;
		for(int j=0; j<base; j++){
			nextPower = nextPower + previousPower;
		}
		previousPower = nextPower;
	}
	cout << previousPower;
}
