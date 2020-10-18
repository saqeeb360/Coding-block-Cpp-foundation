#include <iostream>
using namespace std;

void readline(char a[], int maxLen, char delimiter = '\n'){
	int i = 0;
	char ch = cin.get();

	while(ch != delimiter){
		a[i] = ch;
		i++;
		if(i == maxLen-1){
			break;
		}
		ch = cin.get();
	}
	a[i] = '\0'; // Null character
	return;
}

int main(){
/*	// Method 1
	// cin doesnot take newline and space characters
	// So we use cin.get() to take any input
	char a[1000];
	cin>>a;
	cout<<a<<endl;
==========================
	//Method 2
	char a[1000];
	readline(a,1000, '$');
	cout<<a<<endl;
==========================
*/
//	Method 3
//	There is a built in method for readline function
	char a[1000];
	cin.getline(a,1000,'$');
	cout<<a<<endl;  	

}















