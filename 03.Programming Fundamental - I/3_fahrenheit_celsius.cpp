#include <iostream>
using namespace std;

int main(){

	//Program to display farhenheit celsius table
	int f = 0;
	while(f<=300){
		// Convert 0`F to Celsius
		int c = 5/9.0*(f-32);
		cout<<f<<" : "<<c<<endl;

		f=f+20;
	}

}