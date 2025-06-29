#include<iostream>
#include<cstring>
using namespace std;



int main () {

    char text[100];
    cin.getline (text, 100);

    int j = 0;
    for (int i = 0; i<strlen(text); i++) {
        if (isalpha(text[i])) {
            if (islower(text[i])) {
                text[j++] = toupper(text[i]);
            } else {
                text[j++] = tolower(text[i]);
            }
        }
    }
    text[j] = '\0';

    cout << text << endl;

    return 0;
}