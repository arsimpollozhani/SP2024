//Created: task_16.cpp
//
// Created by win11pro on 1/3/2025.
//
#include<iostream>
using namespace std;
int findMaxDigitLoop(int n) {
    int max = 0;
    while(n!=0) {
        int digit = n%10;
        if(digit > max) {
            max = digit;
        }
        n = n/10;
    }
    return max;
}


int findMaxDigitRec(int n) {
    if(n==0) {
        return 0;
    }
    int digit = n%10;
    int maxRest =  findMaxDigitRec(n/10);
    if(digit > maxRest) {
        return digit;
    } else {
        return maxRest;
    }

}

int main() {
    int n;
    while(cin >> n) {
        cout << findMaxDigitRec(n) << endl;
    }
    return 0;
}