//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
#include<cstring>

using namespace std;


int main() {
    char str[100];
    cin.getline(str,100);
    int firstDigitPos = -1, secondDigitPos = -1;
    for(int i=0;i < strlen(str);i++) {
        if(isdigit(str[i])) {
            if(firstDigitPos == -1) {
                firstDigitPos = i;
            } else if(secondDigitPos == -1) {
                secondDigitPos = i;
                break;
            }
        }
    }

    if(firstDigitPos == -1) {
        cout << "No digits" << endl;
    } else if (secondDigitPos == -1) {
        for(int i = firstDigitPos; i < strlen(str); i++) {
            cout << str[i];
        }
    } else {
        for(int i =firstDigitPos; i <= secondDigitPos; i++) {
            cout << str[i];
        }
    }
    return 0;
}

