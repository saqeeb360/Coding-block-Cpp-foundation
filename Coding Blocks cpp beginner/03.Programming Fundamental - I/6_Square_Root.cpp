#include <iostream>
using namespace std;

int main(){

	int no,p;
	cin>>no>>p;

	float ans = 0;
	float inc = 1.0;

	for(int times=0;times<=p;times++){
		
		while(ans*ans<=no){
			ans = ans+inc;
		}
		ans = ans-inc;
		inc = inc/10.0;
	}
	cout<<"There sqrt is : "<<ans<<endl;
}