#include<iostream>
using namespace std;

int lastDigit (int n) {
    return n % 10;
}

int countDigits (int n) {
    int count = 0;
    for (int i = n; i > 0; i/=10) {
        ++count;
    }
    return count;
}

int firstDigitOther (int n) {
    int count = countDigits (n);
    int r = 1;
    for (int i = 1; i < count; i++)
    {
        r*=10;
    }
    return n / r;
}

int firstDigit (int n) {
    while (n >= 10) {
        n/=10;
    }
    return n;
}

int sumFirstLast (int n) {
    return firstDigit(n) + lastDigit(n);
}

int reverse (int n) {
    int rev = 0;
    n = n/10;
    while (n>=10) { //reverse until the first digit
        int digit = n % 10;
        rev = 10*rev+digit;
        n/=10;
    }
    return rev;
}


void test () {
    cout << countDigits (12345) << endl;
    cout << firstDigit (54321) << endl;
}

int main () {
    int a, b;
    cin >> a >> b;
    // test ();

    int count = 0;

    for (int i = a; i <= b; i++) {

        int reversed = reverse(i);
        int firstLastSum = sumFirstLast (i);
        int first = firstDigit(i);
        int last = lastDigit (i);

        
        if (reversed == 0) {
                continue;
        } 

        if (reversed % firstLastSum == 0) {
            cout << i << " (" << reversed << " == (" << last << " + " << first << ") * " << reversed/firstLastSum << ")" << endl;
            ++count;
        } 
    }
    cout << "Total: " <<  count << endl;
    return 0;
}