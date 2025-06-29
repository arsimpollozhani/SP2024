//
// Created by win11pro on 11/5/2024.
//
//****************************************
//MONDAY
//****************************************
/*input 2 numbers from SI, a ,b. b is from 0 to 9, find how many times b is in a.
 * Input: 12334  Output: 2
 */

/*#include <iostream>
using namespace std;

int main() {
 int a, b, count = 0;
 cout << "Enter the number a: ";
 cin >> a;
 cout << "Enter the number b: ";
 cin >> b;

 if (b < 0 || b > 9) {
  cout << "Invalid Input" << endl;
 }

 while (a > 0) {
  int digit = a % 10;
  if (digit == b) {
   count++;
  }
  a/=10;
 }

 cout << count << endl;
 return 0;
}*/


//Input binary number until digit is not 0 or 1
//output conversion of that binary in decimal
/*#include <iostream>
using namespace std;

int main() {
 int decimal = 0;
 char digit;

 while(cin >> digit) {
  if(digit != '0' && digit != '1') {
   break;
  }
  decimal = decimal * 2 + (digit - '0');
 }

 cout << decimal << endl;
 return 0;
}*/



//

/*#include <iostream>
using namespace std;

int main() {
      int X, C ,P;
      cin >> X >> C >> P; // X - starting number, C - the digit to search for
                          // P - how many times C should appear

      int foundCount = 0; // how many valid numbers we've found
      int num = X + 1; // start seaching after number x

      while(foundCount < 10) { // we need to find 10 numbers;
            int tempNum = num; // copy of current number to manipulate
            int countC = 0; // counts how many times digit c appears in the
                           //current number

            while (tempNum > 0) { //loop through each digit
                 if(tempNum % 10 == C) { //if the last digit is equal to C
                  countC++; // if condition is true increment Counter
                 }
                 tempNum = tempNum / 10; // remove last digit, again check the loop for
                                          // the next digit.
            }


            if(countC == P) {            //If we found exactly P occurrences of C display num
                cout << num << endl;       //increment found Counter
                foundCount++;
            }

            num++;    // move to next number
      }

 return 0;
}*/



/*
#include<iostream>
using namespace std;

int main()
{
 char binary;
 int decimal = 0;
 while (cin >> binary)
 {
  if (binary != '0' && binary != '1')
  {
   break;
  }
  decimal = decimal * 2 + (binary - '0');
 }

 cout << decimal;
 return 0;
}*/

#include<iostream>

using namespace std;

int main() {
 cout << min(10,5);
}