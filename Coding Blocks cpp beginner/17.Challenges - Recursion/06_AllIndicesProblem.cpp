#include <iostream>
using namespace std;

void allindex(int *a, int i, int n,int key){
	if(a[i] == key){
		cout << i << " ";
	}

	if(i==n){
		cout << endl;
		return;
	}

	allindex(a, i+1, n, key);
}

int main(){
	int arr[] = {1,1,1,1};
	int n = sizeof(arr)/sizeof(int);

	int key;
	cin >> key;
	allindex(arr,0,n-1, key);
}