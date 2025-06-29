//Created: task_9.cpp
#include <iostream>

int main() {
    char hexDigit;
    int decimalSum = 0;

    while (true) {
        std::cin >> hexDigit;

        if (hexDigit == '.')
            break;

        int digitValue;

        if ('0' <= hexDigit && hexDigit <= '9')
            digitValue = hexDigit - '0';
        else if ('A' <= hexDigit && hexDigit <= 'F')
            digitValue = hexDigit - 'A' + 10;
        else if ('a' <= hexDigit && hexDigit <= 'f')
            digitValue = hexDigit - 'a' + 10;
        else
            continue; // Ignore invalid characters

        decimalSum += digitValue;
    }

    if (decimalSum % 16 == 0){
        if(decimalSum % 100 == 16){
            std::cout << "Poln pogodok";
        } else {
            std::cout << "Pogodok";
        }
    }
    else
        std::cout << decimalSum;

    return 0;
}
