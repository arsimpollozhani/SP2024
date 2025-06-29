//Created: task_13.cpp
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
            cout << number << ": "<< sum << endl;
            firstNumber = false;
        }
        else {
            int result = sum + previousMaxDigit;
            cout << number << ": "<< result << endl;
        }
        previousMaxDigit = maxDigit(number);
    }
    return 0;
}