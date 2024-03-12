#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int number;
	cin >> number;
	vector<int> numberList;
	for(int i=0; i<number; i++){
		int myInput;
		cin >> myInput;
		numberList.push_back(myInput);
	}
	for(int i=0; i<numberList.size(); i++){
		cout << numberList[i] << " ";
	}
}
