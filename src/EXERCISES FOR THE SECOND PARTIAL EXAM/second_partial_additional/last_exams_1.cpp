//
// Created by win11pro on 1/7/2025.
//

/*
 * For a given number entered from SI, calculate and return the sum of
 * its even digits using a recursive function. Print the obtained sum on the screen
 */
#include<iostream>
using namespace std;

int sumOfEvenDigits(int num) {
    if(num==0) {
        return 0;
    }
    int lastDigit=num%10;
    if(lastDigit%2==0) {
        return lastDigit + sumOfEvenDigits(num/10);
    } else {
        return sumOfEvenDigits(num/10);
    }
}

int main() {
    cout << sumOfEvenDigits(123456) << endl;
    return 0;
}
