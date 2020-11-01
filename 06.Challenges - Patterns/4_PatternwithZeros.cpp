#include <iostream>
using namespace std;

/*
Input Format: 
Sample Input: 5
Output Format: 
Sample Output: 
1  
2	2  
3	0	3    
4	0	0	4  
5	0	0	0	5

*/

int main(){
	int n = 5;

	// n lines 	
	for(int i=1; i<= n; i++)
	{
		for(int j=1; j <= i; j++)
		{
			if(j == 1 || i == j)
			{
				cout<< i <<" ";
			}
			else
			{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}

}