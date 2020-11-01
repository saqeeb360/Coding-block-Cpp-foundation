#include <iostream>
using namespace std;
/*
Take N as input. For a value of N=5, we wish to draw the following pattern :

                 5                   5 
                 5 4               4 5 
                 5 4 3           3 4 5 
                 5 4 3 2       2 3 4 5 
                 5 4 3 2 1   1 2 3 4 5 
                 5 4 3 2 1 0 1 2 3 4 5 
                 5 4 3 2 1   1 2 3 4 5 
                 5 4 3 2       2 3 4 5 
                 5 4 3           3 4 5 
                 5 4               4 5 
                 5                   5 

*/

int main(){
	int n;
	cin>>n;

	for(int i=1; i<= n+1 ;i++){
		int val = n;
		//Number
		for(int j=1; j<=i; j++){
			cout<<val<< " ";
			val--;
		}

		//Spaces
		int space = 2*(n-i)+1;//
		for(int j=space; j>0; j--){
			cout<<"  ";
		}

		// Number
		val++;
		for(int j=1; j<=i; j++){
			val == 0 ? cout<<"" : cout<<val<<" ";
			val++;
		}
		cout<<endl;	
	}

	// Lower Half
	for(int i=n; i>0 ;i--){
		int val = n;
		//Number
		for(int j=1; j<=i; j++){
			cout<<val<< " ";
			val--;
		}

		//Spaces
		int space = 2*(n-i)+1;//
		for(int j=space; j>0; j--){
			cout<<"  ";
		}

		// Number
		val++;
		for(int j=1; j<=i; j++){
			cout<<val<<" ";
			val++;
		}
		cout<<endl;	
	}


}