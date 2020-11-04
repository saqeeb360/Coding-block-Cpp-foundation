#include <iostream>
using namespace std;

int findlength(char *ch){
	if(ch[0] == '\0'){
		return 0;
	}
	return 1 + findlength(ch+1);
}

void removeX(char ch[]){
	if(ch[0] == '\0'){
		return;
	} 
	if(ch[0] != 'x'){ // 0th element is not x then goto next char
		removeX(ch+1);
		return;
	}
	else{ // if found at 0th then remove the 'x' from the array
		int i;
		for(i=0; ch[i] != '\0'; i++){
			ch[i] = ch[i+1];
		}
		removeX(ch);
		return;
	}
}

int main(){
	// length of array using recursion
	char ch[]  = "xhxxxxxxxxxxxxxxxxxxxxexlloc";
	cout << findlength(ch) << endl;

	// Remove 'x' from a char array
	
	removeX(ch);
	cout << ch << endl;
}