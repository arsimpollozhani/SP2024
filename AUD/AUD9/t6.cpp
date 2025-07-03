#include<iostream>
using namespace std;

int countEights (int n) {
    if (n == 0) {
        return 0;
    } else {
        int ld = n%10;
        int sld = n/10%10;

        if (ld == 8) {
            if (sld == 8) {
                return 2 + countEights(n/10);
            } else {
                return 1 + countEights(n/10);
            }
        } else {
            countEights(n/10); //go to the next digit
        }
    }
}


int main () {

    cout << countEights (88112818);

    return 0;
}