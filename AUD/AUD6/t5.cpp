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
    int counter = 0;
    for (int i = 1; i < 999; i++) {
        if (isPrime (i) && isPrime (i+2)) {
            cout << "(" << i << ", " << i+2 << ")" << endl;
            ++counter;
        }
    }
    cout << "Total: " << counter << endl;
    return 0;
}