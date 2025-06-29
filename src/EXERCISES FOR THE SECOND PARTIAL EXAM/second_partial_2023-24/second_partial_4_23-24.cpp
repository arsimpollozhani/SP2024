/*
#include <iostream>
#include <cstring>
using namespace std;


int countConsecutiveOccurrences(char *big, char *small) {
    int maxCount = 0;
    int currentCount = 0;
    int len = strlen(small);

    while(*big) {
        if(strncmp(big, small, len) == 0) {
            currentCount++;
            big += len;
        } else {
            if(currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount = 0;
            big++;
        }
    }
    if(currentCount > maxCount) {
        maxCount = currentCount;
    }
    return maxCount;
}

int main() {
    int n;
    char startString[51];
    cin.getline(startString, 51);
    cin >> n;
    cin.ignore();

    int counter[100] = {0};
    int maxResult = 0;
    for(int i = 0; i < n; i++) {
        char sentence[151];
        cin.getline(sentence, 150);
        int result = countConsecutiveOccurrences(sentence, startString);
        counter[result]++;
        if(result > maxResult) {
            maxResult = result;
        }
    }

    for(int i = 0; i <= maxResult; i++) {
        cout << i <<": "<<counter[i]<< endl;
    }

    return 0;
}
*/


#include<iostream>
#include <cstring>
using namespace std;

int countConsecutive(char *big, char *small) {
    int maxCount = 0;
    int currentCount = 0;
    int len = strlen(small);

    while(*big) {
        if(strncmp(big, small, len) == 0) {
            currentCount++;
            big += len;
        } else {
            if(currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount = 0;
            big++;
        }
    }
    if(currentCount > maxCount) {
        maxCount = currentCount;
    }
    return maxCount;
}

void test() {
    char str1[] = "2024";
    char str2[] = "20242024ada202420242024";
    cout << countConsecutive(str2,str1);
}

int main() {
    char start[21];
    int maxResult = 0;
    cin.getline(start, 21);
    int n;
    cin >> n;
    cin.ignore();
    int counter[100] = {0};
    for (int i = 0; i < n; i++) {
        char str[151];
        cin.getline(str, 151);
        int result = countConsecutive(str,start);
        counter[result]++;
        if(maxResult < result) {
            maxResult = result;
        }
    }

    for(int i = 0; i <= maxResult; i++) {
        cout << i << ": " << counter[i] << endl;
    }

    return 0;
}
