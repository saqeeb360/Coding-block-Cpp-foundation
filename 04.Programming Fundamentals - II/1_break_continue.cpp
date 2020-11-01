#include <iostream>
using namespace std;

int main(){
	//Program : Example of break a loop - while and for is a loop
	
	int n;
	while(true){
		cin>>n;
		if(n%13==0){
			continue; //continue takes to the beginning of the loop (line no 8)
		}
		else if(n%7==0){
			break; //break takes to the end of the loop (line no 18) 
		}
		cout<<"Not 7 and 13 : "<<n<<endl;
	}
	cout<<"The End\n";
}
