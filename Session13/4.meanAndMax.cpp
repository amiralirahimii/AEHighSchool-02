#include <iostream>
#include <vector>

using namespace std;

vector<int> readInput(){
	int number;
	cin >> number;
	vector<int> numberList;
	for(int i=0; i<number; i++){
		int myInput;
		cin >> myInput;
		numberList.push_back(myInput);
	}
	return numberList;
}

double getMean(vector<int> numberList){
	double sum = 0;
	for(int i=0; i<numberList.size(); i++){
		sum +=numberList[i];
	}
	return sum / numberList.size();
}

int getMax(vector<int> numberList){
	int max = INT_MIN;
	for(int i=0; i<numberList.size(); i++){
		if(max < numberList[i]){
			max = numberList[i];
		}
	}
	return max;
}

int main(){
	vector<int> numberList = readInput();
	cout << "Mean is " << getMean(numberList) << endl;
	cout << "Max is " << getMax(numberList) << endl;
}
