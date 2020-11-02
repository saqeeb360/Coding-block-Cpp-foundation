#include <iostream>
using namespace std;

void display(int a[][100],int m, int n){
	for(int i=0; i<= m-1; i++){
		for(int j=0; j <= n-1; j++){
			cout << a[i][j] << " ";
		}
		cout<<endl;
	}
}


void StaircaseSearch(int a[][100], int n, int key){
	int row, col;
	row = 0;
	col = n-1;

	while(row < n and col >= 0){
		//cout<<row<<" "<<col<<endl;
		
		int currnum = a[row][col];
		
		if(currnum == key){
			cout << "Row : " << row << " and Column : "<<col<<endl; 
			return;
		}
		else if(key > currnum){
			row++;
		}
		else if(key < currnum){
			col--;
		}
		//cout<<"hello ";
	}
	cout<<"Not Found"<<endl;

}

int main(){

	int a[50][100] = {0};
	int n, key;
	cin >> n;
	int val = 10;
	for(int i=0 ; i <= n-1; i++ ){
		for(int j=0; j<= n-1; j++){
			a[i][j] = val;
			cout << a[i][j] << " ";
			val++;
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"Enter the key to search : ";
	cin >> key;
	
	StaircaseSearch(a,n, key);


}
