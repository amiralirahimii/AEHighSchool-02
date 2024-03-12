#include <iostream>

using namespace std;

int main(){
	int fCurrent;
	int f1Previous = 1;
	int f2Previous = 1;
	int number;
	cin >> number;
	cout << f2Previous << " " << f1Previous << " ";
	for(int i=0; i<number-2; i++){
		fCurrent = f1Previous + f2Previous;
		cout << fCurrent << " ";
		f2Previous = f1Previous;
		f1Previous = fCurrent;
	}
}
