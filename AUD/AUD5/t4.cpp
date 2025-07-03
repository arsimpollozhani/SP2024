#include<iostream>
using namespace std;

int main () {

    int max , n;
    if (cin >> max) {
        while (cin >> n) {
            if (n > 100) continue;

            if (max < n) {
                max = n;
            }
        }

        cout << max << endl;
    } else {
        cout << "No number was enetered." << endl;
    }

    return 0;
}