#include <iostream>
using namespace std;

// Function to read the array
void readArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

// Function to count elements greater or equal to the current element
int countGeq(const int a[], int n, int index) {
    int geq = 0;
    for (int j = 0; j < n; j++) {
        if (a[index] <= a[j]) {
            geq++;
        }
    }
    return geq - 1; // Exclude the element itself
}

// Function to print the array with counts
void printArrayWithCounts(const int a[], int n) {
    for (int i = 0; i < n; i++) {
        int geq = countGeq(a, n, i);
        cout << "[" << i << "] " << a[i] << ":" << geq << endl;
    }
}

int main() {
    int a[100];
    int n;

    // Read the size of the array
    cin >> n;

    // Read the elements of the array
    readArray(a, n);

    // Print the array with counts of elements greater or equal to each element
    printArrayWithCounts(a, n);

    return 0;
}
