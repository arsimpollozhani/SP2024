//
// Created by win11pro on 12/22/2024.
//
#include<iostream>
using namespace std;

int linearSearch(int array[], int &size, int value, int &counting) {
    for (int i = 0; i < size; i++) {
        counting++;
        if(array[i] == value) {
            return i;
        }
    }
    return -1;
}

//way way more efficient, but array must be ordered
int binarySearch(int array[], int &size, int value, int &counting) {
    int start = 0;
    int end = size - 1;

    while(start <= end) {
        counting++;
        int middle = (start + end) / 2;
        if(array[middle] == value) {
            return middle;
        } else if (array[middle] > value) {
            end = middle - 1;
        } else {
            start = middle + 1;
        }
    }
    return -1;
}
void fillArray(int array[], int size) {
    for(int i=0; i<size; i++) {
        cin >> array[i];
    }
}

void printArray(int array[], int size) {
    for(int i=0; i<size; i++) {
        cout << array[i] << " ";
    }
}
int main() {
    int array[100];
    int n;
    cin >> n;
    fillArray(array, n);
    int countForLinear = 0, countForBinary = 0;
    cout << linearSearch(array, n, 17, countForLinear) << endl;
    //printArray(array, n);
    cout << binarySearch(array, n, 17, countForBinary) << endl;

    cout << "\nHow many iteriations for linear: ";
    cout << countForLinear << endl;
    cout << "\nHow many iteriations for binary: ";
    cout << countForBinary << endl;
    return 0;
}