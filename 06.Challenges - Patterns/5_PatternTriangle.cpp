#include <iostream>
using namespace std;
/*
Input Format: 
Sample Input: 4
Output Format: 
Sample Output:
            1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4
*/
int main(){
	int n ;
	cin>>n;
	for(int i=1; i<= n; i++){
		// generate space
		for(int j=i; j<n; j++){
			cout<<"  ";
		}
		// increasing digits
		int k;
		for(k=i; k <= 2*i-1 ; k++){
			cout<< k << " ";
		}
		// decreasing digits
		for(k=k-2; k>= i; k--){
			cout<< k << " ";
		}
		cout<<endl;
	}

}