#include<iostream>
using namespace std;

void fillArray (int array [], int n) {
    for (int i = 0; i < n; i++) {
        cin >> array[i]; 
    }
}


int main () {
    int array[100];
    int n;
    cin >> n;

    fillArray (array, n);

    int numEven, numOdd;

    int sumOdd = 0;
    int sumEven = 0;
    sumOdd = sumEven = 0;


    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 1) {
            sumOdd += array[i];
            numOdd++;
        } else if (array[i] % 2 == 0) {
            sumEven += array[i];
            numEven++;
        }
    }

    cout << "Sum even: " << sumEven  << endl;
    cout << "Sum odd: " << sumOdd << endl;
    cout << "Ratio: " << float(numEven) / numOdd << endl; 



    return 0;
}