#include <iostream>
using namespace std;
/*
Input Format: Enter value of N ( >=5 )
Sample Input: 7
Output Format: Print the required pattern.
Sample Output:
*  ****
*  *   
*  *   
*******
   *  *
   *  *
****  *

*/
int main(){
	int n = 7;


	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			
			if(i < n/2){
				if(j< n/2){
					if(j==1){
						cout<<"*";
					}
					else{
						cout<<"  ";
					}
				}
				else if(j==n/2){
					cout<<" *";
				}
				else{
					if(i==0){
						cout<<" *";
					}

				}
			}
			
			else if(i == n/2){
				cout<<"*";
			}

			else{
				if(i == n){
					cout<<" *";
				}
				else if(j<n/2){
					cout<<"  ";
				}
				else{
					cout<<" *";
				}
			}

		}
		cout<<endl;
	}
}
