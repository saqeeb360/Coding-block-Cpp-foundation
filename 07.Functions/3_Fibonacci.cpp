#include <iostream>
using namespace std;



int fibonacci(int n){ //Takes integer and gives nth fibonacci integer
	int a = 0;
	int b = 1;
	int c = 1;

	for(int i=1;i<=n-1;i++){
		c = a+b;
		a = b;
		b = c;
	}
	return c;
}



int main(){
	int number;
	cin>>number;
	cout<<"The nth number is : "<<fibonacci(number)<<endl;
	return 0;
}