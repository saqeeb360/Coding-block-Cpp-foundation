#include <iostream>
using namespace std;


int main(){
	// Program to enter 2d character array
	char b[][10] = {{'q','w','e','\0'}, {'d','e','f','\0'}};
	cout<<b[0]<<endl;
	cout<<b[1]<<endl;
	cout<<endl;
	
	char c[][10] = {"poi","uyt"}; 
	cout<<c[0]<<endl;
	cout<<c[1]<<endl;
	

	char a[10][10];
	a[0][0] = 'a';
	a[0][2] = 'b';
	a[0][3] = 'c';
	a[0][4] = '\0';

	/*
	Below code will not run as array (a[1]) are not assignable in C
	We need to use cin.getline() instead
	a[1] = "def\0";
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<endl;	
	


	*/
}