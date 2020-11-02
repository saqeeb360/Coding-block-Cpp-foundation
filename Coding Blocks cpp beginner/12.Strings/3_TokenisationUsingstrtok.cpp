#include <iostream>
#include <cstring>
using namespace std;

//char *strtok(char *s, char *delimiters)
//return a token on each subsequent call
// on the first call function should be passed with string argument 's'
// on subsequent calls we should pass the string argument as NULL

int main(){
	char s[100] = "  This is a lovely day. ";
	
	char *ptr = strtok(s,"a");
	cout<< ptr << endl;

	while(ptr != NULL){
		ptr = strtok(NULL, " ");
		cout<< ptr << endl;
	}
	return 0;
}