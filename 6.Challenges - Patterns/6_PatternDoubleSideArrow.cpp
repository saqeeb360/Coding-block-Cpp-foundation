#include <iostream>
using namespace std;
/*
Take N as input. For a value of N=7, we wish to draw the following pattern :
          
                                1 
                            2 1   1 2 
                        3 2 1       1 2 3 
                    4 3 2 1           1 2 3 4 
                        3 2 1       1 2 3 
                            2 1   1 2 
                                1 
*/

// C++ implementation of the approach 
// Function to print the requried pattern 
void drawPattern(int N) 
{ 
	int n = N; 
	int row = 1; 

	// 'nst' is the number of values 
	int nst = 1; 

	// 'nsp' is the number of spaces 
	int nsp1 = n - 1; 
	int nsp2 = -1; 
	int val1 = row; 
	int val2 = 1; 

	while (row <= n) { 

		// Here spaces are printed 
		// 'csp' is the count of spaces 
		int csp1 = 1; 
		while (csp1 <= nsp1) { 
			cout << " "
				<< " "; 
			csp1 = csp1 + 1; 
		} 

		// Now, values are printed 
		// 'cst' is the count of stars 
		int cst1 = 1; 
		while (cst1 <= nst) { 
			cout << val1 << " "; 
			val1 = val1 - 1; 
			cst1 = cst1 + 1; 
		} 

		// Again spaces have to be printed 
		int csp2 = 1; 
		while (csp2 <= nsp2) { 
			cout << " "
				<< " "; 
			csp2 = csp2 + 1; 
		} 

		// Again values have to be printed 
		if (row != 1 && row != n) { 
			int cst2 = 1; 
			while (cst2 <= nst) { 
				cout << val2 << " "; 
				val2 = val2 + 1; 
				cst2 = cst2 + 1; 
			} 
		} 
		cout << endl; 

		// Move to the next row 
		if (row <= n / 2) { 
			nst = nst + 1; 
			nsp1 = nsp1 - 2; 
			nsp2 = nsp2 + 2; 
			val1 = row + 1; 
			val2 = 1; 
		} 
		else { 
			nst = nst - 1; 
			nsp1 = nsp1 + 2; 
			nsp2 = nsp2 - 2; 
			val1 = n - row; 
			val2 = 1; 
		} 
		row = row + 1; 
	} 
} 

// Driver code 
int main() 
{ 
	// Number of rows 
	int N ;
	cin>>N; 

	drawPattern(N); 

	return 0; 
} 
