#include <iostream>

using namespace std;

int main(){
	int number;
	cin >> number;
	int array[1000];
	for(int i=0; i<number; i++){
		cin >> array[i];
	}
	for(int i=1; i<number; i++){
		array[i] *= array[i-1];
	}
	for(int i=0; i<number; i++){
		cout << array[i] << "  ";
	}
}
