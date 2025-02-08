//
// Created by win11pro on 1/10/2025.
//
#include<iostream>
using namespace std;
int main() {
    float matrix[100][100];
    float copy[100][100] = {0};
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    float sumBelowMainDiagonal = 0;
    float sumUnderSecondDiagonal = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            if(i>j) {
                sumBelowMainDiagonal += matrix[i][j];
            }
            if(i+j > m-1) {
                sumUnderSecondDiagonal += matrix[i][j];
            }
        }
    }
    float center = sumBelowMainDiagonal + sumUnderSecondDiagonal;
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < m; ++j) {
            if(i==j) {
                copy[i][j] = sumBelowMainDiagonal;
            }
            if(i+j == m-1) {
                copy[i][j] = sumUnderSecondDiagonal;
            }

            if(i==j && i+j == m-1 && m%2 == 1) {
                copy[i][j] = center;
            }
        }
    }

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << copy[i][j] << " ";
        }
        cout << endl;
    }
}