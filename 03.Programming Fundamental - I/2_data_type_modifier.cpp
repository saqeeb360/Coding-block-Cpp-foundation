#include <iostream>
#include <climits>
using namespace std;

int main(){

	//Data Type Modifiers
	// long, short, signed, unsigned

	int x;

	cout<<sizeof(x)<<endl;
	cout<<INT_MAX<<endl;
	cout<<INT_MIN<<endl;

	x = INT_MAX;

	// What will happen it we add add to maximum range?

	cout<<"Maximum value : "<<x<<endl;
	cout<<"Max + 1 : "<<x+1<<endl;


}