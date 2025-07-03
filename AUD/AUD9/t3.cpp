#include<iostream>
using namespace std;

bool isPrime (int number, int possibleDivisor) { //divisor starts at n/2 -< 1
    if (possibleDivisor == 1) { //when reached 1 the number is prime...
        return true;
    }

    if (number%possibleDivisor == 0) {
        return false;
    }

    return isPrime (number, possibleDivisor-1);
}

int firstPrimeAfter (int number) {
    if (isPrime (number, number/2)) { //think what it takes to stop the algorithm (finding the prime!!)
        return number;
    } else {
        return firstPrimeAfter (number+1); //go to the next number
    }
}

int main () {
    int n;
    cin >> n;
    // cout << isPrime (n, n/2);

    int result = firstPrimeAfter (n);

    cout << result << " - " << n << " = " << result-n << endl;

    return 0;
}