//
// Created by win11pro on 11/10/2024.
//

/*4.1. Exercise 1
Write appropriate functions for calculating a diameter, perimeter,
and square of a circle whose radius is entered as an argument. Then
write a program in which these functions will be called for R
(entered from the keyboard) to calculate the diameter, perimeter,
and surface of the corresponding circle.*/

/*#include<iostream>
#include <math.h>

using namespace std;

float diameter(float radius) {
    return 2 * radius;
}
float area(float radius) {
    return M_PI * radius * radius;
}

float perimeter(float radius) {
    return 2+M_PI * radius;
}
int main() {
    float radius;
    cin >> radius;
    cout << "Diameter : " << diameter(radius) << endl;
    cout << "Area : " << area(radius) << endl;
    cout << "Perimeter : " << perimeter(radius) << endl;
    return 0;
}*/


/*4.2. Exercise 2
Write a program that will print all four-digit natural numbers
that are divided by the sum of the two numbers composed of the
first two digits and the last two digits of the four-digit number.
It should eventually print out how many such numbers have been
found.

Example:

    3417 is divisible with 34 + 17
    5265 is divisible with 52 + 65
    6578 is divisible with 65 + 78*/

/*
#include<iostream>
using namespace std;

int sum(int n) {
    return n%100 + n/100;
}

int main() {
    int count = 0;
    for(int i = 1000; i <= 9999; i++) {
        if(i%sum(i) == 0) {
            cout << i << endl;
            count++;
        }
    }
    cout << "Total: " << count << endl;
    return 0;
}
*/



/*#include<iostream>
using namespace std;
int firstTwo(int number) {
    return number / 100;
}
int lastTwo(int number) {
    return number % 100;
}

int sum(int number) {
    int sum = 0;
    sum = firstTwo(number) + lastTwo(number);
    return sum;
}

int main() {
    int count = 0;
    for(int i = 1000; i <= 9999; i++) {
        if(i % sum(i) == 0) {
            cout << i << endl;
            count++;
        }
    }
    cout << "Count: " <<count << endl;
    return 0;
}*/


/*4.3. Exercise 3
Write a program that calculates for a given natural number the
difference between the nearest prime number and that number itself.

Example: For input of 573, The program should output 577 – 573 = 4*/


/*#include<iostream>
#include <math.h>
#include <valarray>
using namespace std;
bool isPrime(int number) {
    for(int divisor = 2; divisor <= sqrt(number); divisor++) {
        if(number % divisor == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int number;
    cin >> number;
    for(int i = number + 1; ; i++) {
        if(isPrime(i)) {
            int difference = i - number;
            cout << i << " - " <<number <<" = "<< difference << endl;
            break;
        }
    }
    return 0;
}
*/


/*
4.4. Exercise 4
Write a program that will print all prime numbers less than 10000,
whose sum of digits is also a prime number. At the end, print how
many such numbers are found.
*/

/*#include<iostream>
#include <math.h>
#include <valarray>
using namespace std;
bool isPrime(int number) {
    for(int divisor = 2; divisor <= sqrt(number); divisor++) {
        if(number % divisor == 0) {
            return false;
        }
    }
    return true;
}

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum = sum + number % 10;
        number = number / 10;
    }
    return sum;
}
int main() {
    /*int number;
    cin >> number;
    cout << isPrime(number) << endl;
    cout << sumOfDigits(number) << endl;#1#
    int count = 0;
    for(int i = 2; i < 10000; i++) {
        if(isPrime(i) && isPrime(sumOfDigits(i))) {
            cout << i << endl;
            count++;
        }
    }
        cout << "Count: " << count << endl;
    return 0;
}*/


/*4.5. Exercise 5
Write a program that will print all pairs of prime numbers less
than 1000 that differ between them by 2. Finally, print the number
of such pairs.*/

/*#include <cmath>
#include<iostream>
#include <math.h>
using namespace std;

bool isPrime(int number) {
    for(int divisor = 2; divisor <= sqrt(number); divisor++) {
        if(number % divisor == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    for(int i = 1; i < 1000; i++) {
        if(isPrime(i) && isPrime(i + 2)) {
            cout << i << " " <<i+2<< endl;
            count++;
        }
    }
    cout << "Count = " << count << endl;
    return 0;
}*/


/*4.6. Exercise 6
Calculate the following sum:

1! + (1 + 2)! + (1 + 2 + 3)! + ... + (1 + 2 +...+ n)!

NOTE: Use a function to calculate the sum of
the first k natural numbers. Use a factorial calculation
function to one natural number k*/

/*
#include<iostream>
using namespace std;

int sumOfNumbers(int number) {
    int sum = 0;
    for (int i = 1; i <= number; i++) {
        sum += i; // sum of numbers in range from 1 to n
    }
    return sum;
}

int factorial(int number) {
    int result = 1;
    for(int i = 1; i <= number; i++) {
        result *= i; // multiplication of number in range from 1 to n
    }
    return result;
}
int main() {
    //TEST
    int number;
    cin >> number;

    /*cout << sumOfNumbers(number) << endl;
    cout << factorial(number) << endl;#1#
    if(number>0) {
        int sum, result = 0;
        for(int i = 1; i < number; i++) {
            sum = sumOfNumbers(i);//calc first sum of 1
            result += factorial(sum);
            cout << sum << "! + ";
        }
        sum = sumOfNumbers(number);
        result += factorial(sum);
        cout << sum << "! = "<<result << endl;
    } else {
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}
*/

