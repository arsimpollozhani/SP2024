#include<iostream>
using namespace std;

int main() {
    int date;
    cin >> date;

    int month = date / 10000 % 100;
    int day = date / 1'000'000;

    cout << day << "." << month << endl;
}