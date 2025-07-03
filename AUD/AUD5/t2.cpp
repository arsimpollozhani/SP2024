#include<iostream>
using namespace std;

int main () {

    int from, to;
    cin >> from >> to;

    for (int i = from; i < to; i++) {
        int temp = i;
        int reverse = 0;
        while (temp > 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }

        if (i == reverse) {
            cout << i << "\t";
        }
    }

    return 0;
}