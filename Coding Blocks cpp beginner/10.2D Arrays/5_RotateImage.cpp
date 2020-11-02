#include <iostream>
#include <algorithm>
using namespace std;

void display(int a[][100], int n){
	for(int i=0; i<= n-1; i++){
		for(int j=0; j <= n-1; j++){
			cout << a[i][j] << " ";
		}
		cout<<endl;
	}
}

void rotate_stl(int a[][100], int n){
	//Step 1 : Reverse the rows
	for(int row=0; row<=n-1; row++){
		//Reverse the row
		reverse(a[row], a[row] + n);
	}
	//Step 2 : Transpose
	// Use the code of swapping a[i][j] to a[j][i]
	for(int i =0; i<= n-1; i++){
		for(int j=0; j<=n-1 ; j++){
			if(i<j){
				swap(a[i][j], a[j][i]);
			}
		}
	}
}


void rotate(int a[][100], int n){

	//Step 1 : Reverse the rows
	for(int row=0; row<=n-1; row++){
		//Reverse the row
		int startCol = 0;
		int endCol = n-1;
		while(startCol < endCol){
			swap(a[row][startCol], a[row][endCol]);
			startCol++;
			endCol--;
		}
	}
	//Step 2 : Transpose
	// Use the code of swapping a[i][j] to a[j][i]
	for(int i =0; i<= n-1; i++){
		for(int j=0; j<=n-1 ; j++){
			if(i<j){
				swap(a[i][j], a[j][i]);
			}
		}
	}
}



int main(){
	//Program to rotate image

	// input
	int a[100][100] = {0};
	int n;
	cin >> n;

	int val = 10;
	for(int i=0; i<= n-1; i++){
		for(int j=0; j <= n-1; j++){
			a[i][j] = val;
			cout << a[i][j] << " ";
			val++ ;
		}
		cout<<endl;
	}

	cout<<endl;

	rotate(a,n);
	display(a,n);	

	cout<<endl;

	rotate_stl(a,n);
	display(a,n);	

	
}