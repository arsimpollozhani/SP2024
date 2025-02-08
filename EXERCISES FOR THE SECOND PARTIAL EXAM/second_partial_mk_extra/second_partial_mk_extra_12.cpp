//
// Created by win11pro on 1/4/2025.
//
#include<iostream>
using namespace std;

int main() {
    int m, n;
    int matrix[100][100];
    cin>>m>>n;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<m;i++) {
        int count = 0;
        for(int j=0;j<n;j++) {

            if((((i+j) % 2) == 0) && (matrix[i][j] % 2 == 0) ||
                (((i+j) % 2) == 1) && (matrix[i][j] % 2 == 1)) {
                count++;
            }
        }
        cout << i << ": " << count << endl;
    }
    return 0;
}