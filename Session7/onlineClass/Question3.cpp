#include <iostream>

using namespace std;

//think about what the question was
int main(){
	int numbers[10];
	for(int i=0; i<10; i++){
		cin >> numbers[i];
	}
	
	int sum = 0;
	for(int i=0; i<10; i++){
		sum = sum + numbers[i];
	}
	cout << sum;
}
