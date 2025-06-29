//Created: task_14.cpp
//
// Created by win11pro on 1/3/2025.
//
#include<iostream>
using namespace std;

void transform(int a[][100],int n,int b[][50]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            b[i][j]=a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            b[i+n][j] = a[i][j+n];
        }
    }
}

int main() {
    int n;
    int a[50][100], b[100][50];
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<2*n;j++) {
            cin>>a[i][j];
        }
    }

    transform(a,n,b);

    for(int i=0;i<2*n;i++) {
        for(int j=0;j<n;j++) {
            cout<<b[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}