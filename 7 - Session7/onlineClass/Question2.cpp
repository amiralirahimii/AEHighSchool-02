#include <iostream>

using namespace std;

//think about what the question was
int main(){
	int numbers[100];
	//what if this for loop didnt exist
	for(int i=0; i<100; i++){
		numbers[i] = 1;
	}
	
	for(int i=0; i<100; i++){
		cout << numbers[i] << " ";
	}
}
