#include<iostream>
using namespace std;

int main () {

    int n,  max;

    if (cin >> max) {
        while (cin >> n) {
            if (max < n) {
                max = n;
            }
        }
        cout << max << endl;;
    } else {
        cout << "No number was entered" << endl;
    }
    return 0;
}