#include <iostream>
using namespace std;

void MedianOfEqualSizeArray(int a[], int b[], int n){
	// Time complexity = n
	int c[2000];

	int index_a = 0;
	int index_b = 0;
	for(int i=0; i<2*n; i++){
		if(a[index_a] <= b[index_b]){
			c[i] = a[index_a];

			index_a++;
		}
		else{
			c[i] = b[index_b];
			index_b++;			
		}
	}
	int median = (c[n-1] +c[n])/2; 
	cout<<median<<endl;

}
void MedianOfEqualSizeArray2(int a[], int b[], int n){
	// Time Complexity = log n
	int index_a ;
	int index_b ;

	if(a[n/2] < b[n/2]){
		// for a[] -> n/2 to n
		// for b[] -> 0 to n/2
		//index_a = 
	}

}


void MedianOfUnequalSizeArray(int a[],int m, int b[], int n){
	// Merge both the array 
	int c[2000];

	int index_a = 0;
	int index_b = 0;
	for(int i=0; i< m+n; i++){
		if(a[index_a] <= b[index_b]){
			c[i] = a[index_a];

			index_a++;
		}
		else{
			c[i] = b[index_b];
			index_b++;			
		}
	}
	int median;
	if((m+n)%2 ==0){
		median = (c[(m+n)/2] + c[(m+n-2)/2])/2; 
	}
	else{
		median = c[(m+n)/2];
	}

	for(int i=0; i<m+n ; i++){
		cout<<c[i]<<" ";
	}

	cout<<endl<<median<<endl;

}


int main(){
	int m, n;
	cin>>m>>n;


	int a[1000] ;
	int b[1000] ;

	for(int i=0; i<=m-1; i++){
		cin>>a[i];
	}
	for(int i=0; i<=n-1; i++){
		cin>>b[i];
	}

	//	MedianOfEqualSizeArray(a,b,n);
	MedianOfUnequalSizeArray(a, m, b, n);

}