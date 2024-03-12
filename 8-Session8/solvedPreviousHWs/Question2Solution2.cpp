#include <iostream>

using namespace std;

//modified version in which we only iterate through the array once.

int main(){
	int number;
	cin >> number;
	int array[1000];
	
	for(int i=0; i<number; i++){
		cin >> array[i];
	}
	
	int firstMax = INT_MIN;
	int secondMax = INT_MIN;
	int thirdMax = INT_MIN;
	
	for(int i=0; i<number; i++){
		if(array[i] > firstMax){
			thirdMax = secondMax;
			secondMax = firstMax;
			firstMax = array[i];
		}
		else if(array[i] > secondMax){
			thirdMax = secondMax;
			secondMax = array[i];
		}
		else if(array[i] > thirdMax){
			thirdMax = array[i];
		}
	}
	cout << thirdMax << " " << secondMax << " " << firstMax;
}
