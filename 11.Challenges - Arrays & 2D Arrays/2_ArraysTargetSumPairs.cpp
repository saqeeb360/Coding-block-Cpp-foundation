#include <iostream>
#include <algorithm>
using namespace std;

void SumPair(int a[1000], int n, int key){
	int l = 0;
	int r = n-1;


	while(l<r){
		int currsum = a[l] + a[r];
		if(currsum == key){
			cout<<a[l] << " and "<< a[r]<<endl;
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

int main(){
	// Program to find Sum pair in a array

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
	SumPair(a,n,key);

}