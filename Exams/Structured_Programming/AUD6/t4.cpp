#include <iostream>
using namespace std;

bool isPrime (int number) {
    for (int divisor = 2; divisor <= number/2; divisor++) {
        if (number % divisor == 0) {
            return false;
        }
    }
    return true;
}

int sumOfDigits (int number) {
    int sum = 0;
    for (int i = number; i > 0; i/=10) {
        sum += i%10;
    }
    return sum;
}

int main() {
    int counter = 0;
    for (int i = 9999; i > 1; i--) {
        if (isPrime(i) && isPrime (sumOfDigits(i))) {
            cout << i << endl;
            ++counter;
        }
    }
    cout << counter << endl;
    return 0;
}