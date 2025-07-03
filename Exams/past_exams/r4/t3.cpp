#include<iostream>
#include<cstring>
using namespace std;

bool isVowel (char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c=='o' || c=='u';
}


//with shifting
void clean (char * line) {
    for (int i = 0; i < strlen(line);i++){
        if (isVowel (line[i])) {
            for (int j = i; i < strlen(line); i++) {
                line[i]=line[j+1];
            }
            i--;
        }
    }
}

char * transform (char * line) {
    int len = strlen(line);

    char result[80];
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (!isVowel(line[i])) {
            result[j++] = line[i];
        }
    }
    strcpy(line, result);
    return line;
}

int main (){

    char line[80];
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cin.getline (line, 80);
        if (strcmp(line, "#") == 0) {
            break;
        }

        char * res = transform (line);
        cout << res;
    }

    

    return 0;
}