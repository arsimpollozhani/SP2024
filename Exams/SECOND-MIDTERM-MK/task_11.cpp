//Created: task_11.cpp
//
// Created by win11pro on 1/3/2025.
//
#include<iostream>
#include <string.h>
using namespace std;



void sortChars(char *digits) {
    int len = strlen(digits);
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j + 1 < len - i; ++j) { // Reduce range for efficiency
            if (digits[j] > digits[j + 1]) { // Swap if out of order
                char temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    while(true) {
        char storeDigits[100]{0};
        int j = 0;
        int countDigits = 0;
        cin.getline(str,100);
        if(strcmp(str,"#")==0) {break;}
        for(int i = 0; str[i] != '\0'; i++) {
            if(isdigit(str[i])) {
                countDigits++;
                storeDigits[j++] = str[i];
            }
        }
        sortChars(storeDigits);
        cout << countDigits <<":" << storeDigits <<endl;
    }
    return 0;
}
