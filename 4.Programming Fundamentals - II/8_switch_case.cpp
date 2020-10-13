#include <iostream>
using namespace std;

int main(){
	// Switch case
	/* Design a Menu - where pressing a button gives you the corresponding item

	B - Burger
	M - Maggie
	P - Pizza 
	C - Coke
	D - Dosa
	.
	.
	and so on!
	*/

	char ch;
	cin>>ch;

	switch(ch){
		case 'b' :
		case 'B' : cout<<"Burger\n";
			break;

		case 'm' :
		case 'M' : cout<<"Maggie\n";
			break;

		case 'p' :
		case 'P' : cout<<"Pizza\n";
			break;

		case 'c' :
		case 'C' : cout<<"Coke\n";
			break;

		case 'd' :
		case 'D' : cout<<"Dosa\n";
			break;
		default : cout<<"Item no available!\n";

	}
}