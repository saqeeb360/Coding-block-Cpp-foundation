#include <iostream>
using namespace std;

int main(){
/*
1
11
202
3003
40004
*/
	int n ;
	cin>>n;
	
	int k = 1;	

	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=i ; j++ ){
			if(i == 1){
				cout<<"1";
			}
			else{
				if(j == 1 or j == i){
					cout<<k;
					j==i ? (k=k+1) : (k=k);
				}
				else cout<<"0";
			}

		}
		cout<<endl;
	}		

	return 0;
}

