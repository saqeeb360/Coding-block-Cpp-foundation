#include <iostream>
using namespace std;
void merge(int *arr, int si, int mid, int ei){
	
	int n1 = mid - si + 1;
	int n2 = ei - mid;

	int L[n1], R[n2];
	for(int i=0; i<n1; i++){
		L[i] = arr[si+i];
	}
	for(int i=0; i<n1; i++){
		R[i] = arr[mid+1+i];
	}
	int i = 0;
	int j = 0;
	int k = si;
	while((i < n1) && (j<n2)){
		if(L[i] < R[j]){
			arr[k] = L[i];
			i++;
		}
		else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while(i < n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j <= n2){
		arr[k] = R[j];
		k++;
		j++;	
	}

}
void MergeSort(int* arr,int si, int ei){
	if(si>=ei){
		// Length 1 array is sorted
		return;
	}
	// Get two half array
	int mid = (si+ei)/2;
	MergeSort(arr,si, mid);
	MergeSort(arr, mid+1 , ei);

	// Merge the two sorted array by recursion
	merge(arr,si, mid, ei);
}

int main(){
	// Program Merge Sort
	int n = 10;
	int arr[10] = {4,5,3,2,1,9,8,10,7,6};

	MergeSort(arr,0,n-1);

	for(int i=0; i<=10; i++){
		cout << arr[i] <<"  " ;
	}
	cout << endl;		
}