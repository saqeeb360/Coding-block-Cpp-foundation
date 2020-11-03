#include <iostream>
using namespace std;

#define PI 3.14
int a;

void g(){
	cout << "G " << a << endl;
	a++;
}
void f(){
	cout << "f " << a << endl;
	a++;
	g();
}


int main(){
	a = 10;
	f();
	cout <<"Main " << a << endl;
	cout << PI * 2 * 2 << endl;
}