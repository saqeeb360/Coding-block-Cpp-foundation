#include <iostream>
using namespace std;

int fibonacci(int n){
	// base case
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}

	return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
	// Program to find 7th fibonacci 
	int n = 7;
	cout << fibonacci(n) << endl;
}