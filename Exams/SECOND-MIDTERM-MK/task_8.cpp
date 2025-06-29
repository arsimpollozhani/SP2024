//Created: task_8.cpp
//
// Created by win11pro on 1/3/2025.
//
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main() {
    char line[101];
    char longestLine[101];
    int maxLength = 0;
    int firstDigit = -1;
    int lastDigit = -1;
    while(true) {
        cin.getline(line,101);
        if(strcmp(line,"0")==0) {
            break;
        }
        int digitCount = 0;
        int currentFirstDigit = -1;
        int currentLastDigit = -1;
        int length = strlen(line);

        for(int i = 0; i < length; i++) {
            if(isdigit(line[i])) {
                digitCount++;
                if(currentFirstDigit == -1) {
                    currentFirstDigit = i;
                }
                currentLastDigit = i;
            }
        }
        if(digitCount >= 2 && length >= maxLength) {
            maxLength = length;
            strcpy(longestLine,line);
            firstDigit = currentFirstDigit;
            lastDigit = currentLastDigit;
        }
    }
    if(maxLength > 0) {
        for(int i = firstDigit; i <= lastDigit; i++) {
            cout << longestLine[i];
        }
        cout << endl;
    }
    return 0;
}