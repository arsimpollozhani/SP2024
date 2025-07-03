//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
using namespace std;

void modifyArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        if(a[i] == a[i+1]) {
            a[i] = 2*a[i];
            a[i+1] = 0;
        }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int *a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
}
void shiftZeros(int *a, int n) {
    int positiveElement = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] != 0) {
            a[positiveElement] = a[i];
            positiveElement++;
        }
    }
    for(int i = positiveElement; i < n; i++) {
        a[i] = 0;
    }
}
void fillArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void printArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int a[100];
    int n;
    cin >> n;
    fillArray(a, n);
    modifyArray(a, n);
    //bubbleSort(a, n);
    shiftZeros(a, n);
    printArray(a,n);
    return 0;
}