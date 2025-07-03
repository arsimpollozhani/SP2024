#include<iostream>

using namespace std;

int main () {
    int points;
    cin >> points;
    int grade = 0;

    if (points <= 50) {
        grade = 5;
    } else if (points <= 60) {
        grade = 6;
    } else if (points <= 70) {
        grade = 7;
    } else if (points <= 80) {
        grade = 8;
    } else if (points <= 90) {
        grade = 9;
    } else if (grade <= 100){
        grade = 10;
    }

    int extractLastDigit = points % 10;
    char sign = ' ';
    if (grade != 5) {
        if (extractLastDigit >= 1 && extractLastDigit <= 3) {
            sign = '-';
        } else if (grade != 10 && (extractLastDigit >= 8 || extractLastDigit == 0)) {
            sign = '+';
        } 
    }

    cout << grade << sign;

    return 0;
}