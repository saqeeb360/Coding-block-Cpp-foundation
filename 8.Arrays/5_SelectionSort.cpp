#include <iostream>

using namespace std;

void SelectionSort(int a[], int n){
	for(int i= 0; i < n - 1; i++){
		// Find out the smallest element index in unsorted part
		int min_index = i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[min_index]){
				min_index = j;
			}
		}
		if(min_index != i){
			swap(a[i], a[min_index]);
		}
	}
}



int main(){
	// Program to Sort randomly shuffled array in ascending order  
	int n;
	cout<<"Enter length of array : ";
	cin>>n;

	int a[1000] ;
	cout<<"Enter the array :\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	SelectionSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

}