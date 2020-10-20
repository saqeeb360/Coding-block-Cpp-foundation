#include <iostream>
using namespace std;

int main(){

	// Read a list of strings and we will store them in a 2d character array
	char a[100][100];

	int n;
	cin >> n;

	//Get extra \n from the buffer
	cin.get();

	for(int i = 0 ; i < n; i++){
		cin.getline(a[i], 100);
	}

	//Print all the string
	for(int i = 0; i<n; i++){
		cout<<a[i]<<endl;
	}


}