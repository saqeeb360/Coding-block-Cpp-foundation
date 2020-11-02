#include <iostream>
using namespace std;
#define ll long long int

bool checkSorted(ll *a,int i, int n){
	if(i == n){
		return true;
	}
	if(a[i] > a[i+1]){
		return false;
	}
	
	return checkSorted(a,i+1, n);
}

int main(){
	// Program to know Sorted array
	int n = 8;
	ll arr[] = {1,2,3,4,5,6,7,8};

	cout << checkSorted(arr,0, n-1) << endl;
}