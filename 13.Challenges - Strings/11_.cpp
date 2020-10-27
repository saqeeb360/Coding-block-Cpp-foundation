#include <iostream>
#include <string>
using namespace std;

int chartoInt(char ch);

void divisorCB(int sum, int total){//print cb number and return sum
	// condition number 2
	int arr[] = {2,3,5,7,11,13,17,19,23,29};
	if (sum <= 29){
		for(int number: arr){
			if(number == sum){
				// CB number
				total = total+1;
				sum = 0;
				return ;
			}
		}
	}
	else{
		for(int number: arr){
			if(sum%number == 0){
				// not CB number
				return;
			}
		}
		// CB number 
		total = total+1;
		sum = 0;
	}
	return ;
}

int FindingCBnumber(string str, int n){

	int i = 0; 
	int j = 0;
	int power = 10;
	int sum = 0;
	int total = 0;
	while(j<n){
		while (i < n){	// traversing on each digit 
			// if not divisible go to next digit
			sum = sum + chartoInt(str[i]);
			if(sum == 1 or sum == 0){
			}
			else{
				divisorCB(sum , total);
				cout<<sum << " " << total<<endl;
			}
			sum *= 10;
			i++;
		}
		j++;
	}
	return total;
}

int chartoInt(char ch){
	return int(ch-'0');
};

int main(){
	
	int n = 5;

	string str;
	str = "81615";

	cout<< FindingCBnumber(str, n)<<endl;

}
