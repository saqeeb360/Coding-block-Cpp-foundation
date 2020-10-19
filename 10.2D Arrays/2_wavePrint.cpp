#include <iostream>
using namespace std;

int main(){
	int a[100][100] = {0};

	int row, col;
	cin >> row >> col;

	int val = 1;
	for(int j = 0 ; j <= col-1; j++){
		for(int i = 0 ; i <= row-1 ; i++){
			a[i][j] = val;
			val++;
		}

	}

	for(int i=0; i<= row-1 ; i++){
		for(int j=0; j<=col-1; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	// Wave traversal in the array
	for(int currCol=0; currCol<= col-1; currCol++){
		if(currCol%2==0){
			//Top Down
			for(int i = 0; i<= row-1; i++ ){
				cout<< a[i][currCol] << " ";
			}
		}
		else{
			//Bottom Up
			for(int i = row-1; i>= 0; i-- ){
				cout<< a[i][currCol] << " ";
			}
		}
	}
	cout<<endl;

	return 0;
}
