//
// Created by win11pro on 12/1/2024.
//
//Matrices
// Lab 6 Mon
//Task 1: Replace the last element of the matrix with the maximum of each row and find
// the average of the new matrix
/*
#include<iostream>
using namespace std;
const int MAX = 100;
int findMax(int matrix[MAX][MAX], int m, int n) {
    int max = -100000;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

int main() {
    int matrix[MAX][MAX];
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int max = findMax(matrix, m, n);
    float sum = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if( (j == n - 1)  && i >= 0) {
                matrix[i][j] = max;
            }
            sum += matrix[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    float average = sum / (m * n);
    cout << average << endl;
    return 0;
}
*/

//Task 2: Transform the numbers below the main diagonal and antidiagonal with negative signs

/*#include<iostream>
using namespace std;
const int MAX = 100;
int main() {
    int matrix[MAX][MAX];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j<i && (i+j)>=n) {
                matrix[i][j] = matrix[i][j] - 2*matrix[i][j];
            }

        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}*/

//TASK 3
/*You have an NxM matrix as input, where N and M are loaded first, and then the elements of the matrix.
Your task is to print the diagonal elements (see image) starting from the first row of the matrix.
See test examples for printing
Note: be careful in case the matrix is not square

Input1          Input2
3               2
3               4
1 2 3           1 2 3 4
4 5 6           5 6 7 8
7 8 9

Output1         Output2
1               1
2 4             2 5
3 5 7           3 6
                4 7 */


/*
#include<iostream>
using namespace std;
int main() {
    int matrix[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int start = 0; start < n; start++) {
        int i = 0, j = start;
        while (i < m && j >= 0) {
            cout << matrix[i][j] << " ";
            i++;
            j--;
        }
        cout << endl;
    }
    return 0;
}
*/




/*
#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int matrix[MAX][MAX];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int start = 0; start < n; start++) {
        for (int i = 0, j = start; i < m && j >= 0; i++, j--) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/




//Lab 6 Tue

//Task 1: Enter a square matrix with n rows cols, FIND THE COLUMN WITH THE LARGEST SUM OF ELEMENTS
//the found sum add to every element of that specific column and print the transformed matrix.
/*#include<iostream>
using namespace std;

int main() {
    int matrix[100][100];
    int n;
    cin >> n;
    int array[n-1] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int sum = 0;

    int maxSum = -100000;
    int maxSumColIndex = -1;
    for (int j = 0; j < n; j++) {
        sum = 0;
        for (int i = 0; i < n; i++) {
            sum += matrix[i][j];

        }
        array[j] = sum;
        if(sum > maxSum) {
            maxSum = sum;
            maxSumColIndex = j;
        }
    }

    for(int i = 0; i < n; i++) {
        matrix[i][maxSumColIndex] += maxSum;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    /*for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }#1#
    return 0;
}*/

//Task 2: Transform the numbers below the main diagonal and antidiagonal with negative signs
/*#include<iostream>
using namespace std;
int main() {
    int matrix[100][100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i>j && (i+j) >= n) {
                matrix[i][j] = matrix[i][j]-2*matrix[i][j];
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
//Task 3: Enter two matrices with dimensions m and n, count how many columns from the first matrix
// is in the second matrix.
/*
4 4
1 2 4 6
2 3 4 5
5 1 3 1
1 3 4 4

2 2 2 4
3 2 3 5
5 2 1 3
1 1 3 4
1
 */


#include<iostream>
using namespace std;

int main() {
    int m1[100][100], m2[100][100];
    int m , n;
    cin>>m>>n;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>m1[i][j];
        }
    }

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>m2[i][j];
        }
    }
    int count = 0;
    for(int j1 = 0;j1<n;j1++) {
        for(int j2 = 0;j2<n;j2++) {
            bool same = true;
            for(int i = 0;i<m;i++) {
                if(m1[i][j1] != m2[i][j2]) {
                    same = false;
                    break;
                }
            }
            if(same) {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}












//EXTRA
/*#include<iostream>
using namespace std;
const int MAX = 100;
int findMax(int matrix[MAX][MAX], int m, int n) {
    int max = -100000;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    return max;
}


int findMin(int matrix[MAX][MAX], int m, int n) {
    int min = 100000;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
    return min;
}
int main() {
    int matrix[MAX][MAX];
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int max = findMax(matrix, m, n);
    int min = findMin(matrix, m, n);
    float sum = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if( (i == m - 1)  && j >= 0) {
                matrix[i][j] = max;
            }
            if(j == 0 && i >= 0) {
                matrix[i][j] = max;
            }
            if(i == 0 && j >= 0) {
                matrix[i][j] = max;
            }
            if( (j == n - 1) && i >= 0) {
                matrix[i][j] = max;
            }
            sum += matrix[i][j];
        }
    }
    for(int i = 1; i < m - 1; i++) {
        for(int j = 1; j < n - 1; j++) {
            if(i == j) {
                matrix[i][j] = 0;
            }
            if(i+j == m - 1) {
                matrix[i][j] = 8;
            }
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    float average = sum / (m * n);
    cout << average << endl;
    cout << min <<endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;

int main() {
    int matrix[100][100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    /*for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }#1#
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && j >= 0)) {
                matrix[i][j] = 0;
            }
            if ((i + j) == n - 1) {
                matrix[i][j] = 0;
            }
            if ((i == n - 1) && (j > 0)) {
                matrix[i][j] = 0;
            }
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
                cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}*/