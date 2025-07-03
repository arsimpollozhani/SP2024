#include<iostream>

using namespace std;

int firstTwoDigits (int number) {
    return number / 100;
}

int lastTwoDigits (int number) {
    return number % 100;
}

int sum (int number) {
    return firstTwoDigits(number) + lastTwoDigits (number);
}

bool condition (int number) {
    return number % sum(number) == 0;
}

int main () {
    int counter = 0;

    for (int i = 1'000; i < 10'000; i++) {

        if (condition(i)) {
            ++counter;
            cout << i << " is divisible with " << firstTwoDigits(i) << " + " << lastTwoDigits(i) << endl;
        }

    }
    cout << "Total: " << counter << endl;

    return 0;
}


