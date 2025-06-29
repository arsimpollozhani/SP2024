#include<iostream>
using namespace std;

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Not efficient : complexity O(n^2)
void bubbleSort (int * array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (array[j] > array[j+1]) {
                swap(array[j], array[j+1]);
            }
        }
        
    }
    
}

void bubbleSort2 (int * array, int n) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < n-1; i++)
        {
            if (array[i] > array[i+1]) {
                swap (array[i], array[i+1]);
                swapped = true;
            }
        } 
    }
}

void printArray (int * array, int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    
}

int main () {
    int array [5] = {5, 1, 3, 4 ,2};

    printArray(array, 5); cout << endl;

    bubbleSort(array, 5);


    //sorted
    printArray(array, 5);



    return 0;
}