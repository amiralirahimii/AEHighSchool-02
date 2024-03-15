#include <iostream>
//libraries to be included:
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
	/*
	line 9 and 10 are equal except if we come out of scope, a will be released
	automatically but ptr needs to be freed, search about how to free a allocated
	memory
	*/
	int a[10];
	int* ptr = (int*)malloc(10*sizeof(int));
	
	//this 2 loops are equal:
	//----------------------
	for(int i=0; i<10; i++){
		a[i] = i;
	}
	for(int i=0; i<10; i++){
		*(a+i) = 2*i;
	}
	//----------------------
	//check what is stored:
	cout << "\"a\" array:\n";
	for(int i=0; i<10; i++){
		cout << *(a+i) << " ";
	}
	cout << "\n";
	
	//this 2 loops are equal:
	//----------------------
	for(int i=0; i<10; i++){
		ptr[i] = i;
	}
	for(int i=0; i<10; i++){
		*(ptr+i) = 2*i;
	}
	//----------------------
	//check what is stored:
	cout << "\"ptr\" array:\n";
	for(int i=0; i<10; i++){
		cout << *(ptr+i) << " ";
	}
	cout << "\n";
	
	
	//2D array:
	//line 52 and 53 are equal:(except memory management)
	int b[30][20];
	int **ptr2 = (int**)malloc(30*sizeof(int*));
	for(int i=0; i<30; i++){
		ptr2[i] = (int*)malloc(20*sizeof(int));
	}
	//accessing an element in row m and column n:
	int m = 10;
	int n = 3;
	*(*(ptr2+m)+n) = 20;
	cout << "output for testing 2D array: "<< ptr2[m][n];
}
