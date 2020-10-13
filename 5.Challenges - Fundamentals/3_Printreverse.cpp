/*
Problem Name: Print reverse
Problem Difficulty: 1
Problem Constraints: 0 <= N <= 1000000000
Problem Description:
Take N as input, Calculate it's reverse also Print the reverse.
Input Format: 
Sample Input: 123456789
Output Format: 
Sample Output: 987654321



=====Solution=====
// Java code:
import java.util.Scanner;

public class main{

    public static void main(String[] args){

        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        System.out.println(reverse(n));
    }
    public static int reverse(int n){

        int ans = 0;

        while(n != 0){

          int digit = n % 10;
          ans = ans *10 + digit;

          n /= 10;

        }

       return ans;

    }
}
*/

#include <iostream>
using namespace std;

int main(){

  unsigned int no, reverse = 0;
  cin>>no;

  while(no>0){
    reverse = (10*reverse) + (no%10) ;

    no = no/10;
  }
  cout<<reverse<<endl;;
}


