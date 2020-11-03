#include <iostream>
using namespace std;

int factorial(int n){
	cout << n << endl;
	int smallOutput = factorial(n-1);
	return n*smallOutput;
}

int main(){
	int n = 5;
	cout << factorial(n) << endl;
}