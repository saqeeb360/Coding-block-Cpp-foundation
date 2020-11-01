#include <iostream>
using namespace std;

void ConvertDuplicate(string s,int j, int n){
	// if j and j+1 is same print * 
	cout << s[j];
	if(j==n){
		cout << endl;
		return;
	}
	
	if(s[j] == s[j+1]){
		cout << "*";
	}
	ConvertDuplicate(s,j+1,n);
}

int main(){
	string s;
	getline(cin, s);

	int n = s.length();
	ConvertDuplicate(s,0, n-1);
}