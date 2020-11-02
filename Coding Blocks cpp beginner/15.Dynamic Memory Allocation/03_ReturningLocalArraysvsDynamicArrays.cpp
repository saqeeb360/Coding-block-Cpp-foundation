#include <iostream>
using namespace std;

int* fun(){
	int *a = new int[5]{0};
	a[0] = 10;
	a[1] = 15;
	a[2] = 20;
	a[3] = 24;
	cout << a << endl;
	cout << a[2] <<endl;
	return a;
}

int main(){
	int *b = fun();
	cout << b << endl;
	cout << b[2] <<endl;

	delete b;
	return 0;
}