//
// Created by win11pro on 11/9/2024.
//

#include<iostream>
using namespace std;

bool hasCommonDigit(int a, int b) {
    while (a > b) {
        int digitA = a % 10;
        int tempB = b;
        while(tempB > 0) {
            int digitB = tempB % 10;
            if(digitA == digitB) {
                return true;
            }
            tempB = tempB / 10;
        }
        a = a / 10;
    }
    return false;
}

int main() {
    int N, X;
    bool found = false;
    cin >> N >> X;
    for(int i = N - 1; i > 0; i--) {
        if(!hasCommonDigit(i,X)) {
            cout << i << endl;
            found = true;
            break;
        }
    }
    if(!found) {
        cout << 0 << endl;
    }
    return 0;
}
