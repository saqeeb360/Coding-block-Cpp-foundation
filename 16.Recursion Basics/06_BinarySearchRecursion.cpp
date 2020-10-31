#include <iostream>
using namespace std;

bool BinaraySearch(*a, int key){
	int start = 0;
	int end = sizeof(a)/sizeof(a[0]) - 1;
	int mid = (start + end)/2;
	
	// Base case : number found 
	if(a[mid] == key){
		return true
	}

	else if(a[mid] > key){
		BinaraySearch()
	}



}

int main(){
	int a[] = {1,2,3,4,5,10,20};
//	int n = sizeof(a)/sizeof(a[0]);

	int key = 10;

	cout << BinaraySearch(a,key) << endl;
}