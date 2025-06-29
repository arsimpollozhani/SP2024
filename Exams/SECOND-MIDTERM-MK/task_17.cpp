//Created: task_17.cpp
//
// Created by win11pro on 1/3/2025.
//
#include<iostream>
using namespace std;

int main() {
    int m , n;
    int matrix[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
         int leftSum = 0, rightSum = 0;
        if(n%2 == 0) {
            for(int j = 0; j < n/2; j++) {
                leftSum += matrix[i][j];
            }
            for(int j = n/2; j < n; j++) {
                rightSum += matrix[i][j];
            }
            int diff = abs(rightSum - leftSum);
            matrix[i][n/2] = diff;
            matrix[i][n/2-1] = diff;
            
        } else {
            for(int j = 0; j <= n/2; j++) {
                leftSum += matrix[i][j];
            }
            for(int j = n/2; j < n; j++) {
                rightSum += matrix[i][j];
            }
            int diff = abs(rightSum - leftSum);
            matrix[i][n/2] = diff;
            
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}