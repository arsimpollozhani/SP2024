#include<iostream>

using namespace std;

int firstTwo(int number) {
    while (number >= 100) {
        number = number / 10;
    }
    return number;
}

int main() {
    //
    int number;
    while (cin >> number) {
        cout << firstTwo(number) << endl;
    }
    return 0;
}
