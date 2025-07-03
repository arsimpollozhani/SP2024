/*//
// Created by win11pro on 1/4/2025.
//
#include<iostream>
using namespace std;

void fillMatrix(int matrix[][30], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][30], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int findMin(int matrix[][30], int m, int n) {
    int min = matrix[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
    return min;
}

int main() {
    int m, n, row,col;
    int matrix[30][30];
    cin >> m >> n;
    cin >> row >> col;
    fillMatrix(matrix, m, n);
    int min = findMin(matrix, m, n);
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            matrix[i][j] = min;
        }
    }
    printMatrix(matrix, m, n);
    return 0;
}*/


#include<iostream>
using namespace std;

int findMin(int matrix[100][100], int m , int n) {
    int min = matrix[0][0];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(min > matrix[i][j]) {
                matrix[i][j] = min;
            }
        }
    }
    return min;
}

void printMatrix(int matrix[100][100], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[100][100];
    int row, col;
    int m , n;
    cin >> m >> n;
    cin >> row >> col;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }


    int minValue = findMin(matrix, m , n);
    //cout << minValue << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            matrix[i][j] = minValue;
        }
    }
    printMatrix(matrix, m, n);
    return 0;
}