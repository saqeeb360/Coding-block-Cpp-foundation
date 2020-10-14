#include <iostream>
using namespace std;


bool isPrime(int n){
	for(int i=2;2*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}


void printPrimes(int N){
	for(int i=2;i<=N;i++){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}
}


int main(){
	// Print all primes

	int no;
	cin>>no;
	printPrimes(no);
	cout<<endl;

}