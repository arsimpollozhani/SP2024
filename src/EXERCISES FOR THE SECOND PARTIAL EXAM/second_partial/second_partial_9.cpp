//
// Created by win11pro on 12/16/2024.
//

#include<iostream>
using namespace std;


int parcom(int a) {
    if(a==0) {
        return 0;
    }
    int lastDigit = a%10;
    int transformedDigit;
    if(lastDigit %2 == 0 ) {
        transformedDigit = lastDigit + 1;
    } else {
        transformedDigit = lastDigit - 1;
    }
    return parcom(a/10)*10+transformedDigit;
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int complements[100];
    int count = 0;

    int num ;
    while(cin >> num) {
        complements[count++] = parcom(num);
    }

    bubbleSort(complements, count);


    int outputCount = min(5, count);
    for (int i = 0; i < outputCount; i++) {
        cout << complements[i] << " ";
    }
    cout << endl;
    return 0;
}