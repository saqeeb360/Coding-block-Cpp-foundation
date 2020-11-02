#include <iostream>
using namespace std;

void Increasingfn(int n){
	// Base case
	if(n == 1){
		cout << "1 ";
		return;
	}
	Increasingfn(n-1);
	cout << n <<" ";
}

void Decreasing(int n){	
	if(n==0){
		cout<<endl;
		return;
	}
	cout << n << " ";
	Decreasing(n-1);
}


int main(){
	// Print increasing number from 1 to n
	int n;
	cin >> n;

	Increasingfn(n);
	cout << endl;
	Decreasing(n);
}