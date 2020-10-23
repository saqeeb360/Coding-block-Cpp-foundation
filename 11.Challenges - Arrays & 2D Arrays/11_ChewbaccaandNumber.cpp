#include <iostream>
using namespace std;

#define ll unsigned long long int

int main(){
	ll x = 9765456789956782;
//	cin>>x;
	cout<<x<<endl;
	ll power = 1;
	ll number = 0;
	while(x>0){
		int digit = x%10;
		if((digit == 9) and (x/10 == 0)){
			// no change
		}
		else if(digit >= 5){
			digit = 9 - digit;
		}

		number = number + power*digit;
		power *= 10;
		x /= 10;
	}
	cout<<number<<endl;
}