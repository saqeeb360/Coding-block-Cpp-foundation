#include <iostream>
using namespace std;

#define MAX 2000

int multiply(int number, int array[], int array_size); //return array_size

void factorial(int number){
	int array[MAX];
	array[0] = 1;
	int array_size = 1;

	for(int i=2; i<=number; i++){
		array_size = multiply(i, array, array_size);
	}

	// printing of the number in reverse order
	for(int i=array_size-1; i>=0; i--){
		cout<<array[i];
	}
	cout<<endl;
}

int multiply(int x, int array[], int array_size){
	
	int carry = 0;
	// multiply each index of array with i
	for(int i=0; i<array_size; i++){
		int prod = (array[i]*x) + carry;
		// if product is 96 then a[i] = 6 and carry = 9
		array[i] = prod%10;
		carry = prod/10;
	}
	// add carry to the array
	while(carry>0){
		// if carry is 9815 then first add 5 then 1 then 8 then 9
		array[array_size] = carry % 10;
		carry /= 10;
		array_size ++;
	}

	return array_size;
}

int main(){
	int number; //  2 < n < 100
	cin >> number;
	
	factorial(number);
	return 0;
}

	/*
	ll total = 1;
	while(n > 1){
		total *= n;
		n--;
	}

	cout<<total<<endl;
	*/