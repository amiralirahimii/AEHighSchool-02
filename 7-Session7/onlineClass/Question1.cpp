#include <iostream>
#include <string>

using namespace std;

//think about what the question was
int main(){
	int ages[5] = {5, 7, 9, 2, 3};
	string names[5];
	names[0] = "Amir";
	names[1] = "Saeed";
	names[2] = "Mammad";
	names[3] = "Hamid";
	names[4] = "Sara";
	
	for(int i=0; i<5; i++){
		cout << names[i] << " is " << ages[i] << " years old." << endl;
	}
	
}
