/*#include<iostream>
#include<cstring>
#include<iostream>

using namespace std;

int occurrsR(char *big, char *small) {
    char *result = strstr(big,small);
    if(result == nullptr) {
        return 0;
    } else {
        return 1 + occurrsR(result+1,small );
    }
}

int occurrsF(char *big, char *small) {
    int counter = 0;
    for(int i =0; i < strlen(big); i++) {
        if(strncmp(small,big+i, strlen(small)) == 0) {
            counter++;
        }
    }
    return counter;
}

int main() {
    char start[50];
    cin.getline(start, 50);
    int n;
    cin >> n;
    cin.ignore();

    int maxResult = 0;
    int counter[100]={0};
    for (int i = 0; i < n; i++) {
        char line[100];
        cin.getline(line, 100);
        int result = occurrsR(line, start);

        counter[result]++;
        if(result > maxResult) {
            maxResult = result;
        }
    }

    for(int i = 0 ; i <= maxResult; i++) {
        cout << i << ": " << counter[i] << endl;
    }
    return 0;
}*/



#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void toLower(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int occurrs(char *big, char *small) {
    //toLower(small);
    //toLower(big);
    char *result = strstr(big, small);
    if (result == nullptr) {
        return 0;
    } else {
        return 1 + occurrs(result + 1, small);
    }
}

void test() {
    char small[] = "hello";
    char big[] = "hellodehello";
    cout << occurrs(big, small) << endl;
}

int main() {
    char start[51];
    int counter[100] = {0};
    cin.getline(start, 51);
    int n, maxRes = 0;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        char str[101];
        cin.getline(str, 101);
        int result = occurrs(str, start);
        counter[result]++;
        if(result > maxRes) {
            maxRes = result;
        }
    }

    for(int i = 0; i <= maxRes; i++) {
        cout << i << ": " <<counter[i] << endl;
    }
    return 0;
}



















