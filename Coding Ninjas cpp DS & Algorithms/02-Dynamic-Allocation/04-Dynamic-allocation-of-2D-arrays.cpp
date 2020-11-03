#include <iostream>
using namespace std;

int main(){
	int r=5;
	int c=3;
	//cin >> r >> c;


	// creating r rows head
	int ** xxptr = new int*[r];
	
	cout << sizeof(xxptr) <<endl;

	int val = 10;
	for(int i=0; i<r; i++){
		*(xxptr+i) = new int[c];
		//xxptr[i] = new int[c];
		for(int j=0; j<c; j++){
			xxptr[i][j]  = val;
			val++;
		}
	}

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout << xxptr[i][j] << " ";
		}
		cout << endl;
	}

	// deallocation
	for(int i=0; i<r; i++){
		delete [] xxptr[i];
	}
	delete [] xxptr;
}