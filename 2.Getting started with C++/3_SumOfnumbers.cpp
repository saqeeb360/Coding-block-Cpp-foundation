#include <iostream>
using namespace std;

int main(){

	//Program to find sum of numbers from 1 to N 

	int n;
	cin>>n;

	int i = 1;
	int sum = 0;

	while(i<=n){
		sum = sum + i;
		i++;

	}
	cout<<sum<<endl;

	return 0;
}