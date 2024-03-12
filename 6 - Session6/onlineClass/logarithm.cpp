#include <iostream>

using namespace std;

int main(){
	int x;
	int y;
	cin >> x >> y;
	int counter = 1;
	int nextY = y;
	while(nextY != x){
		nextY *= y; 
		counter++;
	}
	cout << counter;
}