/*
1
01
101
0101
10101

- odd start with 1 and alternate values
- even start with 0 and alternate values

int main(){

	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if((i%2==1 and j%2==1) or (i%2==0 and j%2==0)){
				cout<<"1";
			}
			else
				cout<<"0";
		}
		cout<<endl;
	}


}
*/
#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		int val = i%2==0?1:0;

		for(int cnt=1;cnt<=i;cnt++){
			cout<<val;
			val = 1-val;
		}
		cout<<endl;
	}

}