//Created: task_7.cpp
//
// Created by win11pro on 1/3/2025.
//
#include <cmath>
#include<iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[100][100];
    int result[100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        double sum = 0.0;
        for(int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        double mean = sum / n;
        double maxDistance = -1.0;
        int mostDistantElement = matrix[i][0];

        for(int j = 0; j < n; j++) {
            double distance = fabs(matrix[i][j] - mean);
            if(distance > maxDistance) {
                maxDistance = distance;
                mostDistantElement = matrix[i][j];
            }
        }
        result[i] = mostDistantElement;
    }
    for (int i = 0; i < m; i++) {
        cout << result[i] << " ";
    }
    return 0;
}