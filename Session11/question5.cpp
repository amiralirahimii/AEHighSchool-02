#include <iostream>

using namespace std;

bool isKabise(int year){
	if(year%400==0){
		return true;
	}
	else if(year%100==0){
		return false;
	}
	else if(year%4==0){
		return true;
	}
	else{
		return false;
	}
}

void increment(int date[3]){
	date[0]++;
	if(date[1]==1 || date[1]==3 || date[1]==5 || date[1]==7 || date[1]==8 ||
		date[1]==10 || date[1]==12){
		if(date[0] > 31){	
			date[0] = 1;
			date[1]++;	
		}
	}
	else if(date[1]==4 || date[1]==6 || date[1]==9 || date[1]==11){
		if(date[0] > 30){	
			date[0] = 1;
			date[1]++;
		}
	}
	else{
		if(isKabise(date[2])==true){
			if(date[0] > 29){
				date[0] = 1;
				date[1]++;
			}
		}
		else{
			if(date[0] > 28){
				date[0] = 1;
				date[1]++;
			}
		}
	}
	if(date[1]>12){
		date[1]=1;
		date[2]++;
	}
}


int main(){
	int date1[3];
	int date2[3];
	cin >> date1[0] >> date1[1] >> date1[2];
	cin >> date2[0] >> date2[1] >> date2[2];
	int diff = 0;
	while(date1[0]!=date2[0] || date1[1]!=date2[1] || date1[2]!=date2[2]){
		increment(date1);
		diff++;
	}
	cout << diff;
}
