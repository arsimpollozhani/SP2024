//Created: task_19.cpp
//
// Created by win11pro on 1/10/2025.
//
#include<iostream>
#include <cstring>
#include<cctype>
using namespace std;

void shiftCharacters(char *str, int x, int i = 0) {

    if(str[i] == '\0') {
        return;
    }
    if(str[i] >= 'a' && str[i] <= 'z') {
        str[i] = 'a' + (str[i] - 'a' + x) % 26;
    }
    if(str[i] >= 'A' && str[i] <= 'Z') {
        str[i] = 'A' + (str[i] - 'A' + x) % 26;
    }
    shiftCharacters(str, x, i + 1);
}

int main() {
    int n, x;
    cin >> n >> x;
    cin.ignore();
    for(int i=0;i<n;i++) {
        char str[81];
        cin.getline(str, 81);
        shiftCharacters(str, x);
        cout << str << endl;
    }
    return 0;
}