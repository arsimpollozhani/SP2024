/*//
// Created by win11pro on 1/6/2025.
//
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

char findUppercase(char *str) {
    if(*str == '\0') {
        return *str;
    } else {
        if(isalpha(*str) && isupper(*str)) {
            return (*str);
        }
        return findUppercase(str+1);
    }
}

int main() {

    char str[100];
    cin.getline(str,100);
    char result = findUppercase(str);
    if(result == '\0') {
        cout << "Nema";
    } else {
        cout << result;
    }
    return 0;
}*/

#include<iostream>
using namespace std;

char findUppercase(char *str) {
    if(*str == '\0') {
        return '\0';
    } else {
        if(isupper(*str)) {
            return *str;
        } else {
            return findUppercase(str+1);
        }
    }
}

int main() {
    char str[100];
    cin.getline(str,100);
    char result = findUppercase(str);
    if(result == '\0') {
        cout<<"Not Found"<<endl;
    } else {
        cout<<result<<endl;
    }
    return 0;
}













