#include<iostream>
using namespace std;

void fillMatrix (int matrix[100][100], int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
        
    }
    
}

void printMatrix (int matrix[100][100], int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout <<  matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main () {
    int matrix[100][100];
    int m;

    cin >> m;

    fillMatrix (matrix, m);

    bool symetric = true;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symetric = false;
                break;
            }
        }
        if (!symetric) {
            break;
        }
    }

    if (symetric) {
        cout << "Symetric" << endl;
    } else {
        cout << "Not Symetric" << endl;
    }
    

    //printMatrix (matrix, m);
    return 0;
}