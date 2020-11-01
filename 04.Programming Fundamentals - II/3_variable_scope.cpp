#include <iostream>
//using namespace std;


int x = 100; //Global variable

int main(){
	int x = 10; //Local variable
	std::cout<<x<<std::endl;

	for(int x=0;x<6;x++){
		std::cout<<"Local Scope "<<x<<std::endl;
	}

	std::cout<<"Local variable "<<x <<std::endl;
	std::cout<<"Global variable "<<::x <<std::endl;

}