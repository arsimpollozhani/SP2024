//Created: question_4.cpp
#include<iostream>
using namespace std;


// Recursive approach

void printRec (int n, int current = 1) {
    if (current > n) {
        return;
    }
    
    
    if (current < n)
        cout << 1;
    
    
    if (current == n) {
        cout << n;
    }
    printRec (n, current + 1);
    
    if (current < n)
        cout << 1;
    
}

// looping approach

void print (int n) {
    for (int i = 1; i < n; i++) {
        cout << 1;
    }
    
    cout << n;
    
    for (int i = 1; i < n; i++) {
        cout << 1;
    }
}


int main() {
    int n;
    
    cin >> n;
    
    // for (int i = 1; i < n+1; i++) {
    //     printRec(i);
    //     cout << endl;
    // }
    
    for (int i = 1; i <= n; i++) {
        print (i);
        cout << endl;
    }
    return 0;
}