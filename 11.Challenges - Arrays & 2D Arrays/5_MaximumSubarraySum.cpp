#include <iostream>
#include <climits>
using namespace std;
/*

int main(){
	// 0 : n2
	int n = 10 ;
	int a[1000] = {0, 2, 1, -3, 6, -1, 2, 1, 2,- 1};

	int max = INT_MIN;
	int left=-1 , right=-1;
	for(int i=0; i<=n-1; i++){
		int sum = 0;
		for(int j=i; j<=n-1; j++){

			sum = sum + a[j] ;

			if(sum >= max){
				max = sum;
				left = i;
				right = j;
			}
		}
	}
	cout<<left<<" and " <<right<<" " << max<<endl;
}
*/
int main(){
	//Kandane's Algorithm
	int n = 10 ;
	int a[1000] = {0, 2, 1, -3, 6, -1, 2, 1, 2,- 1};

	int currsum=0 , maxsum = 0; 
	for(int i=0; i<=n-1; i++){
		currsum = currsum + a[i];
		if(currsum < 0 ){
			currsum = 0;
		}
		maxsum = max(currsum, maxsum);
	}
	cout<<maxsum<<endl;
}




