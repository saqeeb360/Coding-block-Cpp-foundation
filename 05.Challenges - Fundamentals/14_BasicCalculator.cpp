#include <iostream>
using namespace std;

int main(){
	unsigned long long int n1,n2;

	char ch = '1';
	
	while(true){
		cout<<"Enter operation : ";	
		cin>>ch;
		if(ch=='x' or ch=='X'){
			break;
		}
		else if(ch!= '*' and ch!= '/' and ch!= '+' and ch!= '-' and ch!= '%'){
			cout<<"Invalid operation. Try again.\n";
			continue;
		}

		cin>>n1>>n2;
		switch(ch){
			case '*' : cout<<n1*n2<<endl;
			break;

			case '/' : cout<<n1/n2<<endl;
			break;

			case '+' : cout<<n1+n2<<endl;
			break;

			case '-' : cout<<n1-n2<<endl;
			break;

			case '%' : cout<<n1%n2<<endl;
			break;

		}
	}

}