#include<iostream>
using namespace std;


int main (){

    int matrix[100][100];

    int m, n;

    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int sumOddCols = 0;
    int sumEvenRows = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i%2 == 0) {
                sumEvenRows += matrix[i][j]; 
            }
            if (j%2 == 1) {
                sumOddCols += matrix[i][j];
            }
        }
    }

    cout << sumEvenRows - sumOddCols << endl;


    
}