#include <iostream>

using namespace std;

class Date{
	private:
		int day;
		int month;
		int year;
		bool isKabise();
		bool isValid();
		int howManyDaysThisMonthHas();
	public:
		void setDate(int day_, int month_, int year_);
		void printDate();
};

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

void Date::setDate(int day_, int month_, int year_){
	day = day_;
	month = month_;
	year = year_;
	if(!isValid()){
		abort();
	}
}

void Date::printDate(){
	cout << day << "/" << month << "/" << year <<endl;
}

int main(){
	Date d;
	d.setDate(28, 12, 2000);
	d.printDate();
	cout << d.howManyDaysThisMonthHas();
}
