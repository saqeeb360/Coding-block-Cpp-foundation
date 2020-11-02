#include <iostream>
using namespace std;

int firstOccurence(int *arr,int n, int key){
	// Base case : milgya
	if(n==0){
		return -1;
	}
	if(arr[0] == key ){
		return 0;
	}
	int index = firstOccurence(arr+1, n-1, key);
	if(index == -1){
		return -1;
	}
	return index+1;
}
int linearSearch(int *a, int i, int n, int key){
	// works similar to for loop and efficient 
	// Also it doesnot take stack memory
	if(i == n){
		// Not found
		return -1;
	}
	// Base case
	if(a[i] == key){
		// Found and return index
		return i;
	}
	return linearSearch(a, i+1, n , key);
}

int main(){
	// return first index of value in the array
	int arr[] = {0,1,2,3,4,5,6,7,6,5,4,3,2,1};
	int key;
	cin >> key;
	int n = sizeof(arr)/sizeof(int);

	cout << firstOccurence(arr,n, key) << endl;
	cout << linearSearch(arr, 0,n,key) << endl;
}