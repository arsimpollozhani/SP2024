//Created: question_8.cpp

#include <iostream>
using namespace std;

int calculate(int matrix[100][100], int startRow, int startCol, int zSIZE) {
    int sum = 0;
    for(int i = 0; i < zSIZE; i++) {
        sum += matrix[startRow][startCol + i];
        sum += matrix[startRow + zSIZE -1][startCol+i];
        if(i>0 && i<zSIZE-1) {
            sum += matrix[startRow+i][startCol + zSIZE - 1- i];
        }
    }
    return sum;
}

int main() {
    int matrix[100][100];
    int m, n;
    cin >> m >> n;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int zSIZE;
    cin >> zSIZE;
    int matrix2[100][100];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i+zSIZE-1 < m && j+zSIZE-1 < n && zSIZE >= 2) {
                matrix2[i][j] = calculate(matrix, i, j, zSIZE);
            }else {
                matrix2[i][j] = matrix[i][j];
            }
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}