//
// Created by win11pro on 1/10/2025.
//
//Find the longest line which has at least 2 digits, print this line from the first occurrence
//of a digit to the last occurrence of the last digit in the line
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main() {
    char longestLine[101];
    int maxLen = 0;
    int firstD = -1, lastD = -1;
    while(true) {
        char str[101];
        cin.getline(str,101);
        if(strcmp(str,"0")==0) {
            break;
        }
        int countDigit = 0;
        int currFirstDigit = -1;
        int currLastDigit = -1;
        int len = strlen(str);
        for(int i=0;i<len;i++) {
            if(isdigit(str[i])) {
                ++countDigit;
                if(currFirstDigit == -1) {
                    currFirstDigit = i;
                }
                currLastDigit = i;
            }
        }
        if(countDigit >= 2 && len > maxLen) {
            maxLen = len;
            strcpy(longestLine,str);
            firstD = currFirstDigit;
            lastD = currLastDigit;
        }
    }
    if(maxLen > 0) {
        for(int i = firstD; i <= lastD; i++) {
            cout << longestLine[i];
        }
        cout << endl;
    }
    return 0;
}