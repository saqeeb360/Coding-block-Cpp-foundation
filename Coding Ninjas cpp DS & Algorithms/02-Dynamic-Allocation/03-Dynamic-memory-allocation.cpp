#include <iostream>
using namespace std;


int main(){
	int *p = new int;
	*p = 10;
	cout << *p << endl;

	double * d = new double;
	char * c = new char;
	cout << *c << endl;

	int *parray = new int[50];

	int n;
	cout << "Enter number of elements ";
	cin >> n;
	int *pa2 = new int[n];

	for(int i=0; i<n; i++){
		cin >> pa2[i];
 	}

	// pa2[0] = 10; // assigning 10 at 0th place
	// *(pa2+0) = 20; // another way of assigning - same as above

	// Find max with DP
 	int max = -1;
 	for(int i=0; i<n; i++){
 		if(pa2[i] > max){
 			max = pa2[i] ;
 		}
 	}
 	cout << max << endl;

 	// deallocation
 	delete [] pa2;  // doesnot delete pointer 
 	pa2 = new int;
 	delete pa2;


}