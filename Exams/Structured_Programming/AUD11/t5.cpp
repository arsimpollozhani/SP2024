#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome (char * str) {
    int len = strlen(str);
    for (int i = 0; i <= len/2; i++){
        if (str[i] != str[len-i-1]) {
            return false;
        }
    }
    return true;
}

bool isPalindromeRec (char * str, int start, int end) {
    if (start >= end) {
        return true;
    } else {
        if (tolower(str[start]) != tolower(str[end])) {
            return false;
        } else {
            return isPalindromeRec (str, start + 1, end - 1);
        }
    }
}

bool isPalindromeSentenceRec (char * str, int start, int end) {
    if (start >= end) {
        return true;
    } else {
        if (!isalpha(str[start])) { //ignore whitespaces
            return isPalindromeSentenceRec (str, start+1, end);
        }

        if (!isalpha(str[end])) {
            return isPalindromeSentenceRec (str, start, end-1);
        }

        if (tolower(str[start]) != tolower(str[end])) {
            return false;
        } else {
            return isPalindromeSentenceRec (str, start+1, end-1);
        }
    }
}

int main () {

    char text[100];
    cin.getline (text, 100);

    // cout << isPalindrome (text) << endl;
    // cout << isPalindromeRec (text, 0, strlen(text)-1) << endl;
    cout << isPalindromeSentenceRec (text, 0, strlen(text)-1) << endl;

    return 0;
}