#include <iostream>
using namespace std;

bool isPrime(int i){
	int n = 2;
	while(n<i){
		if(i % n == 0){
			return false;
		}
		n++;
	}
	return true;
}

int main(){
	//Prime Visits

	int a ;
	int b ;
	cin>>a>>b;

	int total = 0;
	for(int i=a; i<=b; i++){
		if(isPrime(i)){
			total ++;
		}
	}
	cout<<total<<endl;
}