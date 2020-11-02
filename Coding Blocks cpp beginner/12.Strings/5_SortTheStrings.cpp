#include <iostream>
#include <utility>
#include <algorithm>
#include <cstring>
using namespace std;
/*
3
92 022
82 12
77 13
2 false numeric
*/
string ExtractTokenAtKey(string str, int key){
	
	char *s = strtok((char*)str.c_str(), " ");
	while(key>1){
		s = strtok(NULL, " ");
		key--;
	}

	return (string)s;
}

int ConvertToInt(string s){
	int ans = 0;
	int p = 1;
	for(int i=s.length()-1; i>=0 ; i--){
		ans += ((s[i] - '0')*p);
		p *=10;
	}
	return ans;
}

bool numericCompare(pair<string, string> s1,pair<string, string> s2){
	string key1, key2;
	key1 = s1.second;
	key2 = s2.second;
	return ConvertToInt(key1) < ConvertToInt(key2);
}

bool lexioCompare(pair<string, string> s1,pair<string, string> s2){
	string key1, key2;
	key1 = s1.second;
	key2 = s2.second;
	return key1 < key2;
}

int main(){
	// Program to sort String

	int n ;
	cin>>n;
	cin.get(); // consuming newline char from cin>>n
	
	char a[100][100];
	for(int i=0; i<n; i++){
		cin.getline(a[i],100);
	}

	int key;
	string reversal, ordering;
	cin >> key >> reversal >> ordering;

	pair <string, string> strPair[100];

	for(int i = 0; i<=n-1; i++){
		strPair[i].first = a[i];
		strPair[i].second = ExtractTokenAtKey(a[i], key);
	}
	
	// Next sorting
	if(ordering == "numeric"){
		sort(strPair, strPair+n, numericCompare);
	}
	else{
		sort(strPair, strPair+n, lexioCompare);

	}

	if(reversal == "true"){
		reverse(strPair, strPair+n);
	}

	// Print the output
	for(int i=0; i<=n-1; i++){
		cout << strPair[i].second << endl;
	}

	return 0;
}