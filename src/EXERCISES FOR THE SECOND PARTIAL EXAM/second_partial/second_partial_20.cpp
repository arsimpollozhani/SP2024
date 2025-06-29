//
// Created by win11pro on 12/16/2024.
//
#include<iostream>

using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int isStrong( int n)
{
    int originalNumber = n;
    int sumOfFactorials = 0;
    while(n > 0)
    {
        int lastDigit = n % 10;
        int tempFactorial = factorial(lastDigit);
        sumOfFactorials += tempFactorial;
        n/=10;
    }
    if(sumOfFactorials == originalNumber)
    {
        return 1;
    } else {
        return 0;
    }
}

void fillArray(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void isStrongDisplay(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(isStrong(a[i]))
        {
            cout << a[i];
        }
    }
}
int main()
{
    int a[100];
    int n;
    cin >> n;
    //cout << factorial(5) << endl; OK
    //isStrongDisplay(a,n);
    isStrongDisplay(a,n);
    return 0;
}