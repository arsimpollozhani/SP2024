//
// Created by win11pro on 1/10/2025.
//
/*#include<iostream>
using namespace std;
void printDigitsFromRight(int n) {
    if(n==0) {
        return;
    }

    cout << n%10 << endl;
    printDigitsFromRight(n/10);
}

void printDigitsFromLeft(int n) {
    if(n==0) {
        return;
    } else {
        printDigitsFromLeft(n/10);
        cout << n%10 << endl;
    }
}

int main() {
    printDigitsFromRight(12345);
    printDigitsFromLeft(12345);
    return 0;
}*/


#include<iostream>
#include<cstring>
using namespace std;

void printLine(int n, int current) {
    if(current > n) {
        return;
    }

    printLine(n,current+1);
    cout << current;
}

void triangle(int n) {
    if(n== 0) {
        return;
    }

    printLine(n, 1);
    cout << endl;
    triangle(n-1);
}

int main() {
    triangle(4);
    return 0;
}
