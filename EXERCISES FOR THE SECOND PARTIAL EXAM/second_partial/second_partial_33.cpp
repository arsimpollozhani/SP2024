//
// Created by win11pro on 12/16/2024.
//
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 100;

int main() {
    int n;
    cin >> n;
    double matrix[100][100];
    double ZDiagonal[300];
    int zIndex = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    //add first row to z diagonal
    //using j because are moving to the right
    for (int j = 0; j < n; j++) {
        ZDiagonal[zIndex++] = matrix[0][j];
    }
    //add the supportive diagonal to the Z-diagonal excluding overlaps
    for (int i = 1; i < n - 1; i++) {
        ZDiagonal[zIndex++] = matrix[i][n-i-1];
    }
    //add last row
    for(int j = 0; j < n; j++) {
        ZDiagonal[zIndex++] = matrix[n-1][j];
    }

    for (int i = 0; i < zIndex; i++) {
        cout << ZDiagonal[i] << " ";
    }
    cout << endl;
    //Reverse Z/Diagonal
    for(int i = 0; i < zIndex / 2; i++) {
        double temp = ZDiagonal[i];
        ZDiagonal[i] = ZDiagonal[zIndex - i - 1];
        ZDiagonal[zIndex - i - 1] = temp;
    }

    int index = 0;

    for (int j = 0; j < n; j++) {
        matrix[0][j] = ZDiagonal[index++];
    }

    for (int i = 1; i < n - 1; i++) {
        matrix[i][n-i-1] = ZDiagonal[index++];
    }

    for(int j = 0; j < n; j++) {
        matrix[n-1][j] = ZDiagonal[index++];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
