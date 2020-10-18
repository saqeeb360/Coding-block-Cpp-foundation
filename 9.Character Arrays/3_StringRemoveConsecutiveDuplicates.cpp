#include <iostream>
#include <cstring>

using namespace std;

void removeDuplicate(char a[]){
	int i = 0;
	int j = 0;
	int len = strlen(a);

	if(len<2){
		return;
	}

	while(i < len){
		if(a[j] != a[i]){
			j++;
			a[j] = a[i];
			i++;
		}
		i++;
	}
	a[j+1] = '\0';
}

int	 main(){
	// Program to remove consecutive duplicates
	// ccoooddiiingg -> coding
	char a[1000];

	cin.getline(a,1000);
	//
	removeDuplicate(a);
	cout<<a<<endl;
 
	return 0;
}