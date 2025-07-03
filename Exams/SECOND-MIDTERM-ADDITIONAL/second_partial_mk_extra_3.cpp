/*//
// Created by win11pro on 1/4/2025.
//
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
void toLower(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int occurs(char *str) {
    char str1[] = "A1c";
    toLower(str);
    toLower(str1);
    char *result1 = str1;
    char *result = strstr(str, result1);

    if(result == nullptr) {
        return 0;
    } else {
        return 1 + occurs(result + strlen(str1));
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        char str[81];
        cin.getline(str, 81);
        if(occurs(str) >= 2) {
            toLower(str);
            cout << str << endl;
        }
    }

    return 0;
}*/


#include<iostream>
#include <string.h>
using namespace std;

void toLower(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }
}

int containsSubStr(char *str) {
    char subStr[] = "A1c";
    toLower(str);
    toLower(subStr);
    char *string1 = str;
    char *string2 = subStr;
    char *result = strstr(string1, string2);
    if (result == nullptr) {
        return 0;
    } else {
        return 1 + containsSubStr(result + strlen(string2));
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        char str[51];
        cin.getline(str, 50);
        int contains = containsSubStr(str);
        if (contains >= 2) {
            toLower(str);
            cout << str << endl;
        }
    }
    return 0;
}
