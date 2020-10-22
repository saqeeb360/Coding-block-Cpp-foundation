#include <iostream>
#include <algorithm>
using namespace std;

void display(int a[][10], int n){
	for(int i=0; i<= n-1; i++){
		for(int j=0; j <= n-1; j++){
			cout << a[i][j] << " ";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(){
	//Rotate a NxN array
	int n;
	cin >> n;
	int a[10][10];

	int val =10;
	for(int i=0; i<=n-1; i++){
		for(int j=0; j<=n-1; j++){
			a[i][j] = val;			
			val++;
		}
	}
	display(a,n);

	// Reverse the order from top to bottom for clockwise rotation
	for(int i=0; i<=n-1; i++){
		int start = 0;
		int end = n-1;
		while(start < end){
			swap(a[start][i], a[end][i]);
			start++;
			end--;
		}
	}
	display(a,n);
	
	// After reversing we need to transpose the array to get the rotated image

	for(int i =0; i<=n-1; i++){
		for(int j=0; j<i; j++){
			swap(a[i][j],a[j][i]);
		}
	}

	display(a,n);
}