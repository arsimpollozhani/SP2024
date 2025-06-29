#include<iostream>
#include<cmath>
using namespace std;


int countDigits (int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + countDigits(n/10);
    }
}

int transform (int n) {
    int numDigits = countDigits(n);

    int r = 1;

    for (int i = 1; i < numDigits; i++) {
        r *= 10;
    }

    int last = n % r;
    int first = n / r;

    return last * 10 + first;
}

void test () {
    // cout << countDigits (12345) << endl;
    cout << transform (12345) << endl;
    cout << transform (200) << endl;
    cout << transform (10) << endl;
    cout << transform (43) << endl;
}

bool isDivisor (int m, int n) {
    return m % n == 0;
}

int main () {
    // test ();


    int X, N;
    cin >> X;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int number;
        cin >> number;
        if (isDivisor(transform (number), X)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}