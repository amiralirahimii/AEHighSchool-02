#include <iostream>

using namespace std;

int main(){
	int number;
	cin >> number;
	int result = 1;
	for(int i=1; i<=number; i++){
		result = result*i;
	}
	cout << result;
	//test this code and give input 0 and think why it works.
}
