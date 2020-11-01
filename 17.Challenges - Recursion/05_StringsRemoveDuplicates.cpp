#include <iostream>
#include <string>
using namespace std;

string RemoveDuplicate(string s){
	if(s.length() == 0){
		return "";
	}
	if(s[0] == s[1]){
		return RemoveDuplicate(s.substr(1));
	}
	return s[0] + RemoveDuplicate(s.substr(1));
}

int main(){
	string s;
	getline(cin, s);
	// s = heeyythere
	cout << RemoveDuplicate(s) << endl;
}