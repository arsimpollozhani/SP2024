//
// Created by win11pro on 1/4/2025.
//
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double arithmeticMean(int matrix[][100], int m, int n, int row, int col) {
    double sum = 0.0;
    double count = 0;
    for(int i = row - 1; i <= row + 1; i++) {
        for(int j = col - 1; j <= col + 1; j++) {
            if(i>=0 && i<m && j>=0 && j<n) {
                sum += matrix[i][j];
                count++;
            }
        }
    }
    return (sum/count);
}

int main() {
    int m, n;
    int matrix[100][100];
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int r1, r2, c1,c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    for(int i = r1; i <= r2; i++) {
        for(int j = c1; j <= c2; j++) {
            matrix[i][j] = arithmeticMean(matrix, m, n, i , j);
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << fixed << setprecision(1) << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}