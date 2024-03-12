#include <iostream>

using namespace std;

bool isPrime(int number){
	if(number == 1){
		return false;
	}
	for(int i=2; i<number; i++){
		if(number%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int number;
	cin >> number;
	int count = 0;
	while(true){
		if(isPrime(number+1)){
			count++;
		}
		if(count==3){
			cout << number+1;
			
			
			break;
		}
		else{
			number++;
		}
	}
}
