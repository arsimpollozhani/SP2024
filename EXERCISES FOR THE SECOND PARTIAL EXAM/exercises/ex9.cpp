//
// Created by win11pro on 1/10/2025.
//
#include<iostream>
using namespace std;

int findMaxDigit(int num) {
    int max = 0;
    while(num!=0) {
        int digit = num%10;
        if(digit>max) {
            max = digit;
        }
        num = num/10;
    }
    return max;
}

int findMaxDigitRec(int n) {
    if(n==0) {
        return 0;
    }

    int digit = n%10;
    int maxRest = findMaxDigitRec(n/10);
    if(digit > maxRest) {
        return digit;
    } else {
        return maxRest;
    }

}

int main() {
    int n;
    while (cin >> n) {
        cout << findMaxDigit(n) << endl;
        cout << findMaxDigitRec(n) << endl;
    }
    return 0;
}