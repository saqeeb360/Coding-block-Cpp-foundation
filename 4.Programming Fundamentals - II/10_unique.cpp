#include <iostream>
using namespace std;

int main(){
	// Program to find unique number in a list

	// We can use bitwise XOR to find unique number in a list
	// 5 xor 3 xor 5 => 3
	int n;
	cin>>n;

	int no;
	int ans = 0;

	for(int i=1;i<=n;i++){
		cin>>no;
		ans = ans^no;
	}
	cout<<ans<<endl;

	return 0;

}