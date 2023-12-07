//input n (n<=1000 means int numbers[1000])
//n numbers
//input x
//sample input:
//4
//1 2 3 4
//3
//output:
//"yes"

#include <iostream>

using namespace std;

int main(){
	int number;
	cin >> number;
	int array[1000];
	for(int i=0; i<number; i++){
		cin >> array[i];
	}
	int x;
	cin >> x;
	bool exists = false;
	for(int i=0; i<number; i++){
		if(array[i] == x){
			exists = true;
		}
	}
	if(exists == true){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
