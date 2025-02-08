//
// Created by win11pro on 12/22/2024.
//
//When deleting an element from array:
//1. find the element to delete
//2. delete the element from the array (move the right elements one position to the left)
//3. decrease the size of the array
#include<iostream>
using namespace std;

void deleteElement(int array[], int &size, int position) {
    //shift all element to the right side of position to the left
    for(int i=position; i<size-1; i++) {
        array[i]=array[i+1];
    }
    size--;
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
    cout << "Enter size of array: ";
    cin >> n;
    fillArray(array, n);
    deleteElement(array, n, 2);
    printArray(array, n);
    return 0;
}