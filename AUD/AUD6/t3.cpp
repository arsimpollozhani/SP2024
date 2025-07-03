#include<iostream>

using namespace std;


bool isPrime (int number) {
    for (int divisor = 2; divisor <= number/2; divisor++) {
        if (number % divisor == 0) {
            return false;
        }
    }
    return true;
}

int main () {

    int number;
    cin >> number;

    for (int i = number + 1; ; i++) {
        if (isPrime(i)) {
            cout << i << " - " <<  number  << " = " << (i-number) << endl;
            break;
        }
    }

    return 0;
}