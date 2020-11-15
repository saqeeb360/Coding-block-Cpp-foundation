#include <iostream>
using namespace std;
int Partition(int arr[], int si, int ei){
	int pivot = arr[si];
	// Count numbers smaller the pivot
	int p_index = ei;
	for(int i=ei; i>si; i--){
		if(arr[i] > pivot){
			swap(arr[i],arr[p_index]);
			p_index--;
		}
	}
	swap(arr[si] , arr[p_index]);
	return p_index;
}
/*
	int i = si;
	int j = ei;
	while(i < p_index && j>p_index){
		if(arr[i] > pivot && arr[j] < pivot){
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
		else if(arr[i] < pivot){
			i++;
		}
		else if(arr[j] > pivot){
			j--;
		}
	}
*/

void Quicksort(int arr[], int si, int ei){
	if(si >= ei){
		return;
	}

 	int p_index = Partition(arr, si,ei);
	Quicksort(arr, si, p_index-1);
	Quicksort(arr,p_index+1, ei);
}

int main(){
	int arr[] = {5,3,8,9,7,1,2,77,6,4,2,5,7,88};
	int n = sizeof(arr)/ sizeof(arr[0]);

	Quicksort(arr,0,n-1);

	for(int i=0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}