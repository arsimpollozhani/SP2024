/*//
// Created by win11pro on 1/7/2025.
//

/*
* // За дадени од влез индекси на редици, да се испечати онаа редица која содржи како елементи најголем број на n-цифрени
* броеви (n се внесува од стандарден влез). Доколку има повеќе такви редици, се печати последно најдената.
// Од стандарден влез се задаваат димензиите на една матрица Аmxn(m, n <= 100),
//  а во продолжение се читаат елементите на матрицата.
//  Елементите на матрицата се цели броеви.
// Потоа се внесува цел број N(N <= 100), а во продолжение N индекси кои ги означуваат соодветните редици на матрицата
// На крај се внесува еден број n, кој означува колку цифрени броеви да се бараат во соодветните редици на матрицата
 #1#
#include<iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while(num != 0) {
        count++;
        num = num / 10;
    }
    return count;
}

int calculations(int matrix[100][100], int rowIndex, int howDigits, int n) {
    int counter = 0;
    for(int j =0; j < n; j++) {
        if(countDigits(matrix[rowIndex][j]) == howDigits) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int matrix[100][100];
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int n_size;
    cin >> n_size;
    int list[100];
    for(int i = 0; i < n_size; i++) {
        cin >> list[i];
    }
    int digitSize;
    cin >> digitSize;
    int maxRow = -1;
    int maxCount = 0;
    for(int i = 0; i < n_size; i++) {
        int count = calculations(matrix, list[i], digitSize, n);
        if(count >= maxCount) {
            maxCount = count;
            maxRow = list[i];
        }
    }
    for(int j=0; j < n; j++) {
        cout << matrix[maxRow][j] << " ";
    }
    return 0;
}*/

#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int matrix[100][100];
    int m , n;
    cin >> m >> n;

    for(int i = 0; i < m;i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int storeSumOfCols[n] = {0};
    int minSum = INT_MAX;
    int index = -1;
    for(int j = 0; j < n; j++)
    {
        int sum = 0;
        for(int i = 0; i < m; i++)
        {
            sum += matrix[i][j];
        }
        storeSumOfCols[j] = sum;

        if(minSum > sum)
        {
            minSum = sum;
            index = j;
        }
    }
    for(int i = 0; i < m; i++)
    {
        cout << matrix[i][index] << " ";
    }
    cout << "Min sum: "<< minSum << endl;
    cout << "Min index : " << index << endl;
    return 0;
}