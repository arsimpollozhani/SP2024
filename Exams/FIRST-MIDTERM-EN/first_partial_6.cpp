//
// Created by win11pro on 11/9/2024.
//

//********************************************
//QUESTION 6
//********************************************
/*
 *
* One number is interesting if his flipped number is divisible by the number
* of digits it contains. The flipped number is composed from the same digits, but
* in opposite order (ex. 653 is flipped of the number 356). Read from SI one integer
* n ( n > 9). Find and print the largest integer small than n that is "interesting". If the
* read number is not valid print a message "The number is invalid".

For example:

Input	Result
5     The number is invalid
 */


#include<iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    if (number <= 9) {
        cout << "The number is invalid";
        return 0;
    }
    for (int i = number - 1; i > 9; --i) {
        int temp = i;
        int reverse = 0, count = 0;
        while (temp > 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
            count++;
        }

        if (reverse % count == 0) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
