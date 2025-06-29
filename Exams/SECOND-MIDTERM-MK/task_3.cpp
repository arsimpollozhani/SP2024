//Created: task_3.cpp
//
// Created by win11pro on 1/3/2025.
//
#include<iostream>
using namespace std;

/*
int sumPos(int *a, int n, int index) {
    if(index > n) {
        return 0;
    }
    int sum = 0;
    for(int i = index; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
*/

int sumPosRec(int *a, int n, int index) {
    if(index >= n) {
        return 0;
    }
    return a[index] + sumPosRec(a, n, index + 1);
}

void fillArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int a[100];
    int n, index;
    cin >> n;
    fillArray(a, n);
    cin >> index;
    cout << sumPosRec(a, n, index) << endl;
    return 0;
}