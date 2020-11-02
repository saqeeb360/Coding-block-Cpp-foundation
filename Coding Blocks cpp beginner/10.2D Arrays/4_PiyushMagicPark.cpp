#include <iostream>
using namespace std;

void Escape(char a[][100], int n, int m, int k, int s){

	for(int i=0; i<= n-1; i++){		
		for(int j=0; j<= m-1; j++){
			char ch = a[i][j];

			if(s < k){
				cout << "false" << endl;
				return;
			}
			if(ch == '.'){
				s = s-2;
			}
			else if(ch == '*'){
				s = s+5;
			}
			else {
				break;
			}
			if(j != m-1){
				s--;
			}

		}
	}
	cout<<"True "<<s<<endl;	
	return;
}


int main(){
	// Piyush Magic Park

	//Input and design
	//4 4 5 20 . . * . . # . . * * . . . # * * 

	char a[50][100] = {0};
	int n,m,k,s;
	cin >>  n  >> m >> k >> s;
	for(int i=0 ; i <= n -1; i++ ){
		for(int j=0; j<= m-1; j++){
			cin >> a[i][j];
			cout << a[i][j] << " ";
		}
		cout<<endl;
	}

	// Output 
	Escape(a, n,m,k,s)	;

}



















