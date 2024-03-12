#include <iostream>

using namespace std;

//here we are iterating through array 3 times which is not efficient

int main(){
	int number;
	cin >> number;
	int array[1000];
	for(int i=0; i<number; i++){
		cin >> array[i];
	}
	int firstMax = INT_MIN;
	for(int i=0; i<number; i++){
		if(firstMax < array[i]){
			firstMax = array[i];
		}
	}
	int secondMax = INT_MIN;
	for(int i=0; i<number; i++){
		if(secondMax < array[i] && array[i] != firstMax){
			secondMax = array[i];
		}
	}
	int thirdMax = INT_MIN;
	for(int i=0; i<number; i++){
		if(thirdMax < array[i] && array[i] != firstMax && array[i] != secondMax){
			thirdMax = array[i];
		}
	}
	cout << thirdMax << " " << secondMax << " " << firstMax;
}
