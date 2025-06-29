/*
//
// Created by win11pro on 1/4/2025.
//

#include<iostream>
using namespace std;

int calculateSum(int matrix[100][100], int startRow, int startColumn, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += matrix[startRow+i][startColumn];
        sum += matrix[startRow+i][startColumn+size-1];
        if(i>0 && i<size-1) {
            sum += matrix[startRow+i][startColumn+i];
        }
    }
    return sum;
}

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[100][100];
    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int nSize;
    cin >> nSize;

    int matrix2[100][100];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            //check if the size of N can fit into the matrix
            if(i + nSize - 1 < m && j + nSize - 1 < n) {
                matrix2[i][j] = calculateSum(matrix, i, j, nSize);
            } else {
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
*/


/*#include<iostream>
using namespace std;

int calculateSum (int matrix[100][100], int startRow, int startCol, int nSIZE) {
    int sum = 0;
    for(int i = 0; i < nSIZE; i++) {
        sum += matrix[startRow+i][startCol];
        sum += matrix[startRow+i][startCol+nSIZE-1];
        if(i>0 && i<nSIZE-1) { //don't calculate edge of N elements
            sum += matrix[startRow+i][startCol+i];
        }
    }
    return sum;
}

int main() {
    int m, n;
    int matrix[100][100];
    cin>>m>>n;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }
    int nSIZE ;  // the size of n letter for the elements to calculate
    cin>>nSIZE;

    int matrix2[100][100];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(i+nSIZE - 1<m && j+nSIZE-1<n) {
                matrix2[i][j] = calculateSum(matrix,i,j,nSIZE);
            } else {
                matrix2[i][j] = matrix[i][j];
            }
        }
    }

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<matrix2[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}*/


#include<iostream>
using namespace std;

int main() {
    int m, n;
    cin>>m>>n;
    int matrix[100][100];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }

    int nSize;
    cin>>nSize;
    int matrix2[100][100];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i+nSize-1<m && j+nSize-1<n) {
                int sum = 0;
                for(int k=0;k<nSize;k++) {//submatrix
                    sum += matrix[i+k][j];
                    sum += matrix[i+k][j+nSize-1];

                    if(k>0 && k<nSize-1) {
                        sum += matrix[i+k][j+k];
                    }
                    matrix2[i][j] = sum;
                }
            } else {
                matrix2[i][j] = matrix[i][j];
            }
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout<<matrix2[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}