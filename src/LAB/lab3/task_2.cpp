#include <iostream>
using namespace std;

int main() {
    int decimal = 0;
    char digit;

    while (cin >> digit) {
        if (digit != '0' && digit != '1') {
            break;
        }
        decimal = decimal * 2 + (digit - '0');
    }

    cout << decimal << endl;
    return 0;
}
