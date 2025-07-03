#include<iostream>
using namespace std;


int main (){
    char character;
    cin >> character;

    if (character >= 'a' && character <= 'z') {
        cout << 1;
    } else if (character >= 'A' && character <= 'Z') {
        cout << 0;
    } else if (character >= '0' && character <= '9') {
        cout << "Digit" << endl;
    }

    return 0;
}