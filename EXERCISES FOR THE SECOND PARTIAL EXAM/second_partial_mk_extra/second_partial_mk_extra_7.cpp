#include<iostream>
using namespace std;

void premesti(int *a, int n) {
    int temp[100];
    int posIndex = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] >= 0) // store positive numbers first
        {
            temp[posIndex++] = a[i];
        }
    }
    for(int i = 0; i < n;i++) {
        if(a[i]<0) {
            temp[posIndex++] = a[i];
        }
    }
    for(int i=0 ;i< n; i++) {
        a[i] = temp[i];
    }
}

int main() {
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    premesti(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
