//Created: task_9.cpp
//
// Created by win11pro on 1/3/2025.
//
#include<iostream>

using namespace std;

double formula(int *a, int n) {
    if (n == 1) {
        return a[0];
    }
    return a[0] + 1.0 / formula(a + 1, n - 1);
}


int main() {
    int a[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double result = formula(a, n);
    cout << result << endl;
    return 0;
}