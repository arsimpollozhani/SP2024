#include<iostream>
using namespace std;

void printCharacters(char c, bool backwards) {
    //Base case:
    if(!((c>='a' && c <= 'z') || (c>='A' && c <= 'Z'))) {
        return;
    }
    cout << c; //print the current character

    if(!backwards) {
        printCharacters(c-1, backwards);
    } else {
        printCharacters(c+1, backwards);
    }
}
int main() {
    char c;
    bool backwards;
    cin >> c;
    cin >> backwards;
    printCharacters(c, backwards);
    return 0;
}