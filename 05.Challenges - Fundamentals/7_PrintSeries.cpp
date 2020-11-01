/*
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.
Input Format: 
Sample Input: 10 
4
Output Format: 
Sample Output: 5 
11 
14 
17 
23 
26 
29 
35 
38 
41
*/

#include <iostream>
using namespace std;
int main() {
    
    int n1;
    cout<<"Enter n1 ";
    cin>>n1;

    int n2;
    cout<<"Enter n2 ";
    cin>>n2;

    int series;
    int count = 1;
    int i = 1;
    
    while(count <= n1){
        series = 3*i + 2;
        if(series%n2 != 0 ){
            count++;
            cout<<series<<"\n";
        }
        i++;
    }

}