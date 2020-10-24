#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
// using commparator function to get reverse order
bool compare(string a, string b){
	if(a > b){
		return true;
	}
	return false;
}



int main(){
	int n ;
	cin >> n;

	cin.get(); // capture extra \n from buffer because of cin

	string s[100];
	for(int i = 0; i <= n-1 ; i++){
		getline(cin, s[i]); 
	}
	cout<<endl;
	// Sort and display
	sort(s,s+n, compare);
	for(int i=0; i<=n-1; i++){
		cout<<s[i]<<endl;
	}
}