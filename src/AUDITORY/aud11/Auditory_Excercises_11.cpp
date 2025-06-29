//
// Created by win11pro on 12/1/2024.
//Pointers - Array Algorithms


/*
#include<iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapWithoutReference(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 5, y = 6;
    cout << x << " " << y << endl;
    swap(&x, &y); // we are passing the variables by reference (by memory address)
    cout << x << " " << y << endl;
    return 0;
}
*/


/*#include<iostream>
using namespace std;

void swapWithoutReference(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;//local change means that value is changed in func but does not affect main
}
int main() {
    int x = 5, y = 6;
    cout << x << " " << y << endl;
    swapWithoutReference(x, y);//we are passing variables by value (any change in the function doesn't affect
                                    //the values of x and y in the main function
    cout << x << " " << y << endl;//no change in the main function
    return 0;
}*/

/*1.2 Finding the min and max value in an array of pointers*/
/*
#include<iostream>
#include <vector>
using namespace std;


void findMinAndMax(int array[], int size, int *min, int *max) {
    *min = array[0];
    *max = array[0];

    for(int i = 0; i < size; i++) {
        if(array[i] < *min) {
            *min = array[i];
        }
        if(array[i] > *max) {
            *max = array[i];
        }
    }


}
int main() {
    int array[100];
    int n;
    cin >> n;
    int min = 0, max = 0;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    findMinAndMax(array, n, &max, &min);
    cout << "Min: " << min << " Max: " << max << endl;
    return 0;
}
*/


/*
2. Exercise 1
Write functions for sorting array by using the following method for sorting: Bubble sort.

Write functions for reading and printing elements of an array, and write main program to test the sort function.*/
/*
#include<iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int array[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int linearSearch(int array[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}

//in order to use binary search array must be ordered
int binarySearch(int array[], int n, int value) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int middle = (start + end) / 2;
        if (array[middle] > value) {
            end = middle - 1;
        }
        if (array[middle] < value) {
            start = middle + 1;
        } else {
            return middle;
        }
    }

    return -1;
}

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}

void fillArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
}

int main() {
    int array[100];
    int n;
    cin >> n;
    fillArray(array, n);
    bubbleSort(array, n);
    printArray(array, n);
    cout << "\n" << linearSearch(array, n, 4) << endl;
    cout << binarySearch(array, n, 4) << endl;
    return 0;
}
*/

/*
3. Exercise 2
Write the following functions for searching an array:

-Linear search

-Binary search

Then write a program that fill an array with numbers from 1 to 1000000, and than generates random number
in this range and finds its index by calling the two functions for searching.

3.1 Homework:
For the functions count and compare the number of needed iterations to find the number.
*/

/*#include<iostream>
using namespace std;

int linearSearch(int array[], int n, int value, int &counting) {
    for (int i = 0; i < n; i++) {
        counting++;
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}

//in order to use binary search array must be ordered
int binarySearch(int array[], int n, int value, int &counting) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        counting++;
        int middle = (start + end) / 2;
        if (array[middle] > value) {
            end = middle - 1;
        } else if (array[middle] < value) {
            start = middle + 1;
        } else {
            return middle;
        }
    }

    return -1;
}

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}

void fillArray(int array[], int n) {
    for (int i = 0; i < 100001; i++) {
        array[i] = i + 1;
    }
}

int main() {
    int SIZE = 100001;
    int array[SIZE];
    fillArray(array, SIZE);
    int iterationLinear = 0;
    int linearSearchIndex = linearSearch(array, 100001, 84542, iterationLinear);
    cout << linearSearchIndex << " " << iterationLinear << endl;

    int iterationBinary = 0;
    int binarySearchIndex = binarySearch(array, SIZE, 84542, iterationBinary);
    cout << binarySearchIndex << " " << iterationBinary << endl;

    return 0;
}*/


/*4. Exercise 3
Write a program that will transofrm the input array a into output array b in the following way:

b_i = a_i + a_{n-1-i}

The input array: 1 2 3 5 7

should be transformed into: 8 7 6 7 8

Explanation: Since the input array a is of size n, that b will be the same size.
The transformation is done by pairwise addition and replacement of the elements.
For each pair of elements a[i] and a[n-1-i], where i is from [0 to n/2-1], the neighborhood sum is stored in b[i],
while a[i] is replaced with [n-1-i]. If n is odd, the middle element a[n/2] is multiplied by 2.*/

#include <iostream>

using namespace std;

#define MAX 100

void transform(int arr[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        arr[i] += arr[j];
        arr[j] = arr[i];
    }

    if (n % 2) {
        arr[n / 2] *= 2;
    }
}

void transformRecursive(int *arr, int start, int n) {
    if (start >= n/2) {
        if (n % 2 == 1) {
            *(arr + n/2) *= 2;
        }
        return;
    }

    int end = n - start - 1;
    int tmp = *(arr + start) + *(arr + end);
    *(arr + start) = tmp;
    *(arr + end) = tmp;

    transformRecursive(arr, start + 1, n);
}

int main() {
    int n;
    int arr[MAX];

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //transform(arr, n);
    transformRecursive(arr, 0, n);

    cout << "Transformed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}