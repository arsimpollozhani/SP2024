#include<iostream>
using namespace std;

/*
Euclidean Algorithm
GCD (20,12)
m % n
20 % 12 = 8
12 % 8 = 4
8 % 4 = 0
4 % 0 = STOP  n==0
*/

int gcd (int m, int n) {
    if (n==0) {
        return m;
    } else {
        return gcd (n, m%n);
    }
}

int main (){

    // cout << gcd (20, 12);

    int n;
    int a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = gcd (a[0], a[1]);

    for (int i = 2; i < n; i++) {
        result = gcd(result, a[i]);
    }

    cout << result << endl;


    return 0;
}