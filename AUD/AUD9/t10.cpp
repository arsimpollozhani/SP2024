#include<iostream>
using namespace std;


int largestElement (int * array, int n) {
    if (n == 1) {
        return array[0];
    } else {
        int largest = largestElement (array, n-1);

        if (array[n-1] > largest) {
            return array[n-1];
        }

        return largest;   
    }
}

int main (){

    int array[100];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << largestElement(array, n);

    return 0;
}