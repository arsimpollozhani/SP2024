//
// Created by win11pro on 12/16/2024.
//
#include<iostream>

using namespace std;

int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int countChangesInArray(int *a, int n, int start, int end,  int &count)
{
    if(start >= end)
    {
        return count;
    }
    int originalStart = a[start];
    int originalEnd = a[end];

    a[start] = a[end] = max(a[start], a[end]);

    //count += (a[start] != originalStart) + (a[end]!=originalEnd);
    if(a[start] != originalStart) count++;
    if(a[end]!=originalEnd) count++;
    return countChangesInArray(a,n,start+1, end-1, count);

}

void fillArray(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void printArray(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout <<  a[i] << " ";
    }
}
int main()
{
    int a[100];
    int n;
    cin >> n;
    fillArray(a,n);
    int start = 0;
    int end = n - 1;
    int count = 0;
    countChangesInArray(a,n,start,end, count);
    cout << count << endl;
    printArray(a,n);
    return 0;
}