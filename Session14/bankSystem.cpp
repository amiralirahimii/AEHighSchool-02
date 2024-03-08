#include <iostream>
#include <string>
#include <vector>

using namespace std;

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

int getBalance(vector<int> idList, vector<int> balanceList, int id){
	for(int i=0; i<idList.size(); i++){
		if(idList[i] == id){
			return balanceList[i];
		}
	}
	return -1;
}

void run(){
	string command;
	cin >> command;
	vector<int> idList;
	vector<int> balanceList;
	while(true){
		if(command == "DEPOSIT"){
			int id, amount;
			cin >> id >> amount;
			bool doesIdExist = false;
			for(int i=0; i<idList.size(); i++){
				if(idList[i] == id){
					balanceList[i] += amount;
					doesIdExist = true;
				}
			}
			if(doesIdExist == false){
				idList.push_back(id);
				balanceList.push_back(amount);
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
			int balance;
			balance = getBalance(idList, balanceList, id);
			if(balance == -1){
				cout << "Invalid Account\n";
			}
			else{
				cout << "account balance: " << balance << "\n";
			}
		}
	}
}

int main(){
	run();
}
