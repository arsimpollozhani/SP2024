#include<iostream>
#include<cstring>
using namespace std;


int main () {

    char text[100];
    int start;
    int length;

    cin >> start >> length;
    cin.ignore(); // always after reading int
    cin.getline (text, 100);

    // for (int i = start; i < start+length && i < strlen(text); i++) {
    //     cout << text[i];
    // }

    char result[100];
    strncpy(result, text + start, length);
    cout << result;

    return 0;
}