//
// Created by win11pro on 1/10/2025.
//
#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;




void sortChars(char *digits) {
    int len = strlen(digits);
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len - 1; ++j) { // Reduce range for efficiency
            if (digits[j] > digits[j + 1]) { // Swap if out of order
                char temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
        }
    }
}


void storeDigits(char *str) {
    int indexOfDigits = 0;
    int count = 0;
    char strDigit[101];
    for(int i = 0; i < strlen(str); i++) {
        if(isdigit(str[i])) {
            strDigit[indexOfDigits++] = str[i];
            (count)++;
        }
    }
    strDigit[indexOfDigits] = '\0';
    sortChars(strDigit);
    cout << count << ":" <<strDigit << endl;
}
int main() {
    char str[101];
    cin.getline(str, 101);
    storeDigits(str);
    return 0;
}