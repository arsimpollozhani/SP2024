#include<iostream>
#include<cstring>
using namespace std;
       //j     i=j
//A_man_a12plan123456lkkfe

int longestDigitSubarrayLength (char * line) {
    int maxLen = 0;
    for (int i = 0; i < strlen(line); i++) {
        if (isdigit(line[i])) {
            int counter = 0;
            for (int j=i; j<strlen(line); j++) {
                if (!isdigit(line[j])) {
                    i = j; //update i (skip already checked digits)
                    break;
                }
                ++counter;
            }
            if (counter > maxLen) {
                maxLen = counter;
            }
        }
    }
    return maxLen;
}

int main () {
    char line[80];

    int n;
    cin >> n;
    cin.ignore();

    int maxLength = 0;
    int counter = 1;
    int maxLine = 0;

    for (int i=0; i<n; i++) {
        cin.getline(line, 80);
        if (line[0] == '#') {
            break;
        }

        int result = longestDigitSubarrayLength(line);

        if (result>maxLength) {
            maxLength = result;
            maxLine = counter;
        }

        counter++; //next line
    }

    if (maxLine > 0) {
        cout << maxLine << endl;
    } else {
        cout << "Ther are no such lines" << endl;
    }

    return 0;
}