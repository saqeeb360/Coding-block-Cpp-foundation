#include <iostream>
using namespace std;

int main(){
	// Program to check prime number

	int n,i;
	cin>>n;

	for(i=2;i<n;i++){
		if(n%i==0){
			cout<<"This is not prime no : "<<n<<endl;
			break;
		}
	}
	if(i==n){
		cout<<"This is prime no : "<<n<<endl;
	}

}