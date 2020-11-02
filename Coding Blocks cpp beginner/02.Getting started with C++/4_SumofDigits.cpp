#include <iostream>
using namespace std;

int main(){

	//Program to sum the digits
	int n;
	cin>>n;

	int sum = 0;
	int last_digit;

	while(n>0){
		last_digit = n%10;
		sum = sum+last_digit;

		//Update statement
		n = n/10;
	}

	cout<<"Sum of digits"<<sum<<endl;
	return 0;

}
