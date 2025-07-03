#include<iostream>
using namespace std;


int linearSearch (int * array, int n, int key) {
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key) {
            return i; //return idx
        }
    }
    return -1; //key not found
}

int binarySearchIter (int * array, int left, int right, int key) {

    while (left <= right) {
        int middle = left+(right-left) / 2;

        if (array[middle] == key) { //best case scenario O(1)
            return middle;
        }

        if (array[middle] < key) {
            left = middle + 1;        // if 0...100    left = 51  right = 100
        } else {
            right = middle - 1;       // if 0...100    left = 0 right = 49
        }
    }

    return -1;
}

int binarySearchRec (int * array, int left, int right, int key) {
    if (left <= right) {
        int middle = left+(right-left) / 2;  //50+(100-50) / 2  50+50/2 = 50+25 = 75
        if (array[middle] == key) {
            return middle;
        } else {
            if (array[middle] < key) {
                return binarySearchRec (array, middle+1, right, key);
            } else if (array[middle] > key) {
                return binarySearchRec (array, left, middle-1, key);
            }
        }
    }
    return -1;
}

int main () {

    //array should be sorted in order binarySearch to work
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << binarySearchIter (array, 0, 10, 8) << endl;
    cout << binarySearchRec (array, 0, 10, 4);
    return 0;
}