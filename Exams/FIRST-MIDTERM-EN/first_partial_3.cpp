//
// Created by win11pro on 11/4/2024.
//
//********************************************
//QUESTION 3
//********************************************


/*Using the characters + and - form a square with 'width' n(n>2)
 *that represent square of the chars (-), enclosed by a square of chars (+) (see examples)
 For given n, print the appropriate image.
 Attention: Do not print additional characters as empty spaces, or unnecesary new line..
 The image ends with new line char. Do not use any matrix or arrays because n is not limited.*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 2) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    cout << "+";
                } else {
                    cout << "-";
                }
            }
            cout << endl;
        }
    } else {
        return 1;
    }

    return 0;
}
