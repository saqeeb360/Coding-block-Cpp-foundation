#include <iostream>
using namespace std;

int mul(int a, int b){
	if(b==1){
		return a;
	}

	return a + mul(a,b-1);
}

int main(){
	// Multiply two number without *
	int a;
	int b;
	cin >> a >> b;
	cout << mul(a,b) << endl;
}