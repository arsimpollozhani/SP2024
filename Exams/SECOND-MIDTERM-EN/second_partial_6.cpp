//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
using namespace std;

int main(){
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

    int coordinate1 , coordinate2;
    cin >> coordinate1 >> coordinate2;


    if(matrix[coordinate1][coordinate2] == 0)
    {
        matrix[coordinate1][coordinate2] = 1;

        for( int i = coordinate1 - 1; i>=0; i--)
        {
            if(matrix[i][coordinate2] == 1) break;
            matrix[i][coordinate2] = 1;
        }


        for( int i = coordinate1 + 1; i < m; i++)
        {
            if(matrix[i][coordinate2] == 1) break;
            matrix[i][coordinate2] = 1;
        }


        for( int j = coordinate2 - 1; j >= 0; j--)
        {
            if(matrix[coordinate1][j] == 1) break;
            matrix[coordinate1][j] = 1;
        }

        for( int j = coordinate2 + 1; j < n; j++)
        {
            if(matrix[coordinate1][j] == 1) break;
            matrix[coordinate1][j] = 1;
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