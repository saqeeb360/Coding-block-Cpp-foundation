#include <iostream>
using namespace std;

int main(){
	// Program to generate all subarrays
	int n;
	cout<<"Enter length of array : ";
	cin>>n;

	int a[1000] ;
	cout<<"Enter the array :\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	/*
	arr = {5, 4, 3, 2, 1}
	5,4
	5,4,3
	5,4,3,2
	5,4,3,2,1
	
	4,3
	4,3,2
	4,3,2,1
	
	3,2
	3,2,1

	2,1
	*/
	for(int i=0; i<n; i++){
		for(int j=i ; j<n ; j++){
			// Next for loop is for the printing from k=i to k=j
			for(int k=i ; k<=j ; k++){
				cout<<" "<<a[k];
			}
			cout<<endl;
		}
	}
}