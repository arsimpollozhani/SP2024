#include<iostream>
using namespace std;

int main () {

    int n;
    cin >> n;
    
    int sumEven, sumOdd;

    sumEven = sumOdd = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        if (i % 2 == 0) {
            sumEven += number;
        } else {
            sumOdd += number;
        }
    }

    if (abs(sumEven - sumOdd) < 10) {
        cout << "The two sums are similar" << endl;
    } else {
        cout << "The two sums differ greatly" << endl;
    }
    


    
    return 0;
}