//Created: task_12.cpp
//
// Created by win11pro on 1/3/2025.
//

#include<iostream>
using namespace std;

int posNumber(int *a, int n) {
    if(n==0) {
        return 0;
    }
    if(a[n-1]>0) {
        return 1 + posNumber(a,n-1);
    } else {
        return posNumber(a,n-1);
    }
}

void fillArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int a[100];
    int n;
    cin >> n;
    fillArray(a, n);
    cout << posNumber(a, n);
    return 0;
}
