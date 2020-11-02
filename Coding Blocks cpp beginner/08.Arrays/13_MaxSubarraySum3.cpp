#include <iostream>
using namespace std;

int main(){
	// Program to find max subarrays sum
	// Kadane's Algorithm
	int n;
	cout<<"Enter length of array : ";
	cin>>n;

	int a[1000] ;
	
	cout<<"Enter the array :\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int currSum = 0;
	int maxSum = 0;

	for(int i=0; i<n; i++){
		
		currSum = currSum + a[i];

		if(currSum < 0){
			currSum = 0;
		}
		maxSum = max(currSum , maxSum);

	} 
	cout<<maxSum<<endl;

	return 0;
}