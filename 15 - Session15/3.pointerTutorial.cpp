#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	int* pa, pb, pc;
	pa = &a;
	pb = &b;
	pc = &c;
	cin >> *pb >> *pc;
	*pa = *pb + *pc;
	cout << *pa;
}
