#include <iostream>
using namespace std;

int main(){
	//Program to print 2d array like wave column wise


	int n ;
	cin>>n;
	
	int a[100][100];
	// 2d Array
	int val = 10;
	for(int i=0; i<=n-1 ; i++){
		for(int j=0; j<=n-1; j++){
			a[i][j] = val;
			cout<<a[i][j]<<" ";
			val++;
		}
		cout<<endl;
	}
	cout<<endl;

	// Print 
	for(int col=0; col<=n-1 ; col++){
		if(col%2 == 0){
			for(int row=0; row<=n-1; row++){
				cout<<a[row][col]<<", ";
			}
		}
		else{
			for(int row= n-1; row>= 0; row--){
				cout<<a[row][col]<<", ";
			}
		}
	}
	cout<<"End"<<endl;
}