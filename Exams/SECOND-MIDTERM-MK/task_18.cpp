//Created: task_18.cpp
//
// Created by win11pro on 1/3/2025.
//
#include<iostream>
using namespace std;

void fillMatrix(float a[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void printMatrix(float a[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    float matrix[100][100];
    float matrixB[100][100];
    int n;
    cin >> n;
    fillMatrix(matrix, n);
    float x = 0, y = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matrixB[i][j] = 0;
            if(i>j) {
                x += matrix[i][j];
            }

            if(i+j > n-1) {
                y += matrix[i][j];
            }
        }
    }
    float centerValue = x+y;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i==j) {
                matrixB[i][j] = x;
            }
            if(i+j == n-1) {
                matrixB[i][j] = y;
            }
            if(n%2 == 1 && i+j == n-1 && i==j) {
                matrixB[i][j] = centerValue;
            }
        }
    }


    printMatrix(matrixB, n);
    //cout << x << " " << y << endl;
    return 0;
}