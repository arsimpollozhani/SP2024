//
// Created by win11pro on 11/9/2024.
//
//********************************************
//QUESTION 7
//********************************************

/*
 *
* Read from SI one integer n. From the integers smaller than n, find the one with maximum
* sum of divisors. Do not count the number itself in the sum of divisors.

For example:

Input	Result
50    48

 */


/*#include<iostream>
using namespace std;

int main() {
 int n;
 cin >> n;
 int maxSum = 0;
 int result = 0;
 for(int i = 1; i <= n; i++) {
  int sumOfDivisors = 0;

  for (int j = 1; j <= i /2; j++) {
       if(i % j == 0) {
            sumOfDivisors += j;
           }
  }
   if(sumOfDivisors > maxSum) {
    maxSum = sumOfDivisors;
    result = i;
   }

 }
  cout << result<<endl;
 return 0;
}*/


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
        int sum = sumOfDivisors(i);
        if(sum > maxSumOfDivisors ) {
            maxSumOfDivisors = sum;
            maxNumber = i;
        }
    }
    cout << maxNumber << endl;
    return 0;
}
