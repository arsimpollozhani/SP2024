//
// Created by win11pro on 1/10/2025.
//
//print all consecutive vowel for each entered sentence, then print total count of the combinations
#include<iostream>
#include <cstring>
using namespace std;

bool isVowel(char ch) {
    char vowels[11] = "AEIOUaeiou";
    for (int i = 0; i < 11; i++) {
        if(ch == vowels[i]) {
            return true;
        }
    }
    return false;
}

void printConsecutiveVowels(char *str, int *count) {
    int len = strlen(str);
    for(int i = 0; i < len-1; i++) {
        if(isVowel(str[i]) && isVowel(str[i+1])) {
            cout << (char) tolower(str[i]) <<(char) tolower(str[i+1]) << endl;
            (*count)++;
        }
    }
}

int main() {
    int count = 0;
    while(1) {
        char str[101];
        cin.getline(str,101);
        if(strcmp(str,"#")==0) {
            break;
        }
        printConsecutiveVowels(str, &count);
    }
    cout << count << endl;
    return 0;
}