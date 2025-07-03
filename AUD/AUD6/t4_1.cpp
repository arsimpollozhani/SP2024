 #include <iostream>
using namespace std;

int reverse (int number) {
    int rev = 0;
    // while (number > 0) {
    //     int digit = number / 10;
    //     rev = rev * 10 + digit;
    //     digit /= 10;
    // }

    for (int i = number; i > 0; i/=10) {
        rev = rev * 10 + i%10;
    }

    return rev;
}

bool isPalindrome (int number) {
    return number == reverse(number);
}

int sumOfDigits (int number) {
    int sum = 0;
    for (int i = number; i > 0; i/=10) {
        sum += i%10;
    }
    return sum;
}

bool isDivisibleBySumOfDigits (int number) {
    return number % sumOfDigits(number) == 0;
}



int main() {
    int X;
    cin >> X;

    int counter;

    for (int i = X-1; i > 0; i--) {
        if (isPalindrome(i) && isDivisibleBySumOfDigits (i)) {
            cout << i << endl;
            counter++;
        }

        if (counter == 10) {
            break;
        }
    }
    return 0;
}