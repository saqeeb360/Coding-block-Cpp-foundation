#include <iostream>
#include <string>
using namespace std;

/*
aaabbccds
Output Format: The compressed String.
Sample Output: a3b2c2d1s1
*/
void Compressed(string str){

	int val = 1;
	char prev = str[0];

	for(int i=1; i< str.length(); i++){
		// check i-1, i if they are equal -> 
		if(str[i] == prev){
			val++;
		}
		// if not equal then print last letter and val 
		else{
			cout << str[i-1] << val;
			val = 1;
		}

		prev = str[i];
	}
	cout << prev << val << endl;


}
int main(){
	string s;
	getline(cin, s);

	Compressed(s);
}