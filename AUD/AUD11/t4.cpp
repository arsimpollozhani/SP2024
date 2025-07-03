#include<iostream>
#include<cstring>
using namespace std;


void toLowerCase (char * str) {
    for (int i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]);
    }
}

bool substr (char * large, char * small) {
    toLowerCase (large);
    toLowerCase (small);
    return strstr (large, small) != nullptr;
}

int ocurrs (char * large, char * small) {
    toLowerCase (large);
    toLowerCase (small);
    char * result = strstr (large, small);
    if (result == nullptr) {
        return 0;
    } else {
        return 1 + ocurrs(result+1, small);
    }
}


int main () {
    char large [200];
    char small [100];

    cin.getline(large, 200);
    cin.getline(small, 100);

    cout << substr(large, small) << endl;
    cout << ocurrs(large, small) << endl;

    return 0;
}