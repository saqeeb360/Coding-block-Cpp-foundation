#include <iostream>
using namespace std;

int main(){
	//Program to print Fibonacci pattern
	int a = 0;
	int b = 1;
	int c;

	int n ;
	cin>>n;

	for(int i=1; i<=n; i++){
		for(int j = 1; j<=i; j++){
			cout<<a<<" ";			
			c = a+b;
			a = b; 
			b = c;
		}
		cout<<endl;
	}
	return 0;
}