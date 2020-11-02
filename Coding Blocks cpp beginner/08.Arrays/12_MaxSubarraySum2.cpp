#include <iostream>
using namespace std;

int main(){
	// Program to find max subarrays sum
	int n;
	cout<<"Enter length of array : ";
	cin>>n;

	int a[1000] ;
	int cumSum[1000] = {0};
	
	cout<<"Enter the array :\n";

	cin>>a[0];
	cumSum[0] = 0;

	for(int i=1;i<n;i++){
		cin>>a[i];
		cumSum[i] = cumSum[i-1]+ a[i]; 
	}
	
	int max = a[0];

	int left = -1;
	int right = -1;

	for(int i=0; i<n; i++){
		for(int j=i ; j<n ; j++){
			// Next for loop is for the printing from k=i+1 to k=j
			int sum = cumSum[j] - cumSum[i-1];

			// Update max value if sum > max
			if (sum > max){
				max = sum;
				left = i;
				right = j;
			}
//			cout<<endl;
		}
	}
	cout<<max<<endl;
	for(int i = left; i <= right; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;


}