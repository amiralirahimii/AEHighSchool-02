#include <iostream>

using namespace std;

//think about what the question was
int main(){
	int numbers[10];
	for(int i=0; i<10; i++){
		cin >> numbers[i];
	}
	
	//int max = INT_MIN;
	int max = numbers[0]
	for(int i=0; i<10; i++){
		if(max < numbers[i]){
			max = numbers[i];
		}
	}
	cout << max;
}
