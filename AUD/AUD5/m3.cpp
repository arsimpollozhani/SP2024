#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;


    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        int temp = number;

        int ld = temp % 10;
        int sld = temp/10%10;

        bool isGood = true;

        while (temp > 9) {
            if (ld >= sld) {
            isGood = false;
            break;
            }

            temp /= 10;
        }

        if (isGood) {
            cout << number << endl;
        }
    }
    
    return 0;
}