//Created: task_10.cpp
//
// Created by win11pro on 1/10/2025.
//
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char z1, z2;
    char str[101];
    cin >> z1 >> z2;
    cin.ignore();
    while(true) {

        cin.getline(str, 101);
        if(strcmp(str, "#") == 0) {
            break;
        }
        int start = 0;
        int end = 0;
        for(int i = 0; i < strlen(str); i++) {
            if(str[i] == z1) {
                start = i;
            }
            if(str[i] == z2) {
                end = i;
            }
        }
        for(int i = start+1; i < end; i++) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}