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
    int maxAboveDiagonal = INT_MIN;
    int minBelowDiagonal = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i<j)
            {
                if(maxAboveDiagonal < matrix[i][j])
                {
                    maxAboveDiagonal = matrix[i][j];
                }
            }
            if(i>j)
            {
                if(minBelowDiagonal > matrix[i][j])
                {
                    minBelowDiagonal = matrix[i][j];
                }
            }
        }
    }for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i<j)
            {
                matrix[i][j] = maxAboveDiagonal;
            }
            if(i>j)
            {
                matrix[i][j] = minBelowDiagonal;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}