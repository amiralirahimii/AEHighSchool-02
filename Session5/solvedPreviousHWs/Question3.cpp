#include <iostream>

using namespace std;

int main(){
	int x;
	int y;
	cin >> x >> y;
	
	int result = 1;
	for(int i=0; i<y; i++){
		result = result * x;
	}
	cout << result;
}
