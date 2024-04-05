#include <iostream>
#include <string>

using namespace std;

class Student{
	private:
		string name;
		int id;
		int score;
	public:
		void setName(string name_){
			name = name_;
		}
		string getName(){
			return name;
		}
		void setId(int id_){
			id = id_;
		}
		int getId(){
			return id;
		}
		void setScore(int score_){
			score = score_;
		}
		int getScore(){
			return score;
		}
};



int main(){
	Student s;
	s.setName("Ali");
	s.setId(810);
	s.setScore(20);
	cout << "Name: " << s.getName() << endl;
	cout << "Id: " << s.getId() << endl;
	cout << "Score: " << s.getScore() << endl;
}
