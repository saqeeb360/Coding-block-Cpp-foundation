#include <iostream>
using namespace std;

int main(){

	int i,x=0,y=0;
	char ch;
	ch = cin.get();

	while(ch!='\n'){
		if(ch=='N' or ch=='n'){
			y++;
		}
		else if(ch=='S' or ch=='s'){
			y--;
		}
		else if(ch=='E' or ch=='e'){
			x++;
		}
		else{
			x--;
		}

		ch = cin.get();		
	}
	cout<<"x : "<<x<<" and y : "<<y<<endl;

	// For East and West
	if(x>=0){
		for(i=1;i<=x;i++){
			cout<<"E";
		}
	}
	else{
		for(i=-1;i>=x;i--){
			cout<<"W";
		}
	}
	if(y>=0){
		for(i=1;i<=y;i++){
			cout<<"N";
		}
	}
	else{
		for(i=-1;i>=y;i--){
			cout<<"S";
		}
	}
	cout<<endl;
}