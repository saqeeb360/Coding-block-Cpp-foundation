#include <iostream>
using namespace std;
//10
//{0, 2, 1, 3, 0, 1, 2, 1, 2, 1};

int main(){
	int n ;
	cin>>n;
	
	int a[1000];
	for(int i=0; i<=n-1; i++){
		cin>>a[i];
	}
	
	int l[1000], r[1000]; // for keeping max 

	// find max at all position from left to right
	l[0] = a[0];
	int lmax = 0;
	for(int i=0; i<=n-1; i++){
		lmax = max(a[i], lmax);
		l[i] = lmax;
	} 
	// find max at all position from right to left
	r[n-1] = a[n-1];
	int rmax = 0;
	for(int i= n-2; i >= 0; i--){
		rmax = max(a[i], rmax);
		r[i] = rmax;
	} 

	// display array l and r
	for(int i = 0 ; i<=n-1; i++){
		cout << l[i] <<" ";
	}
	cout<<endl;

	for(int i = 0 ; i<=n-1; i++){
		cout << r[i] <<" ";
	}
	cout<<endl;

	//traverse on each index and find the water level there and add to the sum
	int sum = 0;
	for(int i=0; i<= n-2; i++){
		sum = sum + min(l[i] , r[i]) - a[i];
	}
	cout<<"The Max Water Harvested : "<<sum<< " units"<<endl;

}
