#include <iostream>
using namespace std;

bool isSorted(int *a, int size){
	if(size < 1){
		return true;
	}
	if(a[0] > a[1]){
		return false;
	}
	return isSorted(a+1,size-1);
}

int main(){
	// Program to check array is sorted or not 

	int a[8] = {1,2,3,4,5,6,7,8};

	cout << isSorted(a,8) << endl;
}