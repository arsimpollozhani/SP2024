//
// Created by win11pro on 12/16/2024.
//
/*#include<iostream>
using namespace std;

int firstDigit(int number) {
    while (number >= 10) {
        number /= 10;
    }
    return number;
}

int lastDigit(int number) {
    return number % 10;
}

int main() {

    // cout << firstDigit(123456) << endl;
    // cout << lastDigit(123456) << endl;
    int array[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    bool hasTheseElements = false;
    for(int i = 0; i < n; i++) {
        if((firstDigit(array[i])%2 == 1) && (lastDigit(array[i])%2==0)) {
            cout << array[i] << endl;
            hasTheseElements = true;
        }
    }
    if(!hasTheseElements) {
        cout << "No such elements!";
    }
    return 0;
}*/


/*#include<iostream>
using namespace std;

int firstDigit(int number) {
    while (number >= 10) {
        number /= 10;
    }
    return number;
}

int lastDigit(int number) {
    return number % 10;
}

bool checkCriteria(int number) {
    return (firstDigit(number) % 2 == 1) && (lastDigit(number) % 2 == 0);
}


int main() {

    // cout << firstDigit(123456) << endl;
    // cout << lastDigit(123456) << endl;
    int array[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    bool hasTheseElements = false;
    for(int i = 0; i < n; i++) {
        if(checkCriteria(array[i])) {
            cout << array[i] << endl;
            hasTheseElements = true;
        }
    }
    if(!hasTheseElements) {
        cout << "No such elements!";
    }
    return 0;
}*/

//RECURSIVELY
#include<iostream>
using namespace std;

int firstDigit(int number) {
    while (number >= 10) {
        number /= 10;
    }
    return number;
}

int lastDigit(int number) {
    return number % 10;
}

bool checkCriteria(int number) {
    return (firstDigit(number) % 2 == 1) && (lastDigit(number) % 2 == 0);
}

void printMatchingElements(int array[], int n, int index = 0, bool meetCondition = false) {
    if(index == n) {
        if(!meetCondition) {
            cout << "No such elements!";
        }
        return;
    }
    if(checkCriteria(array[index])) {
        cout << array[index] << endl;
        meetCondition = true;
    }
    printMatchingElements(array, n, index + 1, meetCondition);
}


int main() {

    // cout << firstDigit(123456) << endl;
    // cout << lastDigit(123456) << endl;
    int array[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    printMatchingElements(array, n);
    return 0;
}