//Created: question_9.cpp
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

int main() {
    char str[100];
    cin.getline(str, 100);
    char result = findPunctuation(str);
    if(result == '\0') {
        cout << "Nema";
    } else {
        cout << result;
    }
}