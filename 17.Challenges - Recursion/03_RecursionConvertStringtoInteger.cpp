#include <iostream>
using namespace std;

int ConvertToInt(string s,int n){
	if(n < 0){
		return 0;
	}
	int digit = s[n] - '0';
	return 10 * ConvertToInt(s,n-1) + digit;
}

int main(){
	string s;
	getline(cin, s);

	int n = s.length();
	int number = ConvertToInt(s, n-1);
	cout << number << endl;
}