#include <iostream>
using namespace std; 

void inc1(int** p){
	p = p + 1;
	cout << p << endl;

}

void inc2(int ** p){
	*p = *p + 1;
	cout << *p << endl;
}

void inc3(int ** p){
	**p = **p + 1;
	cout << **p << endl;
}


int main(){
	int x = 10; 
	int* xptr = &x;
	int**xxptr = &xptr;

	cout << x << endl;
	cout << *xptr << endl;
	cout << **xxptr << endl;

	cout << "before function " << xxptr  << endl;
	inc1(xxptr);
	cout << "after function " << xxptr  << endl;

	cout << "before function " << *xxptr  << endl;
	inc2(xxptr);
	cout << "after function " << *xxptr  << endl;

	xptr = &x;
	cout << ** xxptr << endl;
	cout << "before function " << **xxptr  << endl;
	inc3(xxptr);
	cout << "after function " << **xxptr  << endl;

}