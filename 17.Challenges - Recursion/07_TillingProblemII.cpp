#include <iostream>
using namespace std;

int Tiling(int r, int n){
	// 4,4
	// horizontal
	if(n <= 0){
		return 0;
	}
	if(n<r){
		return 1;
	}
	if(n==r){
		return 2;
	}
	// vertial
	return Tiling(r, n-1) + Tiling(r, n-r);

}

int main(){
	int r;
	int n;
	cin >> r >> n ; 

	cout << Tiling(r,n) << endl;
}