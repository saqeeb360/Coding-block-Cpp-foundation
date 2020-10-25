#include <iostream>
using namespace std;

/*
4
1 0 2 9
5
3 4 5 6 7
Output Format: 
Sample Output: 3, 5, 5, 9, 6, END
*/
void addarray(int a1[1000],int m, int a2[1000], int n){
	
	int array[1000];
	int array_size = 0;

	int l1 = m-1;
	int l2 = n-1;
	int carry = 0;
	while(l1>=0 or l2 >= 0){
		
		int d1;
		int d2;

		l1 < 0 ? d1 = 0 : d1 = a1[l1];
		l2 < 0 ? d2 = 0 : d2 = a2[l2];
		
		int sum = d1 + d2 + carry;
		array[array_size] = sum%10;
		carry = sum/10;

		array_size++;
		l1--;
		l2--;
	}

	// display the array in reverse order 
	for(int i = array_size-1; i>=0; i--){
			cout<<array[i]<<" ";
	}
	cout<<endl;

}


int main(){
	int m ;
	cin>>m;
	int n ;
	cin>>n;

	int a1[1000];
	int a2[1000];

	for(int i=0; i<m; i++){
		cin>>a1[i];
	}
	for(int i=0; i<n; i++){
		cin>>a2[i];
	}

	addarray(a1,m,a2,n);	
}