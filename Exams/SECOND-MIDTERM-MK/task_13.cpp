//Created: task_13.cpp
//
// Created by win11pro on 1/3/2025.
//

#include<iostream>
using namespace std;


void fillMatrix(int matrix[][100], int m, int n) {
    for(int i = 0 ; i < m; i++) {
        for(int j = 0 ; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][100], int m, int n) {
    for(int i = 0 ; i < m; i++) {
        for(int j = 0 ; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int X, matrix[100][100];
    int n , m;

    cin >> X;

    cin >>m >>n;

    fillMatrix(matrix, m,n);

    for(int i = 0 ; i < m; i++) {
        int sum = 0;
        for(int j = 0 ; j < n; j++) {//loop for calculating
            sum += matrix[i][j];
        }
        for(int j = 0 ; j < n; j++) {//loop for updating the row values
            if(sum > X) {
                matrix[i][j] = 1;
            } else if(sum < X) {
                matrix[i][j] = -1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }

    printMatrix(matrix, m, n);
    return 0;
}