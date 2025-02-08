//
// Created by win11pro on 1/3/2025.
//
#include<iostream>

using namespace std;

double formula(int *a, int n,int index = 0) {
    if(index == (n-1)) {
        return a[index];
    }
    return a[index] + 1.0 / formula(a, n, index + 1);
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