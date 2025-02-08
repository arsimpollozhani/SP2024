//
// Created by win11pro on 11/9/2024.
//

/*#include<iostream>
using namespace std;

int firstDigit(int number) {
    return number % 10; // first digit from the right
}

int secondDigit(int number) {
    return (number / 10)%10; // second digit from the right
}

int thirdDigit(int number) {
    return (number / 100)%10; // third digit from the right
}

int fourthDigit(int number) {
    return (number / 1000)%10; //fourth digit from the right
}

int fifthDigit(int number) {
    return (number / 10000)%10; //fifth digit from the right
}

int maxDigit(int number) {
    int max = 0;
    while(number > 0) {
        int digit = number % 10;
        if(digit > max) {
            max = digit;
        }
        number = number / 10;
    }
    return max;
}

int main() {
    int number, first , second , third , fourth , fifth;
    first = second = third = fourth = fifth = 0;
    while(cin >> number && (number >= 0 && number <= 99999)) {
        int currentMax = maxDigit(number);
        if(currentMax == firstDigit(number)) {
            first ++;
        } else if(currentMax == secondDigit(number)) {
            second ++;
        } else if(currentMax == thirdDigit(number)) {
            third ++;
        } else if(currentMax == fourthDigit(number)) {
            fourth ++;
        } else {
            fifth ++;
        }
    }
    cout << "0: " << first << endl;
    cout << "1: " << second << endl;
    cout << "2: " << third << endl;
    cout << "3: " << fourth << endl;
    cout << "4: " << fifth << endl;
    return 0;
}*/


