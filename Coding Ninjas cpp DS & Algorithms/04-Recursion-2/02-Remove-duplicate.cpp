#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void removeduplicate(char ch[]){
    if(ch[0] == '\0'){
        return;
    }
    if(ch[0] == ch[1]){
        for(int i=1; ch[i]!='\0';i++){
            ch[i] = ch[i+1];
        }
        removeduplicate(ch);
    }
    else{
        removeduplicate(ch+1);
    }


}

int main() {
    // Program to remove consecutive duplicate in a string
    char ch[] = "caaabbbbbccccccccdd";

    removeduplicate(ch);
    cout << ch << endl;
}   