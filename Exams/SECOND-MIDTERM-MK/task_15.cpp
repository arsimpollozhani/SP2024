//Created: task_15.cpp
//
// Created by win11pro on 1/3/2025.
//
#include <algorithm>
#include<iostream>
using namespace std;

int collocationRec(int num) {
    if (num == 0) return 0;
    int lastDigit = num % 10;
    if(lastDigit == 9) {
        lastDigit = 7;
    }
    return collocationRec(num / 10) * 10 + lastDigit;
}

int main() {
    int collocation[100];
    int num;
    int count = 0;
    while(cin>>num) {
        if(count < 100) {
            collocation[count++] = collocationRec(num);
        } else {
            break;
        }
    }

    sort(collocation, collocation + count);

    int limit = min(5, count);
    for(int i = 0; i < limit; i++) {
        cout<<collocation[i]<<" ";
    }
    cout<<endl;
    return 0;
}