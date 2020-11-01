#include <iostream>
using namespace std;

void TowerofHanoi(int n, char scr, char dest, char helper){
	if(n<=0){
		return;
	}
	// three steps
	// 1 -> take n-1 block to dest 
	TowerofHanoi(n-1,scr, helper, dest);
	cout <<"Moving " << n << " from " << scr << " to " << dest << endl;

	// 2 -> take n to helper ;
	TowerofHanoi(n-1, helper , dest, scr);
}

int main(){
	int n ;
	cin >> n;

	TowerofHanoi(n,'A','B','C');
}