#include <iostream>
#include <climits>
using namespace std;

int main(){

	// Program to find max and minimum number from the list
	// take min = infinity
	// take max = minus infinity

	int min = INT_MAX;
	int max = INT_MIN;

	int n,no;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>no;
		if(no<min){
			min = no;
		}
		if(no>max){
			max = no;
		}
	}

	cout<<"The min is : "<<min<<endl;
	cout<<"The max is : "<<max<<endl;

	return 0;
}