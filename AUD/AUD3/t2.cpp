#include<iostream>

using namespace std;

int main () {
    int x, y;

    cin >> x >> y;

    if (x > 0) {
        if (y > 0) {
            cout << 1 ;
        } else if (y < 0) {
            cout << 4;
        } else {
            cout << "Positive X" << endl;
        }
    } else if (x < 0) {
        if (y > 0) {
            cout << 2;
        } else if (y < 0) {
            cout << 3;
        } else {
            cout << "Negative X" << endl;
        }
    } else { //x==0
        if (y > 0) {
            cout << "Positive Y" << endl;
        } else if (y < 0) {
            cout << "Negative Y" << endl;
        } else {
            cout <<"Origin"<<endl;
        }
    }
    return 0;
}