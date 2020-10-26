#include <iostream>
using namespace std;
/*
Sample Input: 4
1
2
2
1
Output Format: Display the Boolean result
Sample Output: true


*/
int main(){
	int n;
	cin >> n;

	int a[1000];
	for(int i=0; i<=n-1; i++){
		cin >> a[i];
	}

	int i = 0;
	int j = n-1;

	while(i<j){
		if(a[i] != a[j]){
			cout<<"false" << endl;
			return 0;
		}
		i++;
		j--;
	}
	cout<<"true" << endl;

	return 0;
}
