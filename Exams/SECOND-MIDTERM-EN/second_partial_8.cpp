//
// Created by win11pro on 12/16/2024.
//
//with loop
/*#include<iostream>
using namespace std;
int Odd(int a[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout << Odd(a,n);
    return 0;
}*/


/*#include<iostream>
using namespace std;
int Odd(int a[], int n) {
    if(n==0) {
        return 0;
    }
    return (a[n-1]%2) + Odd(a,n-1);
}
int main() {
    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout << Odd(a,n);
    return 0;
}*/

#include<iostream>
using namespace std;

int Odd(int a[], int n) {
    if(n == 0) {
        return 0;
    }
    return (abs(a[n - 1]) % 2) + Odd(a, n - 1);
}

int main() {
    int array[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << Odd(array, n) << endl;
    return 0;
}
