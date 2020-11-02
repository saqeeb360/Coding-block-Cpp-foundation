#include <iostream>
using namespace std;

int main(){

	int a[50][50] = {0};
	int m, n;
	cin >> m >> n;

	int val = 1;
	for(int i=0 ; i <= m-1; i++ ){
		for(int j=0; j<= n-1; j++){
			if(val == 10){
				val = 0;
			}
			a[i][j] = val;
			cout << a[i][j] << " ";
			val++;
//			cout<<i<<" " <<j<<endl;
		}
		cout<<endl;
	}

// Start row, end row, end column
	int startRow = 0;
	int startCol = 0;	
	int endRow = m-1;
	int endCol = n-1;

	cout<<endl;
	while(startRow <= endRow and startCol <= endCol){
		// Top Row
		for(int i = startCol ; i <= endCol; i++){
			cout << a[startRow][i] << " ";
		}
		startRow++;
		
		// End column
		for(int i=startRow; i <= endRow ; i++){
			cout << a[i][endCol] << " ";
		}
		endCol--;

		//Bottom Row
		if(startRow < endRow){
			for(int i=endCol; i>= startCol ; i--){
				cout << a[endRow][i] << " ";
			}
		}
		endRow--;

		//Start Column
		if(startCol < endCol){
			for(int i=endRow; i>= startRow ; i--){
				cout << a[i][startCol] << " " ;
			}
		}

		startCol++;
	}	
	cout<<endl;
}






































