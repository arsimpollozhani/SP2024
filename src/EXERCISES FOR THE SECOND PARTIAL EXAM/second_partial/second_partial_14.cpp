//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    int matrix[100][100];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int countDiagonalChanges = 0;
    int countOtherChanges = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i==j && matrix[i][i] == 1)
            {
                matrix[i][i] = 0;
                countDiagonalChanges++;
            }
            if(matrix[i][j] != matrix[j][i])
            {
                matrix[j][i] = matrix[i][j];
                countOtherChanges++;
            }
        }
    }
    /* for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    } */
    cout << countDiagonalChanges + countOtherChanges << endl;
    return 0;
}