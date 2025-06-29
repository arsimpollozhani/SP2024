//
// Created by win11pro on 6/22/2025.
//
#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    int digit1 = number / 10000, digit5 = number % 10, middle = (number / 10) % 1000;
    cout << middle << endl;
    cout << digit1 + digit5;
    return 0;
}
