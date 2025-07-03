/*//
// Created by win11pro on 1/4/2025.
//
#include<iostream>
#include <cstring>
#include <cctype>
using namespace std;

int countWords(char *str, int length) {
    int count = 0;
    int wordStart = 0;
    int wordLength = 0;
    for(int i = 0; i < length; i++) {
        if(isalpha(str[i])) {
            if(wordLength == 0) {
                wordStart = i;
            }
            wordLength++;
        } else if (wordLength>0 &&wordLength <= 3) {
            count++;
            wordLength = 0;
        } else if(wordLength > 4) {
            wordLength = 0;
        }
    }
    if(wordLength>0 && wordLength <= 3) {
        count++;
    }
    return count;
}

int main() {
    char str[101];
    int max = 0;
    char maxStr[101];
    while(cin.getline(str, 100)) {
        int currentCount = countWords(str,strlen(str));
        if(currentCount >= max) {
            max = currentCount;
            strcpy(maxStr,str);
        }
    }
    cout << max << ": " << maxStr << endl;


    return 0;
}*/

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int count(char *str) {
    int count = 0;
    int wordStart = 0;
    int wordLength = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            if(wordStart == 0) {
                wordStart = i;
            }
            wordLength++;
        } else if(wordLength > 0 && wordLength <=3) {
            ++count;
            wordLength = 0;
        } else if(wordLength > 4) {
            wordLength = 0;
        }
    }
    if(wordLength <= 3 && wordLength > 0) {
        ++count;
    }
    return count;
}

int main() {
    int max = 0;
    char maxStr[100];
    while(true) {
        char str[101];
        cin.getline(str,101);
        if(strcmp(str,"#") == 0) break;
        int result = count(str);
        if(result > max) {
            max = result;
            strcpy(maxStr,str);
        }
    }
    cout <<max << ": " <<maxStr << endl;
    return 0;
}