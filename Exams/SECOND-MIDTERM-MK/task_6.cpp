//Created: task_6.cpp
//
// Created by win11pro on 1/3/2025.
//
#include<iostream>
using namespace std;

int main() {
    int matrix[100][100];
    int m, n;
    cin>>m>>n;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }

    int rows = 0, cols = 0;

    for(int i=0;i<m;i++) {
        for(int j=0;j<n-2;j++) {
            if(matrix[i][j] == 1 && matrix[i][j+1] == 1 && matrix[i][j+2] == 1) {
                rows++;
                break;
            }
        }

    }

    for(int j=0;j<n;j++) {
        for(int i=0;i<m-2;i++) {
            if(matrix[i][j] == 1 && matrix[i+1][j] == 1 && matrix[i+2][j] == 1) {
                cols++;
                break;
            }
        }

    }
    cout << rows+cols << endl;
    return 0;
}