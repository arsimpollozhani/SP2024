#include<iostream>
using namespace std;

void readArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int findMin(const int a[], int n) {
    int minIndex = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < a[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int findMax(const int a[], int n) {
    int maxIndex = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void swapMinMax(int a[], int n) {
    int minIndex = findMin(a, n);
    int maxIndex = findMax(a, n);
    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;
}

void printModifiedArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int a[100];
    int n;
    cin >> n;
    readArray(a, n);
    swapMinMax(a, n);
    printModifiedArray(a, n);

/*cout <<findMin(a, n);
cout << findMax(a, n);#1#
return 0;
}
