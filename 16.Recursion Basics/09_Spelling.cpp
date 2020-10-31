#include <iostream>
using namespace std;

char words[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
void spelling(int n){
	if(n==0){
		return;
	}
	spelling(n/10);
	int digit = n%10;
	cout << words[digit] << " ";
	return;
}

int main(){
	// 3021 -> three zero two one
	int n ;
	cin >> n;
	spelling(n);
}