#include<iostream>
using namespace std;

int main() {
    int matrix[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int start = 0; start < n; start++) {
        int i = 0, j = start;
        while (i < m && j >= 0) {
            cout << matrix[i][j] << " ";
            i++;
            j--;
        }
        cout << endl;
    }
    return 0;
}
