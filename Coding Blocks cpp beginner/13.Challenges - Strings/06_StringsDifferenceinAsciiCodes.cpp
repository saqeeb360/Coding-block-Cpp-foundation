#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	getline(cin, s);

	int i=1;
	for(; i<s.length(); i++){
		// i-1,i
		cout<<s[i-1] << (s[i] - s[i-1]);
	}
	cout<<s[i-1] << endl;
}