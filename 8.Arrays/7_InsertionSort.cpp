#include <iostream>
using namespace std;

void InsertionSort(int a[], int n){
	for (int i = 1; i <= n-1; i++)
	{
		/*  */
		int e = a[i];
		int j = i-1;

		while(j>=0 and e < a[j] ){
			a[j+1] = a[j]; 
			j--;
		}
		a[j+1] = e; 
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

	InsertionSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

}