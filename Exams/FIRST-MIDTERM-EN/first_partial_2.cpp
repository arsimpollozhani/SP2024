//******************************
//QUESTION 2
// *****************************

#include<iostream>

using namespace std;

int firstDigit(int num) {
    num = abs(num);
    while (num >= 10) {
        num = num / 10;
    }
    return num;
}

int lastDigit(int num) {
    num = abs(num);
    return num % 10;
}

int productMiddleDigits(int num) {
    int product = 1;

    num = num / 10;

    int digitCount = 0;

    while (num >= 10) {
        int digit = num % 10;
        num /= 10;

        if (num > 0) {
            product *= digit;
            digitCount++;
        }
    }
    return digitCount > 0 ? product : 0;
}

int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++) {
        //TEST cout << i << endl;
        //TEST cout << firstDigit(i) << endl;
        //TEST cout << lastDigit(i) << endl;
        int first = firstDigit(i);
        int last = lastDigit(i);


        int product = productMiddleDigits(i);

        if (product == 0) { continue; }

        int firstAndLast = first * 10 + last;

        if (product % firstAndLast == 0) {
            cout << i << " -> (" << product << " == " << firstAndLast << " * " << product / firstAndLast << ")" << endl;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
