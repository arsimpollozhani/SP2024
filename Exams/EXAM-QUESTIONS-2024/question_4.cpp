//Created: question_4.cpp
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