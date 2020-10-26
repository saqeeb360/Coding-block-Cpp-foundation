#include <iostream>
#include <string>
using namespace std;
/*
Sample Input: IAmACompetitiveProgrammer
Output Format: Print words present in the string, in the order in which it appears in the string.
Sample Output: I
Am
A
Competitive
Programmer
*/

int main(){
	string str;
	getline(cin, str);

	for(int i=0; i< str.length(); i++){
		if(str[i] >= 'A' and str[i] <= 'Z'){
			if(i==0){//for i == 0 do nothing
			}
			else{
				cout<<endl;
			}
		}
		cout<<str[i];
	}
	cout<<endl;
}