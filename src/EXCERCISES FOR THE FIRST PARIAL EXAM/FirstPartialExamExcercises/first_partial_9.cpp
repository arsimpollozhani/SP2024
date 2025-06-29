//
// Created by win11pro on 11/9/2024.
//

/*
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void findClosestPair(int a, int b, int c) {
    // Calculate absolute differences between each pair
    int diffAB = abs(a - b);
    int diffAC = abs(a - c);
    int diffBC = abs(b - c);

    // Find the smallest difference
    int minDiff = min(diffAB, min(diffAC, diffBC));

    // Check which pairs have this minimum difference and print accordingly
    if (diffAB == minDiff && diffAC == minDiff && diffBC == minDiff) {
        // All pairs have the same minimum difference
        int minVal = min(a, min(b, c));
        int maxVal = max(a, max(b, c));
        int midVal = a + b + c - minVal - maxVal;  // Get the middle value
        cout << minVal << " " << midVal << " " << maxVal << endl;
    }
    else if (diffAB == minDiff && diffAB < diffAC && diffAB < diffBC) {
        // Pair (a, b) has the smallest difference
        if (a < b)
            cout << a << " " << b << endl;
        else
            cout << b << " " << a << endl;
    }
    else if (diffAC == minDiff && diffAC < diffAB && diffAC < diffBC) {
        // Pair (a, c) has the smallest difference
        if (a < c)
            cout << a << " " << c << endl;
        else
            cout << c << " " << a << endl;
    }
    else if (diffBC == minDiff && diffBC < diffAB && diffBC < diffAC) {
        // Pair (b, c) has the smallest difference
        if (b < c)
            cout << b << " " << c << endl;
        else
            cout << c << " " << b << endl;
    }
    else {
        // Two pairs have the same minimum difference
        int minVal = min(a, min(b, c));
        int maxVal = max(a, max(b, c));
        int midVal = a + b + c - minVal - maxVal;
        cout << minVal << " " << midVal << " " << maxVal << endl;
    }
}

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        findClosestPair(a, b, c);
    }
    return 0;
}*/
