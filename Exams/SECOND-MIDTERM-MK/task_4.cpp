//Created: task_4.cpp
//
// Created by win11pro on 1/3/2025.
//

#include<iostream>
using namespace std;

int main() {
    int matrix[100][100];
    int m , n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int indexI, indexJ;
    cin >> indexI >> indexJ;

    int sumFirstQuadrant = 0;
    int sumSecondQuadrant = 0;
    int sumThirdQuadrant = 0;
    int sumFourthQuadrant = 0;
    for(int i = 0; i < indexI; i++) {
        for(int j = indexJ; j < n; j++) {
            sumFirstQuadrant += matrix[i][j];
        }
    }
    for(int i = 0; i < indexI; i++) {
        for(int j = 0; j < indexJ; j++) {
            sumSecondQuadrant += matrix[i][j];
        }
    }
    for(int i = indexI; i < m; i++) {
        for(int j = 0; j < indexJ; j++) {
            sumThirdQuadrant += matrix[i][j];
        }
    }
    for(int i = indexI; i < m; i++) {
        for(int j = indexJ; j < n; j++) {
            sumFourthQuadrant += matrix[i][j];
        }
    }
    cout << sumFirstQuadrant << " " << sumSecondQuadrant << " " << sumThirdQuadrant << " "<< sumFourthQuadrant << endl;
    return 0;
}
