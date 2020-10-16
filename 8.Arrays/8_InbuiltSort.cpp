#include <iostream>
#include <algorithm>

using namespace std;

// Comparator Function
bool compare(int a, int b){
	cout<<"Comparing "<< a << " and " << b << endl;
	return a > b;
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

	cout<<a<<" "; 	// Prints starting address of the array
	cout<<a+2<<endl;// Adds 8 byte to the address	

	//sort(a, a+n); // Default Ascending order

	sort(a, a+n, compare); // Desending order

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

}