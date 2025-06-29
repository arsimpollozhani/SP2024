/*//
// Created by win11pro on 1/6/2025.
//
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

char findPunctuation(char *str) {
    if(*str == '\0') {
        return *str;
    } else {
        if(ispunct(*str)) {
            return *str;
        }
        return findPunctuation(str+1);
    }
}

char findPunctuationF(char *str) {
    for(int i = 0; i < strlen(str); i++) {
        if(ispunct(str[i])) {
            return str[i];
        }
    }
    return '\0';
}

int main() {
    char str[100];
    cin.getline(str, 100);
    char result = findPunctuation(str);

    if(result == '\0') {
        cout << "Nema";
    } else {
        cout << result;
    }
    // char res = findPunctuationF(str);
    // if (res == '\0') {
    //     cout << "Nema";
    // } else {
    //     cout << res;
    // }
}*/


#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

char printFirstPunct(char *str) {
    if(*str == '\0') {
        return '\0';
    } else {
        if(ispunct(*str)) {
            return *str;
        } else {
            return printFirstPunct(str+1);
        }
    }
}

int main() {
    char str[101];
    cin.getline(str,101);
    char punctSign = printFirstPunct(str) ;
    if(punctSign == '\0') {
        cout << "No" << endl;
    } else {
        cout << punctSign << endl;
    }
    return 0;
}