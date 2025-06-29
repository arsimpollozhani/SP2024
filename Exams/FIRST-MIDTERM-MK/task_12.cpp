//Created: task_12.cpp
#include<iostream>
using namespace std;

int maxDigit(int number) {
    int max = 0;
    int position = 0;
    int maxPosition = 0;
    int currentPosition = 1;
    while(number > 0) {
        int digit = number % 10;
        if(digit > max) {
            max = digit;
            maxPosition = currentPosition;
        }
        number = number / 10;
        currentPosition++;
    }
    return maxPosition;
}
int main() {
    int number ;
    int a = 0, b = 0 , c = 0, d = 0, e = 0;
    while(cin >> number) {
        int positionMax = maxDigit(number);
        switch (positionMax) {
            case 1:
                a++;
                break;
            case 2:
                b++;
                break;
            case 3:
                c++;
                break;
            case 4:
                d++;
                break;
            case 5:
                e++;
                break;
        }
    }
    cout << "0: "<<a << endl;
    cout << "1: "<<b << endl;
    cout << "2: "<<c << endl;
    cout << "3: "<<d << endl;
    cout << "4: "<<e << endl;

    return 0;
}