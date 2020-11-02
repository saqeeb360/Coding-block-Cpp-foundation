#include <iostream>	
using namespace std;

int main(){
	int a[10] = {0,1,2,3,4,5,6,7,8,9};

	cout << a << endl;
	cout << &a[0] << endl;

	a[0] = 5;
	// works similar to pointer
	cout << *a << endl;
	cout << *(a+1) << endl;
	cout << 6[a] << endl;

	// differnt from pointer
	int* p = a;
	cout << sizeof(a) << endl;
	cout << sizeof(p) << endl;

	// a = a+1; // error as we cannot increase the position of a[0]
	cout << sizeof(a) << endl;

	// 
	cout << a << " " << &a << endl;

	int * xptr;
	//xptr = &a;  //wrong though &a and a is same 
	xptr = a; // correct
	cout << &a << endl;
	cout << xptr <<endl;

}