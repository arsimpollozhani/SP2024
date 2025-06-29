#include <iostream>
using namespace std;

int main() {
    int a, b, count = 0;
    cout << "Enter the number a: ";
    cin >> a;
    cout << "Enter the number b: ";
    cin >> b;

    if (b < 0 || b > 9) {
        cout << "Invalid Input" << endl;
    }

    while (a > 0) {
        int digit = a % 10;
        if (digit == b) {
            count++;
        }
        a /= 10;
    }

    cout << count << endl;
    return 0;
}
