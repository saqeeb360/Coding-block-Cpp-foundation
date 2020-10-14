#include <iostream>
using namespace std;


int linearSearch(int array[10] , int number){
	for(int i=0;i<10;i++){
		if(array[i] == number){
			return i;
		}
	}
	return -1;
}

int main(){

	int n, key;
	cout<<"Enter length of array : ";
	cin>>n;

	int a[1000] ;
	cout<<"Enter the array \n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"Enter the number to find : ";
	cin>>key;
	int index = linearSearch(a,key);
	(index>=0 and index<n)?cout << "Index = " << index << endl:cout << "Number not present" << endl;
}
	

