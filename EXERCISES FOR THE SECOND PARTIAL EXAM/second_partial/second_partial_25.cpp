//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
using namespace std;

int main()
{
    int a[100][100], b[100][100];
    int n;
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j< n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j< n; j++)
        {
            b[i][j] = a[i][j];
        }
    }

    for(int i = 0; i < n;i++)
    {

        for(int j = 0; j< n; j++)
        {
            int count = 0;
            if (b[i][j] == 0)
            {
                if (i > 0 && b[i - 1][j] == 1)
                {
                    count++;
                }
                if (i < n - 1 && b[i + 1][j] == 1)
                {
                    count++;
                }
                if (j > 0 && b[i][j - 1] == 1)
                {
                    count++;
                }
                if (j < n - 1 && b[i][j + 1] == 1)
                {
                    count++;
                }
                if(count>=3)
                {
                    a[i][j] = 1;
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}