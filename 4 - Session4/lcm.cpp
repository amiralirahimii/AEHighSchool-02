#include <iostream>
#include <string>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int max = (a>b)?a:b;
	int kmm;
	for(int i=a*b;i>=max;i--){
		if(i%a==0 && i%b==0){
			kmm = i;
		}
	}
	cout << kmm;
}

