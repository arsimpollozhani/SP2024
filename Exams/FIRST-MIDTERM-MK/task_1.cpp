//Created: task_1.cpp
#include<iostream>
using namespace std;

bool sweetNumber(int number) {
    while(number > 0) {
        int digit = number % 10;
        if(digit % 2 != 0) {
            return false;
        }
        number /= 10;
    }
    return true;
}

int main() {
    int m , n;
    cin >> m >> n;
    int smallestEvenDigitNumber = -1;
    for (int i = m; i <= n; i++) {
        if(sweetNumber(i)) {
            smallestEvenDigitNumber = i;
            break;
        }
    }
    if(smallestEvenDigitNumber != -1) {
        cout << smallestEvenDigitNumber << endl;
    } else {
        cout << "NE" << endl;
    }
    return 0;
}