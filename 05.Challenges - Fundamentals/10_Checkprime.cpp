#include <iostream>
using namespace std;

bool isPrime(unsigned long long int no){
	unsigned long long int i;
	for(i=2; 2*i<=no; i++){
    	if(no%i==0){
    		return false;
    	}
    }
    return true;
}

int main() {
    unsigned long long int no;
    cin>>no;
    		
    isPrime(no)?cout<<"Prime\n": cout<<"Not Prime\n";
    
}
