#include <iostream>
using namespace std;
void inc(int &n){
	n++;
}
// Bad practice
int & f(int n){
	int a = n;
	return a;
}
// Bad practice
int *f1(){
	int i = 10;
	return &i;
}


int main(){
	int i = 10; // In symbol table i is at 0x401 and j is at 0x501 
	int j = i;	// i == 10 and  j==10 and both i and j are different bucket 
				// If we change i it will not affect j
	inc(i);
	cout << i << endl;
	cout << j << endl;
	
	int &k = f(i);
//	int &k = i; // Reference variable
//	int &k;
// 	k = i; // Error : Cannot break reference variable in two steps
	cout << k << endl;

	int l = 50;
	k = l;
	l = 100;
	cout << k << endl; 
	cout << i << endl;
	cout << l << endl;

}