#include <iostream>
using namespace std;

int FindLast(int *a,int n, int key){
	if(n<0){
		return -1;
	}
	if(a[n] == key){
		return n;
	}

	return FindLast(a,n-1, key);
}

int main(){
	// Program to find last index of the element
	int n = 9;
	int arr[] = {1,7,3,4,5,6,7,8,1};
	int key;
	cin >> key;
	// decrease n to 0
	cout << FindLast(arr,n-1, key)<< endl;
}