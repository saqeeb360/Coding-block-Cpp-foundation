#include <iostream>
using namespace std;

int main(){
	//Program to print a pattern
	/* 	1
		11
		111
		1001
		11111
		100001
	*/
	int n;
	cin>>n;

	int i=1;
	
	while(i<=n){
		int row=1;

		//Odd numbers
		if(i%2){
			while(row<=i){
				cout<<"1";
				row++;
			}
		}
		//even numbers
		else{
			cout<<"1";
			while(row<=i-2){
					cout<<"0";
					row++;
				}
			cout<<"1";
		}
		cout<<"\n";		
		i++;
	}
}