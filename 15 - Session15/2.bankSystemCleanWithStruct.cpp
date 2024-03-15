#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct User{
	int id;
	int balance;
};

int findIndexInList(vector<User> users, int id){
	for(int i=0; i<users.size(); i++){
		if(users[i].id == id){
			return i;
		}
	}
	return -1;
}

vector<User> deposit(vector<User> users, int id, int amount){
	int idIndex = findIndexInList(users, id);
	if(idIndex == -1){
		User newUser;
		newUser.id = id;
		newUser.balance = amount;
		users.push_back(newUser);
	}
	else{
		users[idIndex].balance += amount;
	}
	cout << "OK\n";
	return users;
}

vector<User> withDraw(vector<User> users, int id, int amount){
	int idIndex = findIndexInList(users, id);
	if(idIndex==-1){
		cout << "Invalid Account\n";
	}
	else{
		if(users[idIndex].balance >= amount){
			users[idIndex].balance -= amount;
			cout << "OK\n";
		}
		else{
			cout << "Not enough money\n";
		}
	}
	return users;
}

void printBalance(vector<User> users, int id){
	int idIndex = findIndexInList(users, id);
	if(idIndex==-1){
		cout << "Invalid Account\n";
	}
	else{
		cout << "account balance: " << users[idIndex].balance << "\n";
		return;
	}
}

void run(){
	vector<User> users;
	while(true){
		string command;
		cin >> command;
		if(command == "DEPOSIT"){
			int id, amount;
			cin >> id >> amount;
			users = deposit(users, id, amount);
		}
		else if(command == "WITHDRAW"){
			int id, amount;
			cin >> id >> amount;
			users = withDraw(users, id, amount);
		}
		else if(command == "BALANCE"){
			int id;
			cin >> id;
			printBalance(users, id);
		}
	}
}

int main(){
	run();
}
