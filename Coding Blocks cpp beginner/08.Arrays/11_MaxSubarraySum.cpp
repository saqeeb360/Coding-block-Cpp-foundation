#include <iostream>
using namespace std;

int main(){
	// Program to find max subarrays sum
	int n;
	cout<<"Enter length of array : ";
	cin>>n;

	int a[1000] ;
	cout<<"Enter the array :\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max = a[0];
	int left;
	int right;
	for(int i=0; i<n; i++){
		for(int j=i ; j<n ; j++){
			// Next for loop is for the printing from k=i+1 to k=j
			int sum = 0;
			for(int k=i ; k<=j ; k++){
//				cout<<a[k]<<" ";
				sum += a[k];
			}
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