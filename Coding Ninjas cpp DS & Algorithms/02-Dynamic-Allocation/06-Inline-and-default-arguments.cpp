#include <iostream>
using namespace std;

int max(int a, int b){
	return (a>b) ? a : b;
}

inline int max1(int a, int b){
	return (a>b) ? a : b;
}
//-------------------------
// Default argument 
int sum(int a[], int size,int startindex = 0){
	int ans = 0;
	for(int i=startindex; i<size; i++){
		ans+= a[i];
	}
	return ans;
}
int sum1(int a, int b, int c=0, int d = 0){
	return a+b+c+d;
}



int main(){
	int a = 5;
	int b = 10;
//	cin >> a >> b;

	// Method 1
	int c;
	if(a > b){
		c = a;
	}else{
		c =b;
	}
	cout << c << endl;

	// Method 2
	c = 0;
	c = (a>b) ? a : b;
	cout << c << endl;

	// Method 3
	// function call
	c = max(a,b);
	cout << c << endl;

	// Method 4
	// Inline function - Only valid for max 2-3 lines of code
	c = max1(a, b);
	cout << c << endl;

	//---------------------------------
	// Default argument 
	int a1[20];
	cout << sum(a1,5) << endl;

	cout << sum1(3,4, 7) << endl;
}