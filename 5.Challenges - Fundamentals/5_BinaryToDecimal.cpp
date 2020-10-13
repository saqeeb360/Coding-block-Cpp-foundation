/*
Problem Name: Binary To Decimal
Problem Difficulty: None
Problem Constraints: 0 < N <= 1000000000
Problem Description:
Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.
Input Format: 
Sample Input: 101010
Output Format: 
Sample Output: 42



=====Solution=====

*/
#include <iostream>
using namespace std;
int main ()
{
    unsigned long long int num;
    cin >> num;
    unsigned long long int sum = 0, power = 1;
    while (num != 0)
    {
        int t;
        t = num%10;
        num = num/10;
        sum = sum + t*power;
        power = power*2;
    }
    cout << sum;
    return 0;
}