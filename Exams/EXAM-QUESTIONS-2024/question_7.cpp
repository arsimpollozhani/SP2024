//Created: question_7.cpp

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
        || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O'|| ch == 'U');
}


int countConsonantOccurrence(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0';) {
        if(isalpha(str[i]) && isalpha(str[i + 1])) {
            if(!isVowel(str[i]) && !isVowel(str[i + 1])) {
                count++;
                i+=2;
            } else {
                i++;
            }
        } else {
            i++;
        }
    }
    return count;
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