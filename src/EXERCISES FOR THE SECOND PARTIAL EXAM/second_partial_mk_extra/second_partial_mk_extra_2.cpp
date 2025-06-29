//
// Created by win11pro on 1/4/2025.
//
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int size = ceil(sqrt(n));
    int matrix[size][size];
    for(int i = 1; i <= size; i++) {
        for(int j = 1; j <= size; j++) {
            matrix[j][i] = 0;
        }
    }
    int current = 1;

    for(int j = 0; j < n; j++) {
        if(j % 2 == 0) {
            for(int i = 0; i < size; i++) {
                if(current <= n) {
                    matrix[i][j] = current++;
                }
            }
        } else {
            for(int i = size - 1; i >= 0; i--) {
                if(current <= n) {
                    matrix[i][j] = current++;
                }
            }
        }
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int size = ceil(sqrt(N));
    int matrix[size][size] = {0};

    int fill = 1;
    for(int j = 0; j < size; j++) {
        if(j % 2 == 0) {
            for(int i = 0; i < size; i++) {
                if(fill <= N) {
                    matrix[i][j] = fill++;
                }
            }
        } else {
            for(int i = size - 1; i >= 0; i--) {
                if(fill <= N) {
                    matrix[i][j] = fill++;
                }
            }
        }
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
