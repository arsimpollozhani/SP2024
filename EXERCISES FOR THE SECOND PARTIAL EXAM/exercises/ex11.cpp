//
// Created by win11pro on 1/10/2025.
//
#include<iostream>
using namespace std;

double formula(int a[], int n, int index = 0) {
    if(index == (n - 1)) {
        return a[index];
    }
    return a[index] + 1.0 / formula(a, n, index + 1);
}

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << formula(a, n);
    return 0;
}