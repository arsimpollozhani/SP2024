#include<iostream>

using namespace std;


int main() {

    char letter;
    cin >> letter;

    char uppercase = char(letter + ('A'-'a'));
    cout << uppercase << endl;

    return 0;
}


