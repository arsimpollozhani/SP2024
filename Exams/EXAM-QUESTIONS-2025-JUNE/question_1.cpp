//Created: question_1.cpp
#include<iostream>
using namespace std;

// normal function

void print (int n) {
    for (int i = 1; i <= n; i++) {
        cout << i;
    }
    
    for (int i = n-1; i > 0; i--) {
        cout << i;
    }
}

//recursive

void printRec (int n, int current = 1) {
    if (current > n) {
        return;
    }
    if (n != current)
        cout << current;
    printRec (n ,current + 1);
    cout << current;
}

int main () {
    int n;
    cin >> n;
    
    for (int i = n - 1; i >= 0; i--) {
        // print (n);
        printRec (n);
        n--;
        cout << endl;
    }
    
    return 0;
}