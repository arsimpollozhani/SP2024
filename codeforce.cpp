//
// Created by win11pro on 2/8/2025.
//
//TEST
#include<iostream>
#include<cstring>

void normalize (char * str) {
    for(int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}

using namespace std;
int main () {
    char str[4];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str;
        normalize(str);
        if(strcmp(str, "yes") == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}