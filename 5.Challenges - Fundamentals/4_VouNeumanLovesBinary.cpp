/*
Problem Name: Von Neuman Loves Binary
Problem Difficulty: 1
Problem Constraints: N<=1000
Digits in binary representation is <=16.
Problem Description:
Given a binary number ,help Von Neuman to find out its decimal representation.
For eg 000111 in binary is 7 in decimal.
Input Format: The first line contains N , the number of binary numbers.
Next N lines contain N integers each representing binary represenation of number.
Sample Input: 4
101
1111
00110
111111
Output Format: N lines,each containing a decimal equivalent of the binary number.
Sample Output: 5
15
6
63



=====Solution=====
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 1; i <= n; i++)
        cin >> num[i-1];
    int sum = 0, power = 1;
    for (int i = 0; i < n; i++)
    {
    while (num[i] != 0)
    {
        int t;
        t = num[i]%10;
        num[i] = num[i]/10;
        sum = sum + t*power;
        power = power*2;
    }
    cout << sum << endl;
    sum = 0;
    power = 1;
    }
    return 0;
}
*/

#include <iostream>
using namespace std;

int main(){
    unsigned long long int no; // 8 byte memory == 18 digits available
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){  
        cin>>no;
        int ans = 0, power = 1;

        while(no>0){
            int digit = no%10;
            ans = ans + (power*digit);
            no /=10;
            power *=2;
        }
        cout<<ans<<endl;
    }
}