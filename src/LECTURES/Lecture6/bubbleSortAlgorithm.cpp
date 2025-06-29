//
// Created by win11pro on 12/22/2024.
//
//Bubble sort
//Compare adjacent elements if first is larger than second, swap

#include<iostream>
using namespace std;

void swapElements(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                swapElements(array[j], array[j + 1]);
            }
        }
    }
}

void descendingBubbleSort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if(array[j] < array[j + 1]) {
                swapElements(array[j], array[j + 1]);
            }
        }
    }
}

void fillArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }
}
void printArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}
int main() {
    int array[100];
    int n;
    cin >> n;
    fillArray(array,n);
    cout << "Ascending order: " ;
    bubbleSort(array,n);
    printArray(array,n);
    cout << "\n";
    cout << "Descending order: " ;
    descendingBubbleSort(array,n);
    printArray(array,n);

    return 0;
}