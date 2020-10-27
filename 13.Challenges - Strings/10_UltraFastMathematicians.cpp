#include <iostream>
#include <string>
using namespace std;

void FastMathematics(string str){
	int left = 0;
	int right = ((str.length())-1)/2 + 1;
	while(right < str.length()){
		if(str[left] == str[right]){
			cout<<"0";
		}
		else{
			cout<<"1";
		}
		left++;
		right++;
	}
	cout<<endl;
}
int main(){
	int t;
	cin >> t;

	cin.get();
	
	string str[10]; 
	for(int i=0; i<=t-1; i++){
		getline(cin, str[i]);
	}
	
	for(int i=0; i<t; i++){
		FastMathematics(str[i]);
	}


}