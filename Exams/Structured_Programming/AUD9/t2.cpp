#include<iostream>
using namespace std;

void countDown (int n) {
    if (n == 0) {
        return;
    }
    cout << n << endl;
    countDown (n-1);
}

void countUp (int n) {
    if (n == 0) {
        return;
    }

    countUp (n-1);
    cout << n << endl;
}

int main () {

    countDown (5);
    cout << "---" << endl;
    countUp (5);
    return 0;
}