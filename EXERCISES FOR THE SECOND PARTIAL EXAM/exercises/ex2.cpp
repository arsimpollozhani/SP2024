//
// Created by win11pro on 1/10/2025.
//
//Sportska

#include<iostream>
#include <string.h>
using namespace std;


int main() {
    int totalSum;
    cin >> totalSum;

    char maxCifra[10];
    int maxTip =0;
    double totalCoefficient = 1.0;
    double maxCoefficient = 0;

    while(1) {
        char tipCifra[10];
        int tip;
        float coefficient;
        cin >> tipCifra ;
        if(strcmp(tipCifra, "#") == 0) {
            break;
        }
        cin >> tip >> coefficient;
        totalCoefficient *= coefficient;

        if(coefficient > maxCoefficient) {
            maxCoefficient = coefficient;
            strcpy(maxCifra, tipCifra);
            maxTip = tip;
        }
    }
    double possibleWinnings = (totalSum * totalCoefficient);
    cout << maxCifra << " " << maxTip << " " << maxCoefficient << endl;
    cout << possibleWinnings << endl;
    return 0;
}