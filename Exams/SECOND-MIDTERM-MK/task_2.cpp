//Created: task_2.cpp
//
// Created by win11pro on 1/3/2025.
//
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;

    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        int maxSignificantDigitNumber = 0;
        int maxSignificantDigit = -1;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            
            int firstDigit = abs(num);
            while (firstDigit >= 10) {
                firstDigit /= 10;
            }

            if (firstDigit > maxSignificantDigit) {
                maxSignificantDigit = firstDigit;
                maxSignificantDigitNumber = num;
            }
        }
        cout << maxSignificantDigitNumber << endl;
    }
    return 0;
}
