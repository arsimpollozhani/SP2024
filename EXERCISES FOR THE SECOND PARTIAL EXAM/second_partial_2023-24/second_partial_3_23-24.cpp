/*//
// Created by win11pro on 1/6/2025.
//
#include<iostream>
using namespace std;

void print(int n) {
    cout << n << " ";
    if(n>0) {
        print(n-5);
        cout << n << " ";
    }
}

int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

#include<iostream>
using namespace std;

void print(int n) {
    cout << n << " ";
    if(n<=0) {
        return;
    }
    print(n-5);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}










