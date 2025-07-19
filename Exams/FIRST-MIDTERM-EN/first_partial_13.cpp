//
// Created by win11pro on 11/9/2024.
//
//*********************************
// QUESTION 13
//*********************************
#include<iostream>

using namespace std;

bool sweetNumber(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            return false;
        }
        number = number / 10;
    }
    return true;
}

int main() {
    /*int number;
    cin >> number;
    cout << sweetNumber(number)<<endl;
    */
    int m, n;
    cin >> m >> n;
    int smallestEvenDigitNumber = -1;
    for (int i = m; i <= n; i++) {
        if (sweetNumber(i)) {
            smallestEvenDigitNumber = i; //because we start from m which is the smallest number
            break; //in the range and when the sweetNumber is true print the smallest and exit the if
        }
    }
    if (smallestEvenDigitNumber != -1) {
        cout << smallestEvenDigitNumber << endl;
    } else {
        cout << "NSM" << endl;
    }
    return 0;
}
