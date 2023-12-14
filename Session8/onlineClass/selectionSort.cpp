#include <iostream>

using namespace std;

//in this approach we are using a second array as a result array which is not efficient
//try modifying this program which uses only 1 array as you homework

int main(){
	int number;
	cin >> number;
	int array[1000];
	for(int i=0; i<number; i++){
		cin >> array[i];
	}
	
	int newArray[1000];
	
	for(int i=0; i<number; i++){
		int minIndex = 0;
		for(int j=0; j<number; j++){
			if(array[minIndex] > array[j]){
				minIndex = j;
			}
		}
		newArray[i] = array[minIndex];
		array[minIndex] = INT_MAX;
	}
	
	for(int i=0; i<number; i++){
		cout << newArray[i] << " ";
	}
}
