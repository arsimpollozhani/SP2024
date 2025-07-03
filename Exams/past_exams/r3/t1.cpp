#include<iostream>
using namespace std;


bool firstDigit (int number) {
    while (number >= 10) {
        number/=10;
    }
    return number % 2 == 1;
}

bool lastDigit (int number) {
    return (number%10) %2 == 0;
}

bool conditionF (int number) {
    return firstDigit(number) && lastDigit(number);
}

int conditionRecursive (int number, int lastDigit) {
    if (lastDigit == -1) {
        lastDigit = number % 10;
    }

    if (number<10) {
        return number%2==1 && lastDigit%2==1;
    } else {
        return conditionRecursive (number/10, lastDigit);
    }
}

int main () {

    int n;
    cin >> n;

    int array[100];

    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];

        // conditionRecursive(array[i], -1);
        if (conditionF(array[i])) {
            cout << array[i] << endl;
            ++counter;
        }
    }

    if (counter == 0) {
        cout << "No such elements!" << endl;
    }
    
    return 0;
}