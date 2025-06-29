//
// Created by win11pro on 1/7/2025.
//
#include<iostream>
#include <cstring>
using namespace std;

void changeLetters(char *str, char *sign1, char *sign2) {
    int len = strlen(str);
    int len1 = strlen(sign1);
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len1; j++) {
            if(str[i] == sign1[j]) {
                str[i] = sign2[j];
            }
        }
    }
}

int main() {

    char sign1[11], sign2[11];
    int n;
    cin.getline(sign1,11);
    cin.getline(sign2,11);
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++) {
        char str[101];
        cin.getline(str,101);
        changeLetters(str, sign1, sign2);
        cout << str << endl;
    }
    return 0;
}