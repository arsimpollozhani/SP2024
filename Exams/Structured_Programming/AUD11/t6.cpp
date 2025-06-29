#include<iostream>
#include<cstring>
using namespace std;

bool validPassword (char * str) {
    int len = strlen (str);
    int letters = 0;
    int digits = 0;
    int specials = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(str[i])) letters++;
        else if (isdigit(str[i])) digits++;
        else specials++;
    }

    return digits != 0 && specials!=0 && digits != 0;
    
}

int main () {

    char password[100];
    cin.getline (password, 100);

    cout << validPassword (password);

    return 0;
}