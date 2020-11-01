#include <iostream>
using namespace std;

int main(){
	//Program to print pattern
	/*
	1
	11
	111
	1001
	11111
	100001
	*/
	int n ;
	cin>>n;

	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=i ; j++ ){
			if(i & 1){
				cout<<"1";
			}
			else{
				if(j == 1 or j == i) cout<<"1";
				else cout<<"0";
			}

		}
		cout<<endl;
	}		


	return 0;
}