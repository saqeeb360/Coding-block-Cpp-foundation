#include <iostream>
using namespace std;

int SumofDigits(int car_no){
	int sum = 0;
	while(car_no>0){
		int digit = car_no%10;
		sum = sum + digit;
		car_no /=10;
	}	
	return sum;
}


int main() {
	// Program to find which car will run on Sunday or not.
	// Problem Constraints: N<=1000
	// Car No >=0 && Car No <=1000000000
	// each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4
	// or sum of digits which are odd in that number is divisible by 3
	// 12345 -> Yes 
	// 12134 -> No
	int n = 2;
	unsigned int car_no;

	for(int i=1;i<=n;i++){
		cin>>car_no;

		int sum = SumofDigits(car_no);

		if(sum%4==0){
			cout<<"Yes"<<endl;
		}
		else if(sum%3==0 and sum%2!=0){
			cout<<"Yes"<<endl;			
		}
		else{
			cout<<"No"<<endl;
		}
	}

}
 