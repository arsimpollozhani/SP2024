#include <iostream>
using namespace std;

int main() {
    int matrix[100][100];
    int m;

    cin >> m;

    // Read the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Print the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}