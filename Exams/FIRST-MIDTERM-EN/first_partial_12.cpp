//
// Created by win11pro on 11/9/2024.
//

//**************************
//QUESTION 12
//************************


#include<iostream>
#include<cmath>
using namespace std;

int moveDigit(int number) {
    int count = 0;
    int digit = number % 10;
    int remaining = number /= 10;
    while (remaining > 0) {
        remaining = remaining / 10;
        count++;
    }
    int newNumber = digit * pow(10, count) + number;
    return newNumber;
}

int main() {
    /* TEST int number;
    cin >> number;*/
    //TEST cout << moveDigit (number);
    int n, num1, num2;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num1 >> num2;
        if (moveDigit(num1) > num2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
