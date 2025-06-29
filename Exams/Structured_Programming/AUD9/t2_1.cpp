#include<iostream>
using namespace std;


int sumOfDigits (int n) {
    if (n == 0) {
        return 0;
    } else {
        return n%10 + sumOfDigits (n/10);
    }
}


void printDigits (int n) {
    if (n == 0) {
        return ;
    }

    cout << n%10 << endl;
    printDigits (n/10) ;
}

void printDigitsFromLeft (int n) {
    if (n == 0) {
        return ;
    }
    printDigitsFromLeft (n/10);
    cout << n%10 << endl;
}

int main () {

    cout << sumOfDigits (12345) << endl;
    cout << "---" << endl;
    printDigits (12345) ;
    cout << "---" << endl;
    printDigitsFromLeft (12345);
    return 0;
}