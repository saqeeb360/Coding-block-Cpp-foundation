#include <iostream>
using namespace std;

/*
                           1           1
                           1 2       2 1  
                           1 2 3   3 2 1
                           1 2 3 4 3 2 1   

*/

int main(){
    // Program to Print the above Pattern
    int n ;
    cin>>n;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= i ; j++ ){
            //Starting digit
            cout<<j<<" ";
        }
           //Spaces 
        for(int k = 1; k <= 2*(n+1) - 4*(i-1); k++){
            cout<<" ";
        }
        // Ending digits
        for(int l=i; l>=1 ; l--){
            if(l==n){
                continue;
            }
            cout<<l<< " ";
        }

        cout<<endl;
    }


    

    return 0;
}

