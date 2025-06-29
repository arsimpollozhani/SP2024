//
// Created by win11pro on 1/6/2025.
//
#include<iostream>
using namespace std;

int main() {
    int matrix[100][100];
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    //loop to calculate Z shape sums
    for(int z = 1; z < min(m, n); z++) {
        int sum = 0;
        //0-th row
        for(int j = 0; j <=z ; j++) {
            sum += matrix[0][j];
        }
        //z-th row
        for(int j = 0; j <= z; j++) {
            sum += matrix[z][j];
        }
        //diagonal
        for(int i = 1; i <= z-1; i++) {
            sum += matrix[i][z-i];
        }
        cout << sum << endl;
    }
    return 0;
}