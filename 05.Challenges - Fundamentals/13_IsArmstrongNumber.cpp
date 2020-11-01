#include <iostream>
#include <math.h>
using namespace std;

int NoDigits(int no){
	unsigned short int digits = 0; 
	while(no>0){
		digits++;
		no /= 10;
	}
	return digits;
}

int main(){
	unsigned long long int no,temp, ans = 0; //
	cout<<"Enter the number : "; 
	cin>>no;
	temp = no;
	short int digits = NoDigits(no);

	while(no>0){
		int sum = (no%10);
		int power = 1;
		for(int i=1; i<=digits; i++){
			power = power * sum;
		}
		ans = ans + power;
		no/=10;
	}
	cout<<"Armstrong : ";
	temp==ans ? cout<<"True\n" : cout<<"False\n";

}