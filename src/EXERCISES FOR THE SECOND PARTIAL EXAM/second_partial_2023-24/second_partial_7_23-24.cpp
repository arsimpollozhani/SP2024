/*//
// Created by win11pro on 1/6/2025.
//
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
        || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O'|| ch == 'U');
}


int countConsonantOccurrence(char *str) {
    int occurs = 0;
    for(int i = 0; str[i] != '\0';) {
        int counter = 0;
        if(isVowel(str[i])) {
            for(int j = i; tolower(isVowel(str[i])); j++) {
                counter++;
            }
            if(counter > 1) {
                occurs++;
            }
            i += counter;
        } else {
            i++;
        }
    }
    return occurs;
}

void test() {
    char str[100];
    cin.getline(str, 100);
    cout << countConsonantOccurrence(str) << endl;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    int maxRes = 0;
    int counter[100] = {0};
    for (int i = 0; i < n; i++) {
        char str[100];
        cin.getline(str, 100);

        int result = countConsonantOccurrence(str);
        counter[result]++;
        if(maxRes < result) {
            maxRes = result;
        }
    }

    for (int i = 0; i <= maxRes; i++) {
        cout << i << ": " << counter[i] << endl;
    }
    //test();
    return 0;
}*/


#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

bool isVowel(char c) {
    char vowels[11] = "AEIOUaeiou";
    for (int i = 0; i < 11; i++) {
        if (c == vowels[i]) {
            return true;
        }
    }
    return false;
}

int vowelOccurrences(char *str) {
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len;) {
        if(isalpha(str[i]) && isalpha(str[i + 1])) {
            if(!isVowel(str[i]) && !isVowel(str[i + 1])) {
                count++;
                i+=2;
            }else {
                ++i;
            }
        }else {
            i++;
        }
    }
    return count;
}

void test() {
    char str[] = "Uste edna nova godina ni dojde.";
    cout << vowelOccurrences(str);
}

int main() {
    int n, maxResult = 0;
    int counter[100] = {0};
    cin >> n;
    for(int i = 0; i < n; i++) {
        char str[101];
        cin.getline(str, 101);
        int result = vowelOccurrences(str);
        counter[result]++;
        if(result > maxResult) {
            maxResult = result;
        }
    }

    for(int i = 0; i <= maxResult; i++) {
        cout << i << ": " << counter[i] << endl;
    }
    //test();
    return 0;
}