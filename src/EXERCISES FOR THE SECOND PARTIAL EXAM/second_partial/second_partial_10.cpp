//
// Created by win11pro on 12/16/2024.
//

#include<iostream>
using namespace std;

int main()
{
    int matrix[100][100];
    int m,n;
    cin >> m >> n;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int original[100][100];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            original[i][j] = matrix[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            if (i > 0)
            {
                if (original[i - 1][j] > 0)
                {
                    sum += original[i - 1][j];
                }
            }
            if (i < m - 1)
            {
                if (original[i + 1][j] > 0)
                {
                    sum += original[i + 1][j];
                }
            }
            if (j > 0)
            {
                if (original[i][j - 1] > 0)
                {
                    sum += original[i][j - 1];
                }
            }
            if (j < n - 1)
            {
                if (original[i][j + 1] > 0)
                {
                    sum += original[i][j + 1];
                }
            }
            matrix[i][j] = sum;
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}