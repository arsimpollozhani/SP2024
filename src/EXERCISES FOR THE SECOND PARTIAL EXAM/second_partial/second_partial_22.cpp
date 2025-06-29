//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
using namespace std;

void printLine(int current, int n) {
    if (current > n) {
        return;
    }
    cout << current;
    printLine(current + 1, n);
}

void triangle(int n) {
    if (n == 0) {
        return;
    }
    printLine(1, n);
    cout << endl;
    triangle(n - 1);
}

int main() {
    int n;
    cin >> n;
    triangle(n);
    return 0;
}
