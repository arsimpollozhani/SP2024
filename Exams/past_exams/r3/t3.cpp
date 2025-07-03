#include<iostream>
#include<cstring>
using namespace std;

int formDigit (char * line) {

    int sum = 0;
    int currentNumber = 0;


    int len = strlen(line);
    for (int i = 0; i < len; i++) {
        if (isdigit(line[i])) {
            currentNumber = 10*currentNumber + (line[i]-'0');
        } else {
            sum += currentNumber;
            currentNumber = 0;
        }
    }

    return sum;
    
}

void transform (char * line) {
    int j =0;  
    int len =  strlen(line);

    char result[80];

    for (int i = 0; i < len; i++) {
        if (!isdigit(line[i])) {
            result[j++] = line[i];
        }
    }
    result[j] = '\0';
    strcpy(line, result);

}

int main () {


    char line [80];
    cin.getline (line, 80);

    int sum = formDigit (line);
    transform(line);

    cout << line << sum;

    return 0;
}