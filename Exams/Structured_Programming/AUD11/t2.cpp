#include<iostream>
#include<cstring>
using namespace std;

int length (char * str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    } 
    return count;
}

int lengthRec (char * str) {
    if (*str == '\0') {
        return 0;
    }
    return 1 + length(str + 1);
}

int main () {

    char str[100];
    cin.getline (str,100);

    cout << length(str) << endl;
    cout << lengthRec (str) << endl;
    return 0;
}