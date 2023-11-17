#include <iostream>
#include <string>

using namespace std;

int main(){
	int a;
	int b;
	cin >> a;
	cin >> b;
	int min;
	if(a < b){
		min = a;
	}
	else{
		min = b;
	}
	int bmm;
	for(int i = 1; i <= min; i++){
		if(a%i==0 && b%i==0){
			bmm = i;
		}
	}
	cout << bmm;
	
}

