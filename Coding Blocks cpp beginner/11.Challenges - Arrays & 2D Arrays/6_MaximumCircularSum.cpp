#include <iostream>
#include <climits>
using namespace std;


int kadane(int a[100], int n , int start ){

	int end = (start-1) % n;
	int currmax = 0;
	int maxsum = 0;
	for(int i = 0; i <= n-1 ; i++){
		//For start to wrap around 
		start = start%n;
		currmax = currmax + a[start];
		if(currmax < 0){
			currmax = 0;
		}
		maxsum = max(maxsum , currmax);
		start++;
	}
	return maxsum;
}

int main(){
	int n ;
	cin>>n;

	int a[100]; 
	// {8, -8, 9, -9, 10, -11, 12};
	for(int i=0 ; i<=n-1; i++){
		cin>>a[i];
		cout<< a[i]<<" ";
	}
	cout<<endl;

	int start = 0;
	int maximum = 0;

	while(start <= n-1){
		//kadane between start and end

		maximum = max(kadane(a, n, start), maximum);
		start++;
	}

	cout<<maximum << endl;
}	