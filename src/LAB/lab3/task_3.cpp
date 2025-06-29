#include <iostream>
using namespace std;

int main() {
    int X, C, P;
    cin >> X >> C >> P; // X - starting number, C - the digit to search for
    // P - how many times C should appear

    int foundCount = 0; // how many valid numbers we've found
    int num = X + 1; // start seaching after number x

    while (foundCount < 10) {
        // we need to find 10 numbers;
        int tempNum = num; // copy of current number to manipulate
        int countC = 0; // counts how many times digit c appears in the
        //current number

        while (tempNum > 0) {
            //loop through each digit
            if (tempNum % 10 == C) {
                //if the last digit is equal to C
                countC++; // if condition is true increment Counter
            }
            tempNum = tempNum / 10; // remove last digit, again check the loop for
            // the next digit.
        }


        if (countC == P) {
            //If we found exactly P occurrences of C display num
            cout << num << endl; //increment found Counter
            foundCount++;
        }

        num++; // move to next number
    }

    return 0;
}
