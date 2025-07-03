#include<iostream>
#include<cstring>
using namespace std;


int main () {

    char text [100];
    cin.getline (text, 100);

    cout << "[" << text << "]" << endl;

    char * ptr = text;

    int i;
    for (i = 0; i < strlen(text); i++) {
        if (!isspace (text[i])) {
            break;
        }
    }

    ptr = text + i;

    for (i = strlen(ptr) - 1 ; i>0 ; i--) {
        if (!isspace(ptr[i])) {
            break;
        }
    }

    ptr[i+1] = '\0';

    cout << "[" << ptr << "]" << endl;
    

    return 0;
}