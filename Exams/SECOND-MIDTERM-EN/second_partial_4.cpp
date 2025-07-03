//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
#include <string.h>
using namespace std;

int countDigitsInEvenPositions(char *num,char c ) {
    int count=0;
    int position = 1;
    for(int i = strlen(num)-1; i>=0 ;i--) {
        if(position%2==0 && num[i]==c) {
            count++;

        }
        position++;
    }

    return count;
}

int main() {
    char a[101], b[101],c;
    while(cin >> a >> b >> c) {
        int countA = countDigitsInEvenPositions(a,c);
        int countB = countDigitsInEvenPositions(b,c);
        if(countA >= countB) {
            cout << a << endl;
        } else {
            cout << b << endl;
        }
    }
    return 0;
}