#include <iostream>
using namespace std;

int main(){

	// Comma Operator
	int x,y,z;

	// Assignment Operator
	x = 10;
	y = 20;
	z = 30;

	// Logical Operator
	if(z>x and z>y){
		cout<<"C is largest"<<endl;
	}

	// Ternary Operator
	x==10?cout<<"Equal to 10\n":cout<<"Not equal to 10 \n";
	z%2==0?cout<<"Even\n":cout<<"Odd\n";

	// Bitwise Operator 
	cout<<"AND 5&7 : "<<(5&7)<<endl;
	cout<<"OR 5|7 : "<<(5|7)<<endl;
	cout<<"XOR 5^7 : "<<(5^7)<<endl;
	cout<<"NOT 5 : "<<(~5)<<endl;

	// Shift Operator 
	x = x << 2;
	cout<<x<<endl;
	cout<< (y>>1) << endl;

	// Unary Operator
	cout<< (&x) <<endl;  //Address of x

	//Post Increment / Decrement Operator
	int a = 10;
	z = a++;
	cout<< z <<endl;
	z = ++a;
	cout<< z <<endl;

	// Compound Assignment Operator
	a = 10;
	a *=3;
	cout<<"A after multiply : "<<a<<endl;
	a %= 8;
	cout<<"A after modulo : "<<a<<endl;

	int b = 5;
	b<<=1;
	cout<<"B after one left shift : "<<b<<endl;
}