#include <iostream>
using namespace std;

int main(){
	char ch ;
	ch = cin.get();

	if(ch >= 'A' and ch <= 'Z' ){
		cout<<"UPPERCASE"<<endl;
	}
	else if(ch >= 'a' and ch <= 'z'){
		cout<<"lowercase"<< endl;
	}
	else{
		cout<< "Invalid" << endl;
	}
}