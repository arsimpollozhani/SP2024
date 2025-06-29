#include<iostream>
using namespace std;

int main () {

    int matrix[100][100];
    int m;
    cin >> m;

    int min, max;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];

            if (i == 0 && j == 0) {
                min = max = matrix[i][j];
            } else {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        matrix[i][i] = max-min;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
    return 0;
}