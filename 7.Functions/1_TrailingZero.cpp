#include <iostream>
using namespace std;

int main(){
	// Program to find trailing zeros in Factorial

	unsigned int no;
	cin>>no;
	int div = 5;

	int ans = 0;
	int between = no/div;
	while(between>0){
		ans = ans + between;

		div *=5;
		between = no/div;
	}
	cout<<ans<<endl;
}