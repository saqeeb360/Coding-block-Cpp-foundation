#include <iostream>
using namespace std;

int main(){
	unsigned long long int no;
	cin>> no;

	short int digit;
	cin>>digit;

	short int count = 0;

	while(no>0){
		int last_digit = no%10;
		if(last_digit == digit){
			count++;
		}

		no/=10;
	}

	cout<<"The digit count is "<<count<<endl;
	return 0;
}