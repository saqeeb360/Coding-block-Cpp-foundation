#include <iostream>
using namespace std;

int main(){
	// STATIC Memory Allocation
		
	// here a cannot be reassigned to different data type
	int a[100] = {0};
	cout << sizeof(a) << endl;



	// DYNAMIC Memory Allocation
	
	int *ptr;
	ptr = new int[100];
	cout << sizeof(ptr) << endl;
	cout << sizeof(*ptr) << endl;
	delete [] ptr;
	// here ptr can be used to reassign like ptr = new char[30];

	// dynamic array size 

	int n;
	cin >> n;

	ptr = new int[n]{0};
	for(int i=0; i<n ; i++){
		cin >> ptr[i];
		cout<< ptr[i] << endl;
	}

	delete [] ptr;

}