#include <iostream>
using namespace std;

int main(){
	int n = 5;
	cout << &n << endl;

	int * n1 = &n;
	cout << n1 << endl;

	float m = 5.5 ;
	cout << &m << endl;

	char ch = 'A';
	cout << &ch << endl;

	char * c = &ch;
	cout << c << endl;

}