#include <iostream>
using namespace std;

void BubbleSort(int *a, int n){
	// Base case
	if(n==1){
		return;
	}
	// Recursive case 
	for(int i=0; i<n-1; i++){
		if(a[i] > a[i+1]){
			swap(a[i], a[i+1]);
		}
	}
	BubbleSort(a, n-1);
}

void BubbleSortRecursive(int *a, int j, int n){
	if(n==1){
		return; // Iterated over all element and sorting is done
	}
	if(j==n-1){
		// if j reaches to the end of for loop make it zero again
		return BubbleSortRecursive(a,0,n-1);
	}
	if(a[j] > a[j+1]){
		swap(a[j], a[j+1]);
	}
	BubbleSortRecursive(a, j+1, n);
	return;
}

int main(){
	// Bubble sort using recursion
	int arr[] = {9,2,7,3,8,1,6,5,4};
	int n = sizeof(arr) / sizeof(int);

	BubbleSortRecursive(arr, 0, n);
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout<<endl;


}