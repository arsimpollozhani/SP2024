//
// Created by win11pro on 12/22/2024.
//
//Selection sort
//Repeatedly select the smallest (or largest) element from the unsorted portion
//if the array and move it to the sorted portion of the array
//STEP 1. Find the smallest element from the unsorted portion of array and
//swap it with the first element of the unsorted portion of the array
//STEP 2. Extend the sorted portion of the array by one element. Repeat step 1 and 2 until done.

#include<iostream>
using namespace std;

void swap(int &a , int&b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int array[], int size) {
    int minIndex;
    //one by one move boundary of unsorted subarray
    for(int i = 0; i < size - 1; i++) {
        //Find the minimum element in the unsorted portion of the array
        minIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        //Swap the found minimum element with the first element
        if(minIndex != i) {
            swap(array[minIndex], array[i]);
        }
    }
}
int main() {
    int array[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    selectionSort(array, n);
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    return 0;
}