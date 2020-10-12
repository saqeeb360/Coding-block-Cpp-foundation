#include <iostream>
using namespace std;

int main(){
	// Program to print pattern
	//     1
	//    232
	// 	 34543
	// 	4567654
	// 567898765 	  	

	int n = 5;
	for(int i=1;i<=n;i++){
		//starting Spaces n-1
		for(int space=1;space<n-i;space++){
			cout<<" ";
		}

		// Increasing number
		int val = i;
		for(int cnt=1;cnt<=i;cnt++){
			cout<<val;
			val=val+1;
		}
		// Decreasing number
		val = val-2;
		for(int d=1;d<i;d++){
			cout<<val;
			val=val-1;
		}
		cout<<"\n";


	}
}