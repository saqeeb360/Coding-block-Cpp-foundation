#include <iostream>
using namespace std;

int noTiles(int n){
	// Base Case
	if(n < 1){
		return 0;
	}
	if(n < 4){
		return 1;
	}
	if(n == 4){
		return 2;
	}

	// Vertical tile
	int x = noTiles(n-1);
	// Horizontal tile
	int y = noTiles(n-4);

	return x+y;
}

int main(){
	// Tiling Problem
	int n;
	cin >> n;

	cout << noTiles(n) << endl;
}