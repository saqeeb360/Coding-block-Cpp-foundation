#include <iostream>
using namespace std;

int main(){
	int m = 3; //row
	int n = 3; //column

	int a[30][30] = {{3, 30, 38},{44, 52, 54},{57, 60, 69}};

	int key;
	cin>>key;

	int row = 0;
	int col = n-1;
	while(row < m and col >= 0){
		if(a[row][col] == key){
			// found
			cout<<1<<endl;
			return 0;
		}
		else if(a[row][col] > key){
			col--;
		}
		else{
			row++;
		}
	}
	cout<<0<<endl;
	return 0;
}