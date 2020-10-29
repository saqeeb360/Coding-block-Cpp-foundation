#include <iostream>
using namespace std;

int main(){
	int x = 15;
	int *xptr = &x;

	cout << &x << endl;
	cout << xptr << endl;
	cout << *(&x) << endl;
	cout << *xptr << endl;

	cout<< "More with Pointers" << endl;
	cout << *(xptr) + 1 << endl;
	cout << *xptr + 1 << endl;
	cout << *(xptr + 1) << endl;


	cout << *(&xptr) << endl;
	cout << &(*xptr) << endl;

	// Double pointer 
	cout<<"Double pointer" << endl;
	cout <<"This is address of xptr : "<< &xptr << endl;
	int **xxptr;
	xxptr = &xptr;
	cout <<"This is stored in xxptr : "<< xxptr << endl;
	cout << "2 times dereference of xxptr will print bucket x value : " << **(xxptr) << endl;



}