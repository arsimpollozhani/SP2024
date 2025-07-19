//
// Created by win11pro on 11/4/2024.
//

//********************************************
//QUESTION 1
//********************************************
/*From SI read characters until you read the character (!). In this characters
 * are hidden integers (smaller than 100). Write a program that will read all
 * characters and print the sum of all hidden in the text
 *
 * INPUT                            RESULT
 *
 * ako34 neka12em bashka41mewr!     87
 */


#include<iostream>
using namespace std;

int main() {
    char ch;
    int sum = 0, number = 0;
    bool inNumber = false;
    while (cin >> ch && ch != '!') {
        if (ch >= '0' && ch <= '9') {
            number = number * 10 + (ch - '0'); //eg. if ch = 3 ; number = 0*10+3=3
            inNumber = true; // next ch=4; number=3*10+4=34
        } else {
            if (inNumber && number < 100) {
                sum = sum + number;;
            }
            number = 0;
            inNumber = false;
        }
    }

    if (inNumber && number < 100) {
        sum = sum + number;
    }
    cout << sum << endl;
    return 0;
}


//******************************
//QUESTION 2
// *****************************
/*
#include<iostream>

using namespace std;

int firstDigit(int num) {
 num = abs(num);
 while (num >= 10) {
  num = num / 10;
 }
 return num;
}

int lastDigit (int num) {
 num = abs(num);
 return num % 10;
}

int productMiddleDigits(int num) {
 int product = 1;

 num = num / 10;

 int digitCount = 0;

 while (num >= 10) {
  int digit = num % 10;
  num /= 10;

  if(num > 0) {
   product *= digit;
   digitCount++;
  }
 }
 return digitCount > 0 ? product : 0;
}

int main() {
 int a , b;
 cin >> a >> b;
 int count = 0;
 for(int i = a; i <= b; i++) {
  //TEST cout << i << endl;
  //TEST cout << firstDigit(i) << endl;
  //TEST cout << lastDigit(i) << endl;
  int first = firstDigit(i);
  int last = lastDigit(i);



  int product = productMiddleDigits(i);

  if(product == 0){continue;}

  int firstAndLast = first * 10 + last;

  if (product % firstAndLast == 0) {

   cout << i << " -> (" << product << " == " << firstAndLast << " * "<< product / firstAndLast << ")"<<endl;
   count++;
  }

 }
 cout << count << endl;
 return 0;
}*/

//********************************************
//QUESTION 3
//********************************************


/*Using the characters + and - form a square with 'width' n(n>2)
 *that represent square of the chars (-), enclosed by a square of chars (+) (see examples)
 For given n, print the appropriate image.
 Attention: Do not print additional characters as empty spaces, or unnecesary new line..
 The image ends with new line char. Do not use any matrix or arrays because n is not limited.*/

/*#include<iostream>
using namespace std;

int main() {
 int n;
 cin >> n;

 if(n>2) {
  for(int i = 0; i < n ; i++) {
   for(int j = 0; j < n; ++j) {
    if(i == 0 || i == n - 1 || j == 0 || j == n - 1) {
     cout <<"+";
    } else {
     cout << "-";
    }
   }
   cout << endl;
  }
 } else {return 1;}

 return 0;
}*/


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

/*#include<iostream>
using namespace std;

int main() {
 float points, maxPoints, N , grade = 0;
 float percentage;
 string fail;
 cin >> N;
 for(int i = 0; i < N; i++) {
  cin >> points;
  cin >> maxPoints;
  percentage = (points / maxPoints)*100;
  if(percentage < 50) {
    cout << "FAIL";
  } else if (percentage < 60) {
   grade = 6;
  }else if (percentage < 70) {
   grade = 7;
  }else if (percentage < 80) {
   grade = 8;
  }else if (percentage < 90) {
   grade = 9;
  } else if (percentage < 100) {
   grade = 10;
  }


  cout << percentage << " " << grade << endl;

 }

 return 0;
}*/

/*#include<iostream>
using namespace std;

int main() {
 float points, maxPoints, N , grade = 0;
 float percentage;
 string fail;
 cin >> N;
 for(int i = 0; i < N; i++) {
  cin >> points;
  cin >> maxPoints;
  percentage = (points / maxPoints)*100;
  if(percentage < 50) {
   cout << percentage << " FAIL" << endl;
  } else if (percentage < 60) {
   grade = 6;
   cout << percentage << " " << grade << endl;
  }else if (percentage < 70) {
   grade = 7;
   cout << percentage << " " << grade << endl;
  }else if (percentage < 80) {
   grade = 8;
   cout << percentage << " " << grade << endl;
  }else if (percentage < 90) {
   grade = 9;
   cout << percentage << " " << grade << endl;
  } else if (percentage < 100) {
   grade = 10;
   cout << percentage << " " << grade << endl;
  }
 }

 return 0;
}*/


//********************************************
//QUESTION 5
//********************************************

/*
 * From SI read one number that represents today's date in the format
 * DDMMYYYY. Then read one integer N, after you read N dates of birth
 * in the given format. For each of the N read dates your program should
 * print "YES" if on today's date (read in the begininng) the person
 * with that date have more or equal to 18 years, otherwise should
 * print "NO"
 */

/*#include<iostream>
using namespace std;

int main() {
 int today , date, N;
 cin >> today;
 cin >> N;
 int todayDay = today / 1000000;
 int todayMonth = (today/10000)%100;
 int todayYear = today % 10000;



 for(int i = 1; i <= N; i++) {
  cin >> date;

  int birthDay = today / 1000000;
  int birthMonth = (today/10000)%100;
  int birthYear = today % 10000;

  int age = todayYear - birthYear;
  if(todayMonth < birthMonth || (todayMonth == birthMonth && todayDay < birthDay)) {
   age--;
  }
  if(age >= 18) {
   cout << "YES"<<endl;
  } else {
   cout << "NO"<<endl;
  }
 }
 return 0;
}*/


//********************************************
//QUESTION 6
//********************************************
/*
 *
* One number is interesting if his flipped number is divisible by the number
* of digits it contains. The flipped number is composed from the same digits, but
* in opposite order (ex. 653 is flipped of the number 356). Read from SI one integer
* n ( n > 9). Find and print the largest integer small than n that is "interesting". If the
* read number is not valid print a message "The number is invalid".

For example:

Input	Result
5     The number is invalid
 */

/*
#include<iostream>
using namespace std;

int main() {
 int number;
 cin >> number;

 if (number <= 9){
  cout << "The number is invalid";
  return 0;
 }
 for (int i = number - 1; i > 9; --i) {
  int temp = i;
  int reverse = 0 , count = 0;
  while (temp > 0) {
   int digit = temp % 10;
   reverse = reverse * 10 + digit;
   temp = temp / 10;
   count++;
  }

  if (reverse % count == 0) {
   cout << i << endl;
   return 0;
  }
 }

 return 0;
} */


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

/*
#include<iostream>
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
}
*/

//*********************************
//QUESTION 8
//********************************
/*
#include<iostream>
using namespace std;

int firstDigit(int n) {
 while (n >= 10) {
  n /= 10;
 }
 return n;
}

int lastDigit(int n) {
 return n % 10;
}

int reverseMiddle(int n) {
 int reverse = 0;
 bool foundReverse = false;
 n /= 10;
 while(n >= 10) {
  int digit = n % 10;
  n /= 10;
  if(n > 0) {
   reverse = reverse * 10 + digit;
   foundReverse = true;
  }
 }
 return foundReverse ? reverse : 0;
}


int main() {
 int a, b;
 int count = 0;
 cin >> a >> b;
 for (int i = a; i <= b; i++) {
  //TEST cout << firstDigit(i) << " - "<< lastDigit(i) << endl;
  int first = firstDigit(i);
  int last = lastDigit(i);
  int firstAndLastNum = first+last;
  //TEST cout << reverseMiddle(i) << endl;
  int reverse = reverseMiddle(i);
  if(reverse == 0) {
   continue;
  }

  if(reverse % firstAndLastNum == 0) {
   cout << i << " -> (" << reverse << " == " << "(" <<last << " + " << first << ")" <<" * " << reverse / firstAndLastNum << ")"<<endl;
   count++;
  }
 }
 cout << count << endl;
 return 0;
}*/


//*********************************
//QUESTION 8
//*********************************

/*
#include<iostream>
using namespace std;

int firstDigit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int lastDigit(int n) {
    return n % 10;
}

int reverseMiddle(int n) {
    int reverse = 0;
    bool foundReverse = false;
    n /= 10;
    while(n >= 10) {
        int digit = n % 10;
        n /= 10;
        if(n > 0) {
            reverse = reverse * 10 + digit;
            foundReverse = true;
        }
    }
    return foundReverse ? reverse : 0;
}


int main() {
    int a, b;
    int count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        //TEST cout << firstDigit(i) << " - "<< lastDigit(i) << endl;
        int first = firstDigit(i);
        int last = lastDigit(i);
        int firstAndLastNum = first+last;
        //TEST cout << reverseMiddle(i) << endl;
        int reverse = reverseMiddle(i);
        if(reverse == 0) {
            continue;
        }

        if(reverse % firstAndLastNum == 0) {
            cout << i << " -> (" << reverse << " == " << "(" <<last << " + " << first << ")" <<" * " << reverse / firstAndLastNum << ")"<<endl;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}*/

//**************************
//QUESTION 10
//************************


/*
#include<iostream>
using namespace std;
int main() {

 int z;
 int x , y;
 int pair = 0, isPair = 0;
 if (cin >> z) {
  while ((cin >> x >> y)&& (x!=0 && y!=0)) {
   isPair++;
   if((x+y)== z) {
    pair++;
   }

  }
 }
 cout << "You have entered "<<pair << " pairs of numbers that have a sum equal to "<< z <<endl;
 cout << "The percentage of pairs with sum "<<z<<" is " << float(pair) / isPair *100.0 << "%" << endl;
 return 0;
}
*/


//**************************
//QUESTION 11
//************************

/*
#include<iostream>
using namespace std;

int sumOfAngles(int a, int b, int c) {
 return a + b + c;
}

int main() {
 int a, b, c;
 cin >> a >> b >> c;
 // test cout << sumOfAngles(a, b, c) << endl;
 if(sumOfAngles(a,b,c) != 180) {
  cout << "NO" << endl;
 } else {
  cout << "YES" << endl;
  if (a > 90|| b > 90 || c > 90 ) {
   cout << "OBTUSE"<<endl;
  } else if(a == 90 || b == 90 || c == 90) {
   cout << "RIGHT"<<endl;
  } else  {
   cout << "ACUTE"<<endl;
  }
 }

 return 0;
}
*/


//**************************
//QUESTION 12
//************************

/*
#include<iostream>
#include<cmath>
using namespace std;

int moveDigit (int number) {
 int count = 0;
 int digit = number % 10;
 int remaining = number /= 10;
 while (remaining > 0) {
  remaining = remaining / 10;
  count++;
 }
 int newNumber =  digit * pow(10, count) + number;
 return newNumber;
}

int main() {
 /* TEST int number;
 cin >> number;#1#
 //TEST cout << moveDigit (number);
 int n, num1, num2;
 cin >> n;
 for (int i = 1; i <= n; i++) {
  cin >> num1 >> num2;
  if (moveDigit(num1) > num2) {
   cout << "YES" <<endl;
  } else {
   cout << "NO" <<endl;
  }
 }
}*/


//*********************************
/* // QUESTION 13
//*********************************
#include<iostream>

using namespace std;

bool sweetNumber (int number) {
    while(number > 0) {
        int digit = number % 10;
        if(digit % 2 != 0) {
            return false;
        }
        number = number / 10;
    }
    return true;
}

int main() {
    /*int number;
    cin >> number;
    cout << sweetNumber(number)<<endl;
    #1#
    int m,n;
    cin >> m >> n;
    int smallestEvenDigitNumber = -1;
    for(int i = m; i <= n; i++) {
        if(sweetNumber(i)) {
            smallestEvenDigitNumber = i; //because we start from m which is the smallest number
            break;                //in the range and when the sweetNumber is true print the smallest and exit the if
        }
    }
    if (smallestEvenDigitNumber != -1) {
        cout << smallestEvenDigitNumber << endl;
    } else {
        cout << "NSM" << endl;
    }
    return 0;
}*/
