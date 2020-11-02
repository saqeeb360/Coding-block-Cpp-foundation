#include <iostream>
using namespace std;

int pow(int number, int n){
	if(n==1){
		return number;
	}

	return number * pow(number, n-1);
}

int fast_power(int number, int n){
	// Base case
	if(n == 0){
		return 1;
	}
	// Recursive case
	int smaller = fast_power(number, n/2);
	smaller *=smaller ; // squaring the answer
	if(n&1){
		// odd
		return number*smaller;
	}
	else{
		return smaller;
	}

}



int main(){
	// Calculate 2^4;
	int number;
	cin >> number;
	int n ;
	cin >> n;

//	cout << pow(number, n) << endl;
	cout << fast_power(number,n) << endl;
}