
#include <iostream>
using namespace std;
int main() {
	// Convert Decimal to octal;
	// 			  8   ->  10
	//			  16  ->  20
	// So likewise to convert decimal to binary we divide the number by 2 
	// Here we will divide the number by 8

	int number ;// 80 Octal is 120
	cin>>number;

	int ans = 0;
	int power = 1;

	while(number>0){
		int digit = number%8;
		ans = ans + (power*digit);
		power *= 10;
		number = number/8;
	}
	cout<<"Octal "<< ans<<endl;
}
/*
======================
Solution with strings
======================
#include <iostream>
using namespace std;
int main() {
    int n;
    std::cin >> n;
    
    string octal = "";
    while(n!=0){
        int r = n%8;
        n/=8;
        char c = r+'0';
        octal = c+octal;
    }
    std::cout << octal << std::endl;
}
*/