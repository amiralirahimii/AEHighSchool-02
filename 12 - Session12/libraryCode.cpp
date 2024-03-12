#include <iostream>
#include <string>

using namespace std;

void add_book(string bookList[], string bookName){
	for(int i=0; i<10; i++){
		if(bookList[i] == "EMPTY"){
			bookList[i] = bookName;
			cout << "OK\n";
			break;
		}
	}
}

void find_book(string bookList[], string bookName){
	for(int i=0; i<10; i++){
		if(bookList[i]==bookName){
			cout << "book " << bookName << " at index " << i << "\n";
			return;
		}
	}
	cout << "book " << bookName << " does not exist\n";
}

void show_books(string bookList[]){
	int count = 1;
	for(int i=0; i<10; i++){
		if(bookList[i]!="EMPTY"){
			cout << count << "." << bookList[i] << "\n";
			count++;
		}
	}
}

void remove_book(string bookList[], string bookName){
	for(int i=0; i<10; i++){
		if(bookList[i] == bookName){
			bookList[i] = "EMPTY";
			cout << "OK\n";
			return;
		}
	}
	cout << "book " << bookName << " does not exist\n";
}

void readInput(string bookList[]){
	while(true){
		string command;
		cin >> command;
		if(command == "add_book"){
			string bookName;
			cin >> bookName;
			add_book(bookList, bookName);
		}
		else if(command == "find_book"){
			string bookName;
			cin >> bookName;
			find_book(bookList, bookName);
		}
		else if(command == "show_books"){
			show_books(bookList);
		}
		else if(command == "remove_book"){
			string bookName;
			cin >> bookName;
			remove_book(bookList, bookName);
		}
	}
}

void emptyList(string bookList[]){
	for(int i=0; i<10; i++){
		bookList[i] = "EMPTY";
	}
}

int main(){
	string bookList[10];
	emptyList(bookList);
	readInput(bookList);
}
