#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int array[100], frequency[10] = {0}, firstOccurrence[10], n;

    // Initialize the firstOccurrence array to a large value
    for (int i = 0; i < 10; i++) {
        firstOccurrence[i] = 100; // Any value larger than the array size (n <= 100)
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        frequency[array[i]]++;
        if (firstOccurrence[array[i]] == 100) {
            firstOccurrence[array[i]] = i;
        }
    }

    // Find the two most frequent digits
    int firstDigit = -1, secondDigit = -1;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            if (firstDigit == -1 || frequency[i] > frequency[firstDigit] ||
                (frequency[i] == frequency[firstDigit] && firstOccurrence[i] < firstOccurrence[firstDigit])) {
                secondDigit = firstDigit;
                firstDigit = i;
                } else if (secondDigit == -1 || frequency[i] > frequency[secondDigit] ||
                           (frequency[i] == frequency[secondDigit] && firstOccurrence[i] < firstOccurrence[secondDigit])) {
                    secondDigit = i;
                           }
        }
    }

    // Ensure correct order for printing
    if (firstDigit > secondDigit) swap(firstDigit, secondDigit);
    //cout << firstDigit << " " << secondDigit << endl;

    int A = min(firstDigit, secondDigit);
    int B = max(firstDigit, secondDigit);

    for(int i = 0 ; i <A; i++) {
        for(int j = 0 ; j < B; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
