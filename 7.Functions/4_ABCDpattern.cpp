#include <iostream>
using namespace std;

/*
ABCDE
ABCD
ABC
AB
A
*/

void printABCD(int n){
	for(int i=1;i<=n;i++){
		char alphabet = 'A'; 
		int count = n-i+1;
		for(int j=1;j<=count;j++){
			cout<<alphabet;
			alphabet+=1;
		}
		cout<<endl;
	}
}

int main(){
	int no;
	cin>>no;

	printABCD(no);

}