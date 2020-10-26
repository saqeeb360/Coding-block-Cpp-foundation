#include <iostream>
#include <cstring>
using namespace std;

char *mystrtok(char *str, char delimiter){
	// return first word
	static char*input =NULL;
	if(str!=NULL){
		// We are making a first call 
		input = str;
	}
	if(input == NULL){
		return NULL;
	}


	//Start extracting token and store them in the array
	char *output = new char[strlen(input) + 1];

	int i=0;
	for(;input[i]!='\0'; i++){
		if(input[i] != delimiter){
			output[i] = input[i];
		}
		else{
			output[i] = '\0';
			input = input + i + 1;
			return output;
		}
	}
	output[i] = '\0';
	input = NULL;
	return output;
}

int main(){
	// Designing my own String Tokenizer

	char s[100];
	cin.getline(s,100);

	char *ptr = mystrtok(s,' ');
	cout << ptr << endl;

	while(ptr!=NULL){
		
		ptr = mystrtok(NULL,' ');
		cout << ptr << endl;
	
	}
	


}