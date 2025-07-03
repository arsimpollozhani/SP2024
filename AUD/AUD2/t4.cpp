#include<iostream>
using namespace std;


int main() {
    int number;

    cin >> number;

    int lsd = number % 10;

    int msd = number / 100;

    cout << "Least significant digit: " << lsd << endl;
    cout << "Most significat digit: " << msd << endl;

    return 0;
}