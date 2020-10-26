#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	getline(cin, str);
	
	int arr[100] = {};
	int maximum = 0;
	char result;
	for(int i=0; str[i]!='\0'; i++){
		arr[str[i] - 'A']++;
		if(maximum < (arr[str[i] - 'A'])){
			maximum = arr[str[i] - 'A'];
			result = str[i];
		}
	}

	cout << result << " " << maximum << endl;
}
