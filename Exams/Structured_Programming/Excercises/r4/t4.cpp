#include<iostream>
using namespace std;

int main () {

    int matrix[100][100];

    int m, n;
    cin >> m >> n;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> matrix[i][j]; 
        }
    }


    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            
            int sum = 0;

            for (int k = 0; k<m; k++) {
                if (i!=k) {
                    sum += matrix[k][j];
                }
            }

            for (int k=0; k<n; k++) {
                if (j!=k) {
                    sum += matrix[i][k];
                }
            }

            if (sum%2==1) {
                cout << matrix[i][j] << " ";
            }

        }
    }


    return 0;
}