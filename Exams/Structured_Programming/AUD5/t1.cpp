#include<iostream>
using namespace std;


int main () {


    for (int i = 1000; i < 10'000; i++) {
        // cout << i ;
        int firstDigit = i / 1000;
        int lastDigits = i % 1000;

        int sum = 0;
        while (lastDigits > 0) {
            int digit = lastDigits % 10;
            sum += digit;
            lastDigits /= 10;
        }

        if (sum == firstDigit) {
            cout << i << "\t";
        }
        
    }
    return 0;
}