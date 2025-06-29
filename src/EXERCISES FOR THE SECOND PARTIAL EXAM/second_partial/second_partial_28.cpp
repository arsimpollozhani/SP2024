//
// Created by win11pro on 12/16/2024.
//
/*Write a program that reads lines no longer than 80 characters from SI. Each line consists of digits and letters.

The program should print on SO each line transformed in such way that the letters will be concatenated next
to each other, followed by the sum of all numbers that appear in the row.
The numbers can be with more than one digit! If there are no numbers, print 0 at the end of the line

Input

y2d3vbqiiK064waaa
ksdjdjgdjgHH
Output

ydvbqiiKwaaa69
ksdjdjgdjgHH0
For example:

Input	Result
7h3r3545h4d0wJu57B3h1ndM3
5hr0ud1n63v3ryBr347h174k3
hrhdwJuBhndM3623
hrudnvryBrhk596*/

#include<iostream>
#include <limits>
#include <string.h>
using namespace std;

/*char* concatenateLetters(char *str) {
    int len = strlen(str);
    static char temp[81];
    int j = 0;
    for(int i = 0; i < len; i++) {
        if(isalpha(str[i])) {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    return temp;
}*/

void concatenateLettersV(char *str) {
    int len = strlen(str);
    int j =0;
    char letters[81]{0};
    int sum = 0;
    for(int i = 0; i < len; i++) {
        if(isalpha(str[i]))
        {
            letters[j++] = str[i];
        }
        else if(isdigit(str[i])) {
            int num = 0;
            while(i < len && isdigit(str[i])) {
                num = num * 10 + (str[i] - '0');
                ++i;
            }
            --i;
            sum+=num;
        }
    }
    cout << letters << sum << endl;
}

int main() {
    char str[81];
    while(cin.getline(str,81)) {
        concatenateLettersV(str);
    }
    return 0;
}