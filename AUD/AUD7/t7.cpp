#include<iostream>
using namespace std;

void fillArray (int * array, int n) {
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
}

void printArray (int * array, int n) {
    for (int i = 0; i < n; i++) {
        cout <<  array[i] << " ";
    }
}

int main () {

    int n;
    int array[100];
    cin>>n;

    fillArray (array, n);


    int deleted = 0;

    for (int i = 0; i < n - deleted; i++) {
        for (int j = i + 1; j < n - deleted; j++) { 
            if (array[i] == array[j]) {
                for (int k = j; k < n - 1 - deleted; k++) { //loop for shifting
                    array[k] = array[k+1];
                }
                deleted++;
                --j; //avoid skipping elements, stay at the same iteration after shifting elements
            }
        }
    }

    n -= deleted;

    printArray (array, n);
    

    return 0;
}