#include <iostream>
using namespace std;

int main(){
	int i = 10;
	int* p = &i;

	cout << p << endl;
	p++;
	cout << p << endl;
	p = p+2;
	cout << p << endl;

	int *p1, *p2;

	p1 = p;
	p +=2 ;
	p2 = p;
	if(p2 > p1){ // generally used in arrays
		cout<< "True" << endl;
	}
	else{cout << "False" << endl;
	}
}