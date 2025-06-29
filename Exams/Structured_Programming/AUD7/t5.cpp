#include<iostream>
using namespace std;

void fillArray (int array[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
}


void printArray (int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}
int main () {

    int n;
    int array[100];
    cin >> n;

    fillArray (array, n);

    int temp;
    
    temp = array[n-1]; //last element

    for (int i = n - 1; i > 0; i--)
    {
        array[i] = array[i-1];
        //5 <- 4
    }

    array[0] = temp;

    printArray(array, n);

    return 0;
}