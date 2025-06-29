#include<iostream>

using namespace std;

bool containsDigitNumber (int n ,int C, int P) {
    int counter = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit == C) {
            ++counter;
        }
        n/=10;
    }
    return counter == P;
}

int main () {
    int N, P, C;
    cin >> N >> P >> C;
    for (int i = N + 1; ; i++)
    {
        if (containsDigitNumber (i, C, P)) {
            cout << i;
            break;
        }
    }
    

    return 0;
}