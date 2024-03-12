#include <iostream>
#include <string>

using namespace std;

//abdcba : start=0, end=5
//abdcba : start=1, end=4  ----> bdcb
//abdcba : start=2, end=3  ----> dc
//
//abba 0,3 -> 1,2 -> 2,1
//
//
//abcba 0,4 -> 1,3 -> 2,2
//bcb
//c

bool isPalindrome(string a, int start, int end){
	if(start>=end){
		return true;
	}
	if(a[start] != a[end]){
		return false;
	}
	return isPalindrome(a, start+1, end-1);
}

int main(){
	string name;
	cin >> name;
	isPalindrome(name, 0, name.size()-1);
}
