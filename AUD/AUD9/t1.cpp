#include<iostream>
using namespace std;

int sumOfFirstN (int n) {
    if (n == 1) {
        return 1;
    }

    return n + sumOfFirstN (n-1);
}

long long factorial (int n) {
    if (n==1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

long long formula (int n) {
    if (n == 1) {
        return 1;
    } else {
        return factorial (sumOfFirstN(n)) + formula(n-1);
    }
}

int main () {

    // cout << factorial (3) << endl;
    // cout << sumOfFirstN (5) << endl;

    cout << formula (5) << endl;
    return 0;
}