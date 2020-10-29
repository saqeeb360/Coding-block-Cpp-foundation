#include <iostream>
using namespace std;

int main(){
	int x = 15;

	// Pointer initialisation
	int *xptr;
	// Pointer declaration
	xptr = &x;

	cout << xptr << endl;
	cout << &x << endl;

	// Reassigning 

	int y = 25;
	xptr = &y;
	cout << xptr << endl;
	cout << &y << endl;

}