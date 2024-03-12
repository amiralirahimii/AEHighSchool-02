#include <iostream>
#include <string>
#include <vector>

using namespace std;

void checkPass(vector<string> studentNames, vector<int> studentGrades, string name){
	for(int i=0; i<studentNames.size(); i++){
		if(studentNames[i]==name){
			if(studentGrades[i] >= 10){
				cout << "YES\n";
			}
			else{
				cout << "NO\n";
			}
			return;
		}
	}
	cout << "Student " << name << " does not exist\n";
}

void findMean(vector<int> studentGrades){
	double sum = 0;
	for(int i=0; i<studentGrades.size(); i++){
		sum += studentGrades[i];
	}
	cout << "mean is "<< sum / studentGrades.size() << endl;
}

void getCommand(vector<string> studentNames, vector<int> studentGrades){
	while(true){
		string command;
		cin >> command;
		if(command == "check_pass"){
			string name;
			cin >> name;
			checkPass(studentNames, studentGrades, name);
		}
		else if(command == "find_mean"){
			findMean(studentGrades);
		}
	}
}

void readInput(){
	int number;
	cin >> number;
	vector<string> studentNames;
	vector<int> studentGrades;
	for(int i=0; i<number; i++){
		string name;
		int grade;
		cin >> name >> grade;
		studentNames.push_back(name);
		studentGrades.push_back(grade);
	}
	getCommand(studentNames, studentGrades);
}

int main(){
	readInput();
}
