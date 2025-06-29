//Created: task_11.cpp
#include <iostream>
using namespace std;

// Function to check if a number is a "цик-цак" number
bool isZigZag(int number) {
    int prevDigit = number % 10; // Get the last digit
    number /= 10;                // Remove the last digit

    while (number > 0) {
        int currentDigit = number % 10; // Get the next digit

        // Check if the pair alternates between <5 and >=5
        if (!((currentDigit < 5 && prevDigit >= 5) || (currentDigit >= 5 && prevDigit < 5))) {
            return false;
        }

        prevDigit = currentDigit; // Update previous digit
        number /= 10;             // Remove the last digit
    }

    return true;
}

int main() {
    
    while (true) {
        int number;
        if (!(cin >> number)) {
            break; // Stop input on non-digit
        }

        if (number < 10) {
            continue; // Ignore numbers less than 10
        }

        if (isZigZag(number)) {
            cout << number << endl; // Print "цик-цак" numbers
        }
    }

    return 0;
}
