//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
using namespace std;
const int MAX = 100;
int main() {
    int m,n;
    int matrix[MAX][MAX];
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int array[100];
    int minIndex = 0;
    for(int j = 0; j < n; j++) {
        int sumCols = 0;
        for(int i = 0; i < m; i++) {
            sumCols += matrix[i][j];

        }
        array[minIndex] = sumCols;
        minIndex++;

    }
    /*cout << endl;
    for(int i = 0; i < minIndex; i++) {
        cout << array[i] << " ";
    }*/
    int minSum = array[0];
    int minSumIndex = 0;
    for(int i = 0; i < minIndex; i++) {
        if(array[i] < minSum) {
            minSum = array[i];
            minSumIndex = i;
        }
    }
    cout << minSumIndex << endl;
}