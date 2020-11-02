#include <iostream>
using namespace std;

int main(){
	char b[] = "abc";
	int a[] = {1,2,3};
	cout << a << endl;
	cout << b << endl;
	cout << &b << endl;

	char* c = &b[0];
	cout << c << endl;

	char temp = 'b';
	char* xtemp = &temp;
	cout << temp << endl;
	cout << xtemp << endl;
	

	char str[] = "Hello"; // Right
	char*xstr = "Hello"; // Wrong
	cout << &xstr << endl;
	return 0;
}