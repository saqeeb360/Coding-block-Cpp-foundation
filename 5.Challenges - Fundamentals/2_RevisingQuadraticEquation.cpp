/*
Problem Name: Revising Quadratic Equations
Problem Difficulty: 1
Problem Constraints: -100 <= a, b, c <= 100
Problem Description:
Given coefficients of a quadratic equation , you need to print the nature of the roots 
(Real and Distinct , Real and Equal or Imaginary) and the roots. <br>
If Real and Distinct , print the roots in increasing order. <br>
If Real and Equal , print the same repeating root twice <br>
If Imaginary , no need to print the roots.


Note : Print only the integer part of the roots.
Input Format: First line contains three integer coefficients a,b,c for the equation ax^2 + bx + c = 0.
Sample Input: 1 -11 28
Output Format: Output contains one/two lines. First line contains nature of the roots .The next line 
contains roots(in non-decreasing order) separated by a space if they exist. If roots are imaginary do 
not print the roots.
Output the integer values for the roots.
Sample Output: Real and Distinct
4 7




=====Solution=====
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{
    float a, b, c;
    cin >> a >> b >> c;
    float d;
    float d1;
    d = b*b - 4*a*c;
    d1 = sqrt(d);
    if (d == 0)
        cout << "Real and Equal";
    else if (d >= 0)
        cout << "Real and Distinct";
    else if (d < 0)
        cout << "Imaginary";
    cout << endl;
    int x1, x2;
    if (d >= 0)
    {  
    x1 = (-b - d1)/(2*a);
    x2 = (-b + d1)/(2*a);
    cout << x1 << " " << x2;
    }
    return 0;
}

*/

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    if((b*b) > (4*a*c)){
        //D = 0 -- real equal roots
        cout<<"Real and Distinct"<<endl;
        //Now find roots -- find square root of D
        int D = b*b - 4*a*c;
        int sqrt = 0;
        int inc = 1;
        while((sqrt*sqrt)<=D){
            sqrt = sqrt+inc;
        }
        sqrt-=inc;
        // Now cal roots
        int root1 = (-b + sqrt) / 2 / a;
        int root2 = (-b - sqrt) / 2 / a;

        root1<root2?cout<<root1<<" "<<root2<<endl:cout<<root2<<" "<<root1<<endl;

    }
    else if((b*b) == (4*a*c)){
        //D = 0 -- real equal roots
        cout<<"Real and Equal"<<endl;
        int sqrt = 0;
        //Now cal root
        int root1 = (-b ) / 2 / a;
        cout<<root1<<" "<<root1<<endl;
    }

    else{
        cout<<"Imaginary";
    }
    return 0;
}