//Created: question_5.cpp

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
    //loop to calculate N shape sums
    for(int z = 1; z < min(m, n); z++) {
        int sum = 0;
        //0-th col
        for(int i = 0; i <=z ; i++) {
            sum += matrix[i][0];
        }
        //z-th col
        for(int i = 0; i <= z; i++) {
            sum += matrix[i][z];
        }
        //diagonal
        for(int i = 1; i < z; i++) {
            sum += matrix[i][i];
        }
        cout << sum << endl;
    }
    return 0;
}