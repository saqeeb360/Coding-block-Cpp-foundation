#include <iostream>
using namespace std;

int main(){

	/*

	char ch;
	cin>>ch;
	while(ch!='.'){
		cout<<ch;

		cin>>ch;
	}
	*/

	char ch;
	ch = cin.get();

	while(ch!='.'){
		cout<<ch;
		ch = cin.get();		
	}

}