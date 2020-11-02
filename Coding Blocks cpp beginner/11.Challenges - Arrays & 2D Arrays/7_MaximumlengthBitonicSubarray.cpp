#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int a[100] ={50,100,200,300,400}; 
	//n=24 //{12, 4, 78, 90, 45, 23,10, 20, 30, 40,12, 4,78, 90, 45, 23,20, 4, 1, 2, 3, 4, 2, 10};
	//{10, 20, 30, 40};
	//{12, 4,78, 90, 45, 23}; 
	//{20, 4, 1, 2, 3, 4, 2, 10};


	int currmax = 1;
	int maxlength = 1;

	bool increasingslope = true; //for decreasing slope -> false
	for(int i=0; i<=n-2; i++){
		// check i and i++
		if(a[i] <= a[i+1]){

			if(increasingslope){
				currmax++;
			}
			else{
				currmax = 2;
			}

			increasingslope = true;
		}
		else{
			currmax++;
			increasingslope = false;
		}
		maxlength = max(maxlength, currmax);
	}	
	cout<<maxlength<<endl;

}
