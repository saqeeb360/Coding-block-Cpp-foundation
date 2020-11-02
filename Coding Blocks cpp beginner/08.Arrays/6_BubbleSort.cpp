#include <iostream>
using namespace std;

void BubbleSort(int a[], int n){
	for(int i=0;i<n;i++){
		int max_index = i;
		for(int j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}
}

int main(){
	// Program to Sort randomly shuffled array in ascending order
	// Bigger bubbles(numbers) are sent to the last index
	// max is sent to the last
	int n;
	cout<<"Enter length of array : ";
	cin>>n;

	int a[1000] ;
	cout<<"Enter the array :\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	BubbleSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

}