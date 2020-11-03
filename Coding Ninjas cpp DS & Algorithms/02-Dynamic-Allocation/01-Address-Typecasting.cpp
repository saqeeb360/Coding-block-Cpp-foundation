#include <iostream>
using namespace std;

int main(){
	int i = 65;
	char ch = i;
	cout << ch << endl;

	int *iptr = &i;
	// char * cptr = iptr; // implicit typecasting
	char * cptr = (char*)iptr; // Explicit typecasting
	
	cout << iptr << endl;
	cout << cptr << endl;

	cout << *iptr << endl;
	cout << *cptr << endl;
	cout << *(cptr + 1)<< endl;
	cout << *(cptr + 2)<< endl;
	cout << *(cptr + 3)<< endl;

}