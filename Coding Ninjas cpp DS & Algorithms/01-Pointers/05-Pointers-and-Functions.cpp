#include <iostream>
using namespace std;

void IncreamentPointer(int* p){
	p = p+1;
	cout <<"Inside the function " << p << endl;
}

void print(int* p){
	cout << *p << endl;
}

void increament(int* p){
	(*p)++;
	*p = *p + 5;
}

int sum(int *a, int size){
	int ans = 0;
	for(int i=0; i<size; i++){
		ans += *(a+i);
	}
	return ans;
}

int main(){
	int i = 10;
	int* p = &i;

	print(p);

	cout << "Before the function " <<p << endl;
	IncreamentPointer(p);
	cout << "After the function " << p << endl;

	cout << "Before the function " <<*p << endl;
	increament(p);
	cout << "After the function " << *p << endl;

	int a[10] = {1,2,3,4,5,6};
	cout << sum(a,10) << endl;
	cout << sum(a+5,5) << endl;
}