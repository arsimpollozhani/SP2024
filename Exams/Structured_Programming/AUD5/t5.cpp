#include<iostream>
using namespace std;

int main () {
    int n, max1, max2; // assume max1 is the highest number

    if (cin >> max1 >> max2) {
        if (max2 > max1) {
            int temp = max1;
            max1 = max2;
            max2 = temp; 
        }

        while (cin >> n) {
            if (max1 < n) {
                max2 = max1;
                max1 = n;
            } else if (max2 < n) {
                max2 = n;
            }
        }

        cout << max1 << endl;
        cout << max2 << endl;
    } else {
        cout << "Enter at least 2 numbers." << endl;
    }
    
    return 0;
}