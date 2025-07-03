#include<iostream>
using namespace std;

int concatenate (int i, int j) {
    if (j < 10) { // j is one digit number
        return i * 10 + j;
    }

    if (j < 100) { // j is two digit number
        return i * 100 + j;
    }

    if (j < 1000) { // j is three digit number
        return i * 1000 + j;
    }
}


int isIndexElement (int i, int j, int element) {
    return concatenate(i,j) == element;
}

int main () {
    int matrix[100][100];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];        
        }
    }


    for (int j = 0; j < m; j++) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (isIndexElement(i,j,matrix[i][j])) {
                count++;
            }
        }
        cout << count << endl;
    }
    
}

