#include <iostream>
using namespace std;

void increament(int a){
	a = a+1;
	cout << "Inside function : " << a <<endl;
}

void PointerIncreament(int *aptr){
	*aptr = *aptr+1;
	cout << "Inside Pointer function : " << *aptr <<endl;

}
int main(){

	int a = 10;
	increament(a);
	cout <<"Inside main : "<< a <<endl;
	PointerIncreament(&a);
	cout <<"Inside main : "<< a <<endl;


}