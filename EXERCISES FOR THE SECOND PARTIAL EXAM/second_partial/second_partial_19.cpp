//
// Created by win11pro on 12/16/2024.
//
#include<iostream>

using namespace std;

int main() {
    int a[100][100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int copyMatrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            copyMatrix[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sumRow = 0, sumCol = 0;
            if (i == j) {
                //sum of el to the right in the same row
                for (int k = j + 1; k < n; k++) {
                    sumRow += a[i][k];
                }
                //sum of el above in the same column
                for (int k = 0; k < i; k++) {
                    sumCol += a[k][j];
                }
                copyMatrix[i][j] = sumRow + sumCol;
            }
            if (i + j == n - 1) {
                //sum of el to the left in the same row
                for (int k = j - 1; k>=0; k--) {
                    sumRow += a[i][k];//a[i][k] k is in second bc we change cols
                    //here we do calculation sum left in the same row
                }
                //sum of el below in the same column
                for(int k = i + 1; k < n; k++) {
                    sumCol += a[k][j];// a[k][j] k is in first bc we change rows
                    //here we do calculation sum below of the same columns
                }
                copyMatrix[i][j] = sumRow + sumCol;//with this we change the actual element to the calculated sum
            }

        }

    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << copyMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
