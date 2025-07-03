#include<iostream>
using namespace std;

int main () {

    int previous, next;
    cin >> previous >> next;
    int maxSum = previous + next;


    int sum = 0;
    int position = 2;
    int currentPosition = 2;

    while (true) {
        if (previous < 0 && next < 0) {
            break;
        }

        sum = previous + next;
        if (sum > maxSum) {
            maxSum = sum;
            currentPosition = position;
        }

        previous = next;
        cin >> next;
        position++;
    }

    if (position > 2) {
        cout << "The numbers are at position " << currentPosition - 1 << " and " << currentPosition << endl;
        cout << "The max sum is: " << maxSum << endl;
    }
    return 0;
}