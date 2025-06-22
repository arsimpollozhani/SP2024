#include<iostream>
using namespace std;
const int MAX = 100;

int findMax(int matrix[MAX][MAX], int m, int n) {
    int max = -100000;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

int main() {
    int matrix[MAX][MAX];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int max = findMax(matrix, m, n);
    float sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ((j == n - 1) && i >= 0) {
                matrix[i][j] = max;
            }
            sum += matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    float average = sum / (m * n);
    cout << average << endl;
    return 0;
}
