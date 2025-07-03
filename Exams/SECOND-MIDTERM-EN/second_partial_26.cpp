//
// Created by win11pro on 12/16/2024.
//


#include <iostream>

using namespace std;
const int MAX = 10000;
int main() {
    int m,n;

    int matrix[MAX][MAX];
    int array[MAX*MAX];
    cin >> m >> n;
    int index = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        int frequency[MAX+1]={0};
        for(int j = 0; j < n; j++) {
            frequency[matrix[i][j]]++;
        }
        for(int j = 0; j < n; j++) {
            if(frequency[matrix[i][j]] == 1) {
                array[index++] = matrix[i][j];
            }
        }
    }
    if(index == 0) {
        cout << "N" << endl;
    } else {
        for(int i = 0; i < index; i++) {
            cout << array[i] << " ";
        }
    }
}