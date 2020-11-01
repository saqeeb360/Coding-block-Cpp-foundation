#include<iostream>
#include <climits>
using namespace std;
int main(){

	// Program to count the alphabet and digits

	int digits = 0;
	int alphabets = 0;
	int spaces = 0;
	int other = 0;

	char ch;
	ch = cin.get();

	while(ch!='$'){
		if(ch>='0' and ch<='9'){
			digits++;
		}
		else if((ch>='a' and ch<='z') or(ch>='A' and ch<='Z')){
			alphabets++;
		}
		else if(ch==' ' or ch=='\n'){
			spaces++;
		}
		else{
			other++;
		}
		ch = cin.get();
	}
	cout<<"Digits : "<<digits<<endl;
	cout<<"Alphabets : "<<alphabets<<endl;
	cout<<"Spaces : "<<spaces<<endl;
	cout<<"Other : "<<other<<endl;

}