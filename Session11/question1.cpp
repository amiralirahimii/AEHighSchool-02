#include <iostream>

using namespace std;

bool isEven(int x){
	return x%2==0;
}

int main(){
	int x;
	cin >> x;
	if(isEven(x) == true){
		cout << "Is Even";
	}
	else{
		cout << "Is Odd";
	}
}
