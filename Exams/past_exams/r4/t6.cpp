#include<iostream>
#include<cstring>
using namespace std;

char encryptLetter (char letter, int X) {

    char startingLetter;
    if (islower(letter)) {
        startingLetter = 'a';
    } else {
        startingLetter = 'A';
    }

    int position = letter - startingLetter; //ASCI
    int newPosition = (position + X) % 26; // for cyclic
    char encrypted = char (startingLetter + newPosition);
    return encrypted;
}

void transform (char * line, int X) {
    if (*line == '\0') {
        return;
    } else {
        if (isalpha(*line)) {
            *line = encryptLetter (*line, X);
        }

        return transform(line+1, X);
        
    }
}

int main () {

    int n, X;
    cin >> n;
    cin >> X;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        char line[80];
        cin.getline(line, 80);

        transform(line, X);

        cout << line << endl;
    }

    return 0;
}