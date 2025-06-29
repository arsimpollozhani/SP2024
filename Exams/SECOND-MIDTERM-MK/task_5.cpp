//Created: task_5.cpp
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main() {
    int deposit;
    cin >> deposit;
    char maxCode[10];
    int maxType = 0;
    double maxCoefficient = 0;
    double totalCoefficient = 1.0;

    while (true) {
        char code[10];
        int type;
        double coefficient;

        cin >> code;
        if (strcmp(code, "#") == 0) break;

        cin >> type >> coefficient;
        totalCoefficient *= coefficient;

        if (coefficient > maxCoefficient) {
            maxCoefficient = coefficient;
            strcpy(maxCode, code);
            maxType = type;
        }
    }


    double possibleWinnings = (deposit * totalCoefficient);

    cout << maxCode << " " << maxType << " "  << (maxCoefficient) << endl;
    cout << possibleWinnings << endl;
    return 0;
}
