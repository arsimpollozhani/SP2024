//
// Created by win11pro on 1/10/2025.
//
/*#include<iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int m , n;
    cin >> m >> n;
    int matrix[100][100];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        for(int j = 0; j < n; j++) {
            if(sum >x ) {
                matrix[i][j] = 1;
            } else if (sum < x) {
                matrix[i][j] = -1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}*/


#include<iostream>
using namespace std;

int posNumbers(int a[], int n) {
    if(n == 0) return 0;
    if(a[n-1] > 0) {
        return 1 + posNumbers(a, n-1);
    } else {
        return posNumbers(a, n-1);
    }
}
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout << posNumbers(a, n) << endl;
}