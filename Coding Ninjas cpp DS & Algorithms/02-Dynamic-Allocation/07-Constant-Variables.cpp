#include <iostream>
using namespace std;

void f(int *a){
	(*a)++;
}

void f1(int const *a){
	//(*a)++;
}

void g(int &a){
	a++;
}

void g1(int const &a){
	// a++;
}

int main(){
	const int i = 20;
	// i++; // not possible to change the value of a constant variable
	int j = 40;
	int &k = j;

	cout << k << endl;
	k++;
	cout << k << endl;

	const int &l = j;
//	l++; // Not possible as the path is constant
	j++; // this will run as the storage is not constant 
	// path is constant not the storage

	// Example 2
	cout << "Example 2 -------------" << endl;
	// Same address having different values
	const int a1 = 10;
	cout << a1 << endl;

	int &a1ptr = (int&)a1;

	a1ptr +=14;

	cout << &a1 << endl;
	cout << a1 << endl;
	cout << &a1ptr << endl;
	cout << a1ptr << endl;	
	
	// Example 3
	cout << "Example 3 -------------" << endl;
	int j1 = 20;
	int const *p2 = &j1;
	cout << *p2 << endl;
	j1++;
	cout << *p2 << endl;

	// constant variable in a function call
	cout << "Constant variable in a function call\n";
	j1 = 30;
	cout << j1 << endl;

	int *j1ptr = &j1;
	f(j1ptr);
	cout << j1 << endl;
	// I dont want to change the original value so give constant argument in the function
	f1(j1ptr);

	// 
	int &j2 = j1;
	g(j2);
	cout << j1 << endl;
	// I dont want to change the value of my main variable j1
	g1(j2);

	// -----------------------------------
	// Constant Pointers

	int a2 = 10;
	j1 = 20;

	int const *ap = &a2;
//	*ap++; // this cannot be performed as it is constant 
	ap = &j1; // this is allowed 

	int * const ap2 = &a2;
	(*ap2)++ ; // this is allowed
//	ap2 = &j1; // this is not allowed

	int const * const ap3 = &a2;
	// now nothing is allowed
	// --------------------------------------
}	