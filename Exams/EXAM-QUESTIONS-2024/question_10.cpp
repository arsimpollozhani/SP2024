//Created: question_10.cpp

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
            for(int j = i; isVowel(tolower(str[j])); j++) {
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
}