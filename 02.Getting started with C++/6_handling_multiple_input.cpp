#include <iostream>
using namespace std;

int main(){
	//Program to print square of number list
	int n, number;
	cin>>n;

	while(n>0){
		cin>>number;
		cout<<number*number<<endl;
		n=n-1;
	}
}