#include <iostream>
using namespace std;

int main(){
	// Program to convert binary to decimal
	int n;
	cin>>n;

	int p=1;
	int decimal=0;

	while(n>0){
		int last=n%10;
		decimal=decimal + p*last;

		p=p*2;
		n=n/10;
	}
	cout<<decimal<<endl;
}