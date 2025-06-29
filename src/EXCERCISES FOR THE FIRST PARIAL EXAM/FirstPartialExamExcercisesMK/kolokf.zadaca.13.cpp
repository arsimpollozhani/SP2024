//
// Created by win11pro on 11/9/2024.
//

/*
* An unknown number of positive integers are read from the keyboard until
* something other than a number is entered. For each number, the sum of the digit
* with the maximum value of the previously entered number and the sum of the digits of
* the current number should be calculated (for the first entered number, only the sum of its digits is calculated).
* For each entered number the result should be printed in the following format:

[number]: [sum of the digits of the number + the maximum digit of the previous number]

342: 9 //3+4+2

345: 16 //3+4+5+4

123: 11 //1+2+3+5

456: 18 //4+5+6+3
 */
#include<iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    return sum;
}

int maxDigit(int number) {
    int max = 0;
    while (number > 0) {
        int digit = number % 10;
        if(digit > max) {
            max = digit;
        }
        number /= 10;
    }
    return max;
}

int main() {
    int number;
    int previousMaxDigit = 0;
    bool firstNumber = true;

    while(cin >> number) {
        int sum = sumOfDigits(number);
        if(firstNumber) {
            cout << number << " : "<< sum << endl;
            firstNumber = false;
        }
        else {
            int result = sum + previousMaxDigit;
            cout << number << " : "<< result << endl;
        }
        previousMaxDigit = maxDigit(number);
    }
    return 0;
}