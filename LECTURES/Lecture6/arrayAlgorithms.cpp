//
// Created by win11pro on 12/7/2024.
//
//Traversing
/*#include<iostream>
using namespace std;
int main() {
    int arr[100];
    int n;
    cin >> n;
    //forward traversing
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //forward traversing
    for(int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
    //backward traversing
    for(int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}*/
//Insert element
//Case A - there is space to accommodate the new element
/*#include<iostream>
using namespace std;

void insertElement(int arr[], int &n, int element, int position) {
    for(int i = n - 1; i >= position; i--) {
        arr[i+1] = arr[i];   // if i = 5, i becomes i = 6 shift to right
    }
    arr[position] = element; //arr[index] = element we want to insert
    n++; // increase the size of the array(initially was 10) but the arr is 11 so there is space left.
}
int main() {
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    insertElement(arr, size, 45, 0);//pass the size of the array by reference
    for(int i = 0; i < 10; i++) {   //that means the function can change the value of n.(modify)
        cout << arr[i] << " ";
    }
    return 0;
}*/

//Case B - There is no space in the array to accommodate the new element

/*#include<iostream>
using namespace std;

void insertElement(int arr[], int &n, int element, int position) {
    for(int i = n - 1; i >= position; i--) {
        arr[i+1] = arr[i];
    }
    arr[position] = element;
    n++;
}
int main() {
    int MAX = 100;
    int arr[MAX]; //Original array
    int arr2[MAX+1]; //Second Array with extra space
    int n, element, index;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the new element and its index: ";
    cout << "Element: ";
    cin >> element;
    cout << "Index: ";
    cin >> index;

    if(n < MAX) {
        insertElement(arr, n, element, index);
    } else {
        //copy array a into a2
        for(int i = 0; i < n; i++) {
            arr2[i] = arr[i];
        }
        insertElement(arr2, n, element, index);
        cout << "New array: ";
        for(int i = 0; i < n; i++) {
            cout << arr2[i] << " ";
        }
        cout << endl;
        return 0;
    }

    cout << "New array: ";
    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}*/


/*
#include <iostream>
using namespace std;

// Function to insert an element into an array
void insertElement(int arr[], int &n, int x, int pos) {
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = x;
    n++;
}

int main() {
    const int MAX = 100;
    int a[MAX];     // Original array
    int a2[MAX + 1]; // Second array with extra space
    int n, el, ind;

    // Read the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Read the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Read the new element and its index
    cout << "Enter the new element and its index: ";
    cin >> el >> ind;

    // Check capacity
    if (n < MAX) {
        insertElement(a, n, el, ind);
    } else {
        // Copy array a into a2
        for (int i = 0; i < n; i++) {
            a2[i] = a[i];
        }
        insertElement(a2, n, el, ind);
        // Print the new array
        cout << "New array: ";
        for (int i = 0; i < n; i++) {
            cout << a2[i] << " ";
        }
        cout << endl;
        return 0;
    }

    // Print the new array
    cout << "New array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
*/


//DELETING an element from the array
/*#include"iostream"
using namespace std;

void deleteElement(int arr[], int &n, int pos) {
    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
}
int main() {
    int arr[100];
    int n;
    cin >> n;
    for(int i =0; i < n; i++) {
        cin >> arr[i];
    }
    int position;
    cout << "Delete element at position: ";
    cin >> position;

    deleteElement(arr, n, position);

    for(int i =0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}*/

//SEARCHING ALGORITHMS

//LINEAR SEARCH

/*#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    //Traverse
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int element;
    cout << "Element to look for: ";
    cin >> element;
    cout << "Element is at position: ";
    cout << linearSearch(arr, n, element);
    return 0;
}*/


//Search through an ordered array

//A binary search algorithm.
// Check for the middle element if it is the key
// if its equal to the key return it's index

// If not then
// 1. the middle element is greater than the key, repeat
// the process for the elements from the beginning of the array up to the key(excluding)
// 2. the middle element is smaller than the key, repeat
// the elements from the middle key (excluding) to the end of the array.
/*#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int key) {
    while(l <= r) {
        int m = l + (r-l) / 2;
        //Check if x is present at mid
        if(arr[m] == key) {
            return m;
        }
        //if x is greater ignore left half
        if(arr[m] < key) {
            l = m + 1;
        }
        // if x is smaller, ignore right half
        else {
            r = m - 1;
        }
    }
    return -1;
}
int main() {
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Element to look for: ";
    cin >> key ;
    int index = binarySearch(arr, 0, n-1, key);
    cout << index << endl;
    return 0;
}*/


//SORTING ALGORITHMS
//BUBBLE SORT
//Compare and swap the adjacent elements if they are in the wrong order

/*#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

int main() {
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}*/


//SELECTION SORT
//Repeatedly select the smallest(largest) element from the unsorted portion
//of the array and move it to the sorted portion of the array

//Step 1. Find the smallest element from the unsorted portion of the array
//and swap it with the first element of the unsorted portion of the array
/*#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, minIndex;

    for(i = 0; i < n - 1; i++) {
        minIndex = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}
int main() {
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    selectionSort(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}*/


//INSERTION SORT
//The array virtually is split into a sorted and an unsorted part.
//values from the unsorted parts are picked (one at a time) and placed at the
//correct position in the sorted part.
//For each element in the array (starting at the beginning)
//compare it with all the elements before it and insert it in the appropriate position


/*#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        //Move element of arr[0...i-1] that are greater than key
        // to one position ahead of their current position
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}*/