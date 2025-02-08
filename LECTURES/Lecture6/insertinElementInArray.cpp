//
// Created by win11pro on 12/22/2024.
//

//SCENARIO A
// 1st : The array has the capacity to accommodate the new element (has unfilled slots at the end)



/*#include<iostream>

using namespace std;

void insertElement(int arr[], int& size,int element, int position) {
    //shift elements to the right which are on the right side of pos
    for(int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element; //insert the element in the array
    size++;//increase the size of the array by 1
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertElement(arr, size, 7, 2);
    printArray(arr, size);
    return 0;
}*/


//SCENARIO B
// 2nd : The array DOES NOT have the capacity to accommodate the new element, so we make new array
#include<iostream>
using namespace std;

void insertElement(int arr[], int& size,int element, int position) {
    //shift elements to the right which are on the right side of pos
    for(int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element; //insert the element in the array
    size++;//increase the size of the array by 1
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    const int MAX = 100;
    int array1[MAX];
    int array2[MAX+1];
    int element, index;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> array1[i];
    }
    cin >> element >> index;

    if(n < MAX) {
        insertElement(array1, n, element, index);
        printArray(array1, n);
    } else {
        for(int i = 0; i < n; i++) {
            array2[i] = array1[i];
        }
        insertElement(array2, n, element, index);
        printArray(array2, n);
    }

    return 0;
}