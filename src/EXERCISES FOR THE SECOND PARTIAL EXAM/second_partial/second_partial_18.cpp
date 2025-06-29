//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
#include <string.h>
#include <cstring>
#include <cctype>
using namespace std;

double findRatio(char *str) {
    float digits = 0;
    float letters = 0;
    for(int i = 0; i < strlen(str); i++) {
        if(isdigit(str[i])) {
            digits++;
        }
        if(isalpha(str[i])) {
            letters++;
        }
    }
    if(letters == 0) {
        return 0.0;
    }
    return (digits/letters);
}

int main() {
    char line[101];
    double max = 0;
    char maxLine[101];
    while(cin.getline(line,101)) {
        double ratio = findRatio(line);
        if(max <= ratio) {
            max = ratio;
            strcpy(maxLine,line);
        }
    }
    cout << maxLine << endl;//10 / 8  10

    return 0;
}