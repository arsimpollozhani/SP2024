#include<iostream>
using namespace std;

void fillArray (int array [], int n) {
    for (int i = 0; i < n; i++) {
        cin >> array[i]; 
    }
}

int sumEvenElements (int * array, int n, int & numEven) {
    int sum = 0;
    numEven = 0; //initialize, 
    for (int i = 0; i < n; i++) {
        if (array[i] %2 == 0) {
            sum+=array[i];
            numEven++;
        }
    }
    return sum;
}

int sumOddElements (int * array, int n, int & numOdd) {
    int sum = 0;
    numOdd = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 1) {
            sum+=array[i];
            numOdd++;
        }
    }
    return sum;
}


int main () {
    int array[100];
    int n;
    cin >> n;

    fillArray (array, n);

    int numEven, numOdd;

    int sumEven = sumEvenElements (array, n, numEven);
    int sumOdd = sumOddElements (array, n, numOdd);

    cout << "Sum even: " << sumEven  << endl;
    cout << "Sum odd: " << sumOdd << endl;
    cout << "Ratio: " << float(numEven) / numOdd << endl; 



    return 0;
}