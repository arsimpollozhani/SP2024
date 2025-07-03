//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
#include <cstring>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

bool isPalindrome(char *str, int start, int end) {
    while(start < end) {
        if (isVowel(str[start]) && isVowel(str[end])) {
            if (tolower(str[start]) != tolower(str[end])) {
                return false;
            }
            start++;
            end--;
        } else if (!isVowel(str[start])) {
            start++;
        } else if (!isVowel(str[end])) {
            end--;
        }
    }
    return true;
}

int main() {
    char word[31];
    while (cin.getline(word, 31)) {
        if (isPalindrome(word, 0, strlen(word) - 1)) {
            cout << word << endl;
        }
    }
    return 0;
}
