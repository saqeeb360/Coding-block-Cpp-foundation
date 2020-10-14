#include <iostream>
using namespace std;
void convert(int ll, int ul,int step){
	    
	   for(int i=ll;i<=ul;i=i+step){
			int c=(int)((5.0/9)*(i-32));  

		cout<<i<<"\t"<<c<<endl; 
		} 	    	    
}
int main() {
    int m, max, st;
    cin>>m>>max>>st;
    convert(m,max,st);
}
