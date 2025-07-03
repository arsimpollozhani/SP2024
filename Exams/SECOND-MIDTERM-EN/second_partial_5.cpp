//
// Created by win11pro on 12/16/2024.
//

/*Your program should count and print on SO the number of rows and
columns with at least 3 consecutive appearance of elements with value 1.*/
#include<iostream>
using namespace std;

int main() {
    int m, n;
    int matrix[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int countOnesInRows = 0;
    int countOnesInCols = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= n - 3; j++) {
            if (matrix[i][j] == 1 && matrix[i][j + 1] == 1 && matrix[i][j + 2] == 1) {
                countOnesInRows++;
                break;
            }
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i <= m - 3; i++) {
            if (matrix[i][j] == 1 && matrix[i + 1][j] == 1 && matrix[i + 2][j] == 1) {
                countOnesInCols++;
                break;
            }
        }
    }
    cout << countOnesInRows + countOnesInCols << endl;

    return 0;
}
