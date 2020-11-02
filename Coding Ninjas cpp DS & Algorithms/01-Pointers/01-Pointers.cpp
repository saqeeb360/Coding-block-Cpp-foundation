#include <iostream>
using namespace std;

int main(){
	int i = 10;
	cout << &i << endl;

	int *iptr = &i;
	cout << iptr << endl;

	int** iptrptr = &iptr;
	cout << &iptr << endl;
	cout << iptrptr << endl;
	cout << *iptrptr << endl;
	cout << **iptrptr << endl;

	**iptrptr = 20;
	cout << **iptrptr << endl;
	cout << i << endl;

}