//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
#include <cstring>
#include<cctype>
using namespace std;

int countDistinctLetters(char *word) {
    bool seen[26] {false};
    int distinctCount = 0;

    for (int i = 0; i < strlen(word); i++) {
        char ch = tolower(word[i]);
        if(isalpha(ch)) {
            int index = ch - 'a';
            if(!seen[index]) {
                seen[index] = true;
                distinctCount++;
            }
        }
    }
    return distinctCount;
}

int main() {
    char word[21];
    char result[21];
    int maxDistinctLetters = 0;

    while(cin.getline(word, 21)) {
        int length = strlen(word);
        if(length >= 4) {
            int distinctLetters = countDistinctLetters(word);
            if(distinctLetters >= maxDistinctLetters) {
                maxDistinctLetters = distinctLetters;
                strcpy(result, word);
            }
        }
    }
    cout << result << endl;
    return 0;
}