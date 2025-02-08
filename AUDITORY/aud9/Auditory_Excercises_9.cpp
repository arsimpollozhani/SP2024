//
// Created by win11pro on 12/1/2024.
//
//Matrices
/*Write a program that, for a matrix entered from the keyboard,
calculates the difference between the sum of elements in odd columns
and the sum of elements in even rows. The matrix does not have to be square.*/
/*#include<iostream>
using namespace std;
int main() {
    int a[100][100];
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int sumOddCols = 0, sumEvenRows = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if((i+1)%2 == 0) {
                sumEvenRows += a[i][j];
            }
            if((j+1)%2 == 1) {
                sumOddCols += a[i][j];
            }
        }
    }
    cout << "Sum Even Rows: " << sumEvenRows << endl;
    cout << "Sum Odd Cols: " << sumOddCols << endl;

    return 0;
}*/

/*Task 2
Write a program that, for a matrix entered from the keyboard, replaces
the elements of the main diagonal with the difference between the
maximum and minimum element in the matrix. Print the resulting
matrix to the screen.*/
/*#include<iostream>
using namespace std;
int main() {
    int a[100][100];
    int n;
    cin >> n;
    int min = 0, max = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            if(i == 0&&j == 0) {
                min = max = a[i][j];
            } else if (a[i][j] < min) {
                min = a[i][j];
            } else if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    int diff = max - min;
    for(int i = 0; i < n; i++) {
        a[i][i] = diff;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}*/


//Task 3
/*Write a program that, for a square matrix entered from the keyboard,
prints to the screen whether it is symmetric with respect to the
main diagonal.*/
/*#include<iostream>
using namespace std;
int main() {
    int a[100][100];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int symmetric = 1;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
            if(!symmetric) {
                 break;
            }
        }
    }
    if(symmetric) {
        cout << "symmetric to the main diagonal" << endl;
    } else {
        cout << "not symmetric to the main diagonal" << endl;
    }

    return 0;
}*/


#include<iostream>
using namespace std;

int main()
{
    int a[100][100];
    int n;
    cin >> n;
    int min , max ;
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if(i == 0 && j == 0)
            {
                min = max = a[i][j];
            } else if (a[i][j] > max)
            {
                max = a[i][j];
            }else if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }

    }
    int difference = max - min;
    for(int i = 0 ; i < n ; i++)
    {
        a[i][i] = difference;
    }
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}