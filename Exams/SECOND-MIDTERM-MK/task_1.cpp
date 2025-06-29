//Created: task_1.cpp
//
// Created by win11pro on 1/3/2025.
//
#include<iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c= tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
void findVowelPair(char *str, int *pairCount) {
    int len = strlen(str);
    for(int i = 0; i < len-1; i++) {
        if(isVowel(str[i]) && isVowel(str[i+1])) {
            cout <<(char) tolower(str[i]) << (char) tolower(str[i+1])<< endl;
            (*pairCount)++;
        }
    }
}
int main() {
    char str[100];
    int pairCount = 0;
    while(true) {
        cin.getline(str,100);
        if(strcmp(str,"#") == 0) {
            break;
        }
        findVowelPair(str,&pairCount);
    }
    cout << pairCount << endl;
    return 0;
}
