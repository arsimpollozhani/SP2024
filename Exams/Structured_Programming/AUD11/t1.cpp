#include<iostream>
#include<cstring>
using namespace std;

int ocurrs (char * str, char c) {
    int counter = 0;
    while (*str != '\0') {
        if (*str == c) {
            ++counter;
        }
        str++;
    }
    return counter;
}

int ocurrsF (char *str, char c) {
    int len = strlen (str);
    int count = 0;
    for (int i = 0; i < len; i++){
        if (str[i] == c){
            count++;
        }
    }
    return count;
}

int ocurrsR (char *str, char c) {
    if (*str == '\0') {
        return 0;
    } else {
        if (*str == c) {
            return 1 + ocurrsR(str + 1, c);
        } else {
            return ocurrsR (str + 1, c);
        }
    }
}

int main () {

    char str[100];
    cin.getline (str, 100);
    char c;
    cin >> c;
    int n = ocurrs(str , c);
    int n1 = ocurrsF(str , c);
    int n2 = ocurrsR(str , c);
    cout << n << endl;
    cout << n1 << endl;
    cout << n2 << endl;
    return 0;
}