#include <iostream>

using namespace std;

//avoid accessing the memories you are not allowed to access.
int main(){
	int a[3] = {1, 2, 3};
	a[3] = 5;
	cout << a[3];
}
