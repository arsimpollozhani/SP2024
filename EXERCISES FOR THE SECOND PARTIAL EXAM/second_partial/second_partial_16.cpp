//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

bool checkIfHex (char *hex) {
    for(int i = 0; hex[i] != '\0'; i++) {
        if(!isxdigit(hex[i])) {
            return false;
        }
    }
    return true;
}



int main() {
    char hex[21];
    int counter = 0;
    while(cin.getline(hex, 21)) {
        for(int i = 0; hex[i] != '\0'; i++) {
            hex[i] = toupper(hex[i]);
        }
        if(strlen(hex)>0 && checkIfHex(hex)) {
            cout<<hex << endl;
            ++counter;
        }
    }
    cout << "Total: " << counter << endl;
    return 0;
}