#include <iostream>
#include <algorithm>
using namespace std;

void sumTriplet(int a[1000], int n, int key){
	for(int i=0; i<= n-3; i++){
		int l = i+1;
		int r = n-1;
		while(l<r){
			int currsum = a[l] + a[r] + a[i];
			if( currsum == key){
				cout<<a[i] << " and " << a[l] << " and "<< a[r]<<endl;
				r--;
				l++;
			}
			else if(currsum > key){
				// Therefore we need to decrease the sum by decreasing r--
				r--;
			}
			else{
				l++;
			}
		}
	}
	cout<<endl;
}
		
		


int main(){
	// Program to find Sum Triplet in a array
	int a[1000];
	int n;
	cin>> n;

	int val=1;
	for(int i=0; i<= n-1; i++){
		if(i%2==0){
			a[i] = val;
			val -= 9;
		}
		else{
			a[i] = val;
			val +=16;
		}
	}

	//display array

	for(int i=0; i<=n-1; i++){
		cout<< a[i] << " ";
	}
	cout<<endl<< "Enter a sum to search ";
	int key;
	cin>>key;

	sort(a, a+n);
	sumTriplet(a,n,key);

}
