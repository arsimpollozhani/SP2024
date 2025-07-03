#include <iostream>
#include <climits>
using namespace std;

int par(int a[], int n) {
    int count[5001] = {0};  // Fixed size array with a larger range

    // Count the frequency of each element in the array
    for (int i = 0; i < n; i++) {
        count[a[i]]++;
    }

    int minElement = INT_MAX;  // Use INT_MAX to denote the largest possible integer

    // Find the smallest element that appears an even number of times
    for (int i = 1; i < 5001; i++) {
        if (count[i] > 0 && count[i] % 2 == 0) {
            if (i < minElement) {
                minElement = i;
            }
        }
    }

    // If no such element is found, return 0
    if (minElement == INT_MAX) {
        return 0;
    }

    return minElement;  // Return the smallest element that appears an even number of times
}

int main() {
    int n;
    cin >> n;  // Read the number of elements

    if (n <= 0 || n > 100) {  // Validate the input size
        cout << "Invalid input size!" << endl;
        return 1;
    }

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];  // Read the elements of the array
        if (a[i] <= 0 || a[i] > 5000) {  // Validate the element range
            cout << "Nitu eden element ne se pojavuva paren broj pati!" << endl;
            return 1;  // Exit the program if the condition is met
        }
    }

    int result = par(a, n);  // Call the `par` function and store the result

    // Print the result based on the value returned by `par`
    if (result == 0) {
        cout << "Nitu eden element ne se pojavuva paren broj pati!" << endl;
    } else {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << result << endl;
    }

    return 0;
}
