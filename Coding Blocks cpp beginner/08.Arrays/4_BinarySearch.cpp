#include <iostream>
using namespace std;

int BinarySearch(int a[], int n, int key){
	int start_index = 0;
	int end_index = n-1;
	while(start_index <= end_index){

		int mid_index = (start_index+end_index)/2;

		if(a[mid_index] > key){
			end_index = mid_index - 1;

		}
		else if(a[mid_index] < key){
			start_index = mid_index + 1;
		}
		else{
			return mid_index;
		}
	}
	return -1;

}

int main(){
	// Program for Binary search in a sorted array
	// n = 11
	// a = {1,2,3,4,5,6,7,8,9,13,17}
	//		0 1 2 3 4 5 6 7 8  9 10 


	int n;
	cout<<"Enter length of array : ";
	cin>>n;

	int a[1000] ;
	cout<<"Enter the array :\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int key;
	cout<<"Enter the key : ";
	cin>>key;

	cout<<"The index of key is "<< BinarySearch(a,n,key) <<endl;

}