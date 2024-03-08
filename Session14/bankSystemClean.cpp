#include <iostream>
#include <string>
#include <vector>

using namespace std;

int findIndexInList(vector<int> idList, int id){
	for(int i=0; i<idList.size(); i++){
		if(idList[i] == id){
			return i;
		}
	}
	return -1;
}

vector<int> withDraw(vector<int> idList, vector<int> balanceList, int id, int amount){
	bool doesIdExist = false;
	for(int i=0; i<idList.size(); i++){
		if(idList[i]==id){
			doesIdExist = true;
			if(balanceList[i] >= amount){
				balanceList[i] -= amount;
				cout << "OK\n";
			}
			else{
				cout << "Not enough money\n";
			}
		}
	}
	if(doesIdExist == false){
		cout << "Invalid Account\n";
	}
	return balanceList;
}

void printBalance(vector<int> idList, vector<int> balanceList, int id){
	for(int i=0; i<idList.size(); i++){
		if(idList[i] == id){
			cout << "account balance: " << balanceList[i] << "\n";
			return;
		}
	}
	cout << "Invalid Account\n";
}

void run(){
	vector<int> idList;
	vector<int> balanceList;
	while(true){
		string command;
		cin >> command;
		if(command == "DEPOSIT"){
			int id, amount;
			cin >> id >> amount;
			int idIndex = findIndexInList(idList, id);
			if(idIndex == -1){
				idList.push_back(id);
				balanceList.push_back(amount);
			}
			else{
				balanceList[idIndex] += amount;
			}
			cout << "OK\n";
		}
		else if(command == "WITHDRAW"){
			int id, amount;
			cin >> id >> amount;
			balanceList = withDraw(idList, balanceList, id, amount);
		}
		else if(command == "BALANCE"){
			int id;
			cin >> id;
			printBalance(idList, balanceList, id);
		}
	}
}

int main(){
	run();
}
