//
// Created by win11pro on 11/9/2024.
//
#include<iostream>
using namespace std;

int main() {
    char hexDigit;
    int decimalSum = 0;

    while(true) {
        cin >> hexDigit;

        if(hexDigit = '.') {
            break;
        }
        int digitalValue;
        if('0' <= hexDigit && hexDigit <= '9') {
            digitalValue = hexDigit - '0';
        } else if('A' <= hexDigit && hexDigit <= 'F') {
            digitalValue = hexDigit - 'A' + 10;
        } else if ('a' <= hexDigit && hexDigit <= 'f') {
            digitalValue = hexDigit - 'a' + 10;
        } else {
            continue;
        }
        decimalSum += digitalValue;
    }

    if(decimalSum % 16 == 0) {
        cout << "Pogodok";
    } else if(decimalSum % 16 == 1 && decimalSum % 100 == 16) {
        cout << "Poln Pogodok";
    } else {
        cout<<decimalSum;
    }
    return 0;
}