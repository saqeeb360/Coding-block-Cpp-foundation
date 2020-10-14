#include <iostream>
#include <climits>
using namespace std;


void printLS(int a[1000], int len){
	int largest = INT_MIN;
	int smallest = INT_MAX;

	// Algorithm to find Largest and smallest
	for(int i=0 ; i<len ; i++){
		if(a[i] > largest ){
			largest = a[i];
		}
		if(a[i] < smallest){
			smallest = a[i];
		}
	}
	/*
	Another way to write the above code
	for(int i=0 ; i<len ; i++){
		largest = max(largest, a[i]);
		smallest = min(smallest,a[i]);
	}
	*/

	cout<<"Largest : "<<largest<<"\nSmallest : "<<smallest<<endl;

}

int main(){

	// Program to find the smallest and largest number in an array
	// Smallest -> +infinity
	// Largest  -> -infinity
	
	int n;
	cout<<"Enter length of array : ";
	cin>>n;

	int a[1000] ;
	cout<<"Enter the array :\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	printLS(a,n);

}