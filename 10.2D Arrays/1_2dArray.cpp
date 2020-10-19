#include <iostream>
using namespace std;

int main(){
	int a[100][100] = {0};

	int m, n;
	cin>>m>>n;

	for(int i=0; i<= m-1 ; i++){
		for(int j=0; j<=n-1; j++){
			cin>>a[i][j];
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}