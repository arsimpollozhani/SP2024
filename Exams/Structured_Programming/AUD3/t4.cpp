#include<iostream>
using namespace std;


int main () {
    int dogAge;
    cin >> dogAge;

    if (dogAge < 0) {
        cout << "Age must be a positive number" << endl;
    } else {
        float humanYears = 2 * 10.5; // first two years
        humanYears += (2 * 10.5) + (dogAge - 2) * 4;
    }
    return 0;
}