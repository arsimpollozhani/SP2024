//Created: question_6.cpp
#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome (char * str) {
    int len = strlen(str);
    
    for (int i = 0; i <= len / 2; i++) {
        if (str[i] != str[len-1-i]) {
            return false;
        }
    }
    return true;
}


int main() {
    
    char bestResult [81] = "";
    int bestLen = 81;
    
    int n;
    cin >> n;
    cin.ignore();
    
    bool found = false;
    
    for (int i = 0; i < n; i++) {
        char str[81];
        cin.getline(str,80);
        
        if (!isPalindrome(str)) {
            int len = strlen(str);
            
            if (len < bestLen) {
                strcpy(bestResult, str);
                bestLen = len;
                found = true;
            } else if (len == bestLen && strcmp (str, bestResult) > 0){
                strcpy(bestResult, str);
            }
        }    
        
    }
    
    if (found) {
        cout << bestResult << endl;
    } else {
        cout << "NEMA" << endl;
    }
    
    return 0;
}