#include <iostream>
using namespace std;

int BinaraySearch(int *a, int start, int end, int key){
	// Base Case
	if(start > end){
		return -1;
	}
	int mid = (start + end)/2;
	if(a[mid] > key){
		// So end should point to middle-1
		return BinaraySearch(a,start, mid-1, key);
	}
	if(a[mid] < key){
		return BinaraySearch(a,mid+1,end, key);
	}
	return mid; // a[i] == key
}

int main(){
	// Binary Search by recursion
	int a[] = {1,2,3,4,5,10,20};
//	int n = sizeof(a)/sizeof(a[0]);

	int key ;
	cin >> key;
	int n = sizeof(a)/sizeof(int);
	cout << BinaraySearch(a,0,n-1,key) << endl;
}