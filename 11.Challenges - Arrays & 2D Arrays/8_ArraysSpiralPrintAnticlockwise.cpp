#include <iostream>
using namespace std;

int main(){
	int m,n;
	cin>> m>> n;

	int a[100][100];
	int val = 10;

	for(int i=0; i<=m-1; i++){
		for(int j=0; j<=n-1; j++){
			a[i][j] = val;
			cout<<val<<" ";
			val++;

		}
		cout<<endl;
	}	

	int startrow = 0;
	int startcol = 0;
	int endrow = m-1;
	int endcol = n-1;

	while(startcol <= endcol and startrow <= endrow){
		//top down first column
		for(int i=startrow; i<=endrow; i++ ){
			cout<<a[i][startcol]<<" ";
		}
		startcol++;

		//bottom left to right row
		for(int i= startcol; i<=endcol; i++){
			cout<<a[endrow][i]<<" ";
		}
		endrow--;

		//bottum up last column
		if(startcol < endcol){
			for(int i=endrow; i>=startrow; i--){
				cout<<a[i][endcol]<<" ";
			}
		}
		endcol--;

		// top right to left row
		if(startrow < endrow){
			for(int i=endcol; i>= startcol; i--){
				cout<<a[startrow][i]<<" ";
			}
		}
		startrow++;
	}
}

