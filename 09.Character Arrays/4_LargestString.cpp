#include <iostream>
#include <cstring>
using namespace std;


int	 main(){
	// Program to find largest string between N strings
	// 
	char curr[1000];
	char largest[1000];

	int N;
	cin>>N;

	//Becuase above cin will not read '\n' it will be in buffer and so we need to move forward one character
	// This is why we are using an extra cin to read one character
	cin.get();

	int len = 0;
	int largest_len = 0;

	for(int i=1; i<=N; i++){
		cin.getline(curr,1000);
		len = strlen(curr);
		
		if(len > largest_len) {
			largest_len = len;
			strcpy(largest , curr);
		}

	}
 	cout<<largest<<" and "<<largest_len<<endl;
	return 0;
}
