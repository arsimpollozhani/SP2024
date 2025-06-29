//
// Created by win11pro on 12/22/2024.
//
//Insertion Sort
//Array is virtually split into a sorted and unsorted part.
// Values from the unsorted part are picked (one at a time) and placed at the correct position in the sorted part

//For each element in the array (starting from the beginning) compare it with all the elements
// before it and insert it in the appropriate position.
#include<iostream>
using namespace std;

void insertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}
int main() {
    int array[5] = {5 , 3 ,4 , 1 , 2};
    insertionSort(array, 5);
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    return 0;
}