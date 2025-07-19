//
// Created by win11pro on 11/4/2024.
//

//********************************************
//QUESTION 4
//********************************************

/* From SI read N pairs of integers, where the first number is the
 * students points, and the second is the max. points.
 * Write a program where for each pair (points, maxPoints) will print
 * the students succes in percentage and his grade following this rules:
 * 1. if student has 90% or more - 10
 * 2. has 80% or more - 9
 * 3. has 70% or more - 8
 * 4. has 60% or more - 7
 * 5. has 50% or more - 6
 * 6. has less than 50% print "FAIL"
 */


#include<iostream>
using namespace std;

int main() {
    float points, maxPoints, N, grade = 0;
    float percentage;
    string fail;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> points;
        cin >> maxPoints;
        percentage = (points / maxPoints) * 100;
        if (percentage < 50) {
            cout << percentage << " FAIL" << endl;
        } else if (percentage < 60) {
            grade = 6;
            cout << percentage << " " << grade << endl;
        } else if (percentage < 70) {
            grade = 7;
            cout << percentage << " " << grade << endl;
        } else if (percentage < 80) {
            grade = 8;
            cout << percentage << " " << grade << endl;
        } else if (percentage < 90) {
            grade = 9;
            cout << percentage << " " << grade << endl;
        } else if (percentage < 100) {
            grade = 10;
            cout << percentage << " " << grade << endl;
        }
    }

    return 0;
}


//6
/*
#include<iostream>


using namespace std;


int reverseNumber(int number) {
    int reverse = 0;

    while(number > 0) {
        int digit = number % 10;
        reverse = 10 * reverse + digit;
        number = number / 10;
    }
    return reverse;
}

int countDigits(int number) {
    int count = 0;
    while (number > 0) {
        number = number / 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    cin >> number;
    if (number < 9) {
        cout << "The number is invalid";
        return 0;
    }
    for(int i = number - 1 ; i >= 9; --i) {
        int reverse = reverseNumber(i);
        int count = countDigits(i);
        if(reverse % count == 0) {
            cout << i << endl;
            return 0;//if i is found terminate the exit the function
        }
    }
    return 0;
}
*/

//7
/*
#include<iostream>

using namespace std;

int sumOfDivisors (int number) {
    int sum = 0;
    for (int divisor = 1; divisor <= number / 2; ++divisor) {
        if(number % divisor == 0) {
            sum += divisor;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int maxSumOfDivisors = 0;
    int maxNumber = 0;
    for (int i = n - 1; i > 0; --i) {
        //cout << i << "->"<<sumOfDivisors(i) << endl;
        if(sumOfDivisors(i) > maxSumOfDivisors ) {
            maxSumOfDivisors = sumOfDivisors(i);
            maxNumber = i;
        }
    }
    cout << maxNumber << endl;
    return 0;
}
*/
