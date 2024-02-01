#include <iostream>

using namespace std;

int main(){
	int size;
	cin >> size;
	int array[size];
	for(int i=0; i<size; i++){
		cin >> array[i];
	}
	
	for(int i=0; i<size; i++){
		int smallestIndex = i;
		for(int j=i+1; j<size; j++){
			if(array[smallestIndex] > array[j]){
				smallestIndex = j;
			}
		}
		int temp;
		temp = array[i];
		array[i] = array[smallestIndex];
		array[smallestIndex] = temp;
	}
	
	for(int i=0; i<size; i++){
		cout << array[i];
	}
}
