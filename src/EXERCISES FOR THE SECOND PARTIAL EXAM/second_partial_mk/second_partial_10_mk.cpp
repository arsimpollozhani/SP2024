//
// Created by win11pro on 1/3/2025.
//
#include<iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char z1, z2, str[81];
    char copy[81];
    cin >> z1 >> z2;
    cin.ignore();
    while(true) {
        cin.getline(str, 81);
        if(strcmp(str, "#") == 0) {break;}
        int startIndex = 0;
        int endIndex = 0;
        for(int i = 0; i < strlen(str); i++) {
            if(str[i] == z1) {
                startIndex = i;
            }
            if(str[i] == z2) {
                endIndex = i;
            }


        }
        for(int j = startIndex+1; j < endIndex; j++) {
            cout<< str[j];
        }
        cout << endl;
    }
    return 0;
}