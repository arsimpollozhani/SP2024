#include<iostream>
#include<climits>
using namespace std;



int main () {
    int m, n;
    cin >> m >> n;

    int matrix[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
        
    }
    

    int minColSum = INT_MAX;
    int idx = 0;

    for (int j = 0; j < n; j++) {

        int colSum = 0;

        for (int i = 0; i < m; i++) {  
            colSum += matrix[i][j]; 
        }

        if (minColSum > colSum) {
            minColSum = colSum;
            idx = j;
        }
    }

    cout << idx << endl;
    
    return 0;
}