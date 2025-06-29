//
// Created by win11pro on 1/7/2025.
//

/*
 * For a given string of characters with a maximum length of 100 characters, find and return
 * the first uppercase letter using a recursive function. Print the found letter on the screen.
 * If there's none, the function should return '\0' character
 *
 */
#include<iostream>
using namespace std;

char findFirstUppercase(char *str) {
    if(*str == '\0') {
        return '\0';
    } else {
        if(isalpha(*str) && isupper(*str)) {
            return *str;
        } else {
            return findFirstUppercase(str+1);
        }
    }
}

int main() {
    char str[100];
    cin.getline(str, 100);
    cout << findFirstUppercase(str) << endl;
    return 0;
}