#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Date{
private:
	int day;
	int month;
	int year;
	bool isKabise();
	bool isValid();
	int howManyDaysThisMonthHas();
	void incOneDay();
public:
	Date(int day_, int month_, int year_);
	void setDate(int day_, int month_, int year_);
	void printDate();
	void incNDay(int n);
	bool isEqual(Date d);
	bool isSameMonthAndDay(Date d);
};

class Person{
private:
	string name;
	Date bdate;
public:
	Person(string name_, int day_, int month_, int year_);
	string getName(){
		return name;
	}
	void printPerson();
	bool isBirthdayToday(Date d);
};

class Samane{
private:
	string name;
	Date todayDate;
	vector<Person*> personList;
public:
	Samane(string name_, int day_, int month_, int year_);
	void addPerson(Person* p);
	void printSamane();
	void incOneDay();
};

Samane::Samane(string name_, int day_, int month_, int year_)
:todayDate(day_, month_, year_)
{
	name = name_;
}

void Samane::addPerson(Person* p){
	personList.push_back(p);
}

void Samane::printSamane(){
	cout << name << " ";
	todayDate.printDate();
	for(int i=0; i<personList.size(); i++){
		personList[i]->printPerson();
	}
}

void Samane::incOneDay(){
	todayDate.incNDay(1);
	for(int i=0; i<personList.size(); i++){
		if(personList[i]->isBirthdayToday(todayDate)){
			cout << "Happy Birthday  " << personList[i]->getName() << "!\n";
		}
	}
}

Person::Person(string name_, int day_, int month_, int year_)
:bdate(day_, month_, year_)
{
	name = name_;
}

void Person::printPerson(){
	cout << name << " ";
	bdate.printDate();
}

bool Person::isBirthdayToday(Date d){
	return bdate.isSameMonthAndDay(d);
}

Date::Date(int day_, int month_, int year_){
	day = day_;
	month = month_;
	year = year_;
	if(!isValid()){
		day = 1;
		month=1;
		year=1;
	}
}


bool Date::isKabise(){
	if(year%100==0){
		if(year%400==0){
			return true;
		}
		else{
			return false;
		}
	}
	else if(year%4==0){
		return true;
	}
	else{
		return false;
	}
}

int Date::howManyDaysThisMonthHas(){
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
		return 31;
	}
	else if(month==4 || month==6 || month==9 || month==11){
		return 30;
	}
	else{
		if(isKabise()){
			return 29;
		}
		else{
			return 28;
		}
	}
}

bool Date::isValid(){
	if(year<0){
		return false;
	}
	if(month>12 || month<1){
		return false;
	}
	if(day < 0 || day > howManyDaysThisMonthHas()){
		return false;
	}
	return true;
}

void Date::printDate(){
	cout << day << "/" << month << "/" << year <<endl;
}

void Date::incOneDay(){
	int a;
	day++;
	if(!isValid()) {
		month++;
		day=1;
	}
	if(!isValid()) {
		year++;
		month=1;
	}
}

void Date::incNDay(int n){
	for(int i=0; i<n; i++){
		incOneDay();
	}
}

bool Date::isEqual(Date d){
	return (day==d.day) && (month==d.month) && (year==d.year);
}

bool Date::isSameMonthAndDay(Date d){
	return (day==d.day) && (month==d.month);
}

int main(){
	Samane samane("Golestan", 9, 3, 2024);
	samane.addPerson(new Person("amir", 11, 3, 2000));
	samane.addPerson(new Person("amirali", 11, 3, 2005));
	samane.addPerson(new Person("ali", 12, 3, 2010));
	samane.addPerson(new Person("sina", 10, 3, 2000));
	samane.addPerson(new Person("radin", 10, 3, 2006));
	samane.addPerson(new Person("taha", 9, 3, 2006));
	samane.printSamane();
	samane.incOneDay();
	samane.printSamane();
	samane.incOneDay();
	samane.printSamane();
	samane.incOneDay();
	
	
//	Person p("Golestan", 9, 3, 2024); create object
//	Person *pa = new Person("Golestan", 9, 3, 2024); create new object and return pointer
}
