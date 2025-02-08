//
// Created by win11pro on 11/9/2024.
//
//*********************************
//QUESTION 8
//*********************************


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
}


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
}
*/


/* #include<iostream>
#include<cmath>

using namespace std;

int firstDigit(int number)
{
    while(number > 10){
        number /= 10;
    }
    return number;
}

int lastDigit(int number)
{
    return number%10;
}

int digitsOfMiddle(int number)
{
    int first = firstDigit(number);
    int last = lastDigit(number);

    int divisor = pow(10, (int)log10(number));

    int middleDigits = (number - first * divisor) / 10;
    return middleDigits;
}

int reverseMiddle(int number)
{
    int middleDigitsReversed = digitsOfMiddle(number);
    int reverse = 0;
    while (middleDigitsReversed > 0){
        int digit = middleDigitsReversed % 10;
        reverse = reverse * 10 + digit;
        middleDigitsReversed /=10;
    }
    return reverse;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    //cout << reverseMiddle(a);
    //cout << firstDigit(a);
    //cout << lastDigit(a);
    int count = 0;
    for(int i = a; i <= b; i++){
        int first = firstDigit(i);
        int last = lastDigit(i);

        int firstLastNum = first + last;

        int reverse = reverseMiddle(i);
        if(reverse == 0){
            continue;
        }
        if(reverse % firstLastNum == 0){
            cout << i << "-> ("<<reverse<<" == ("<<last<<" + "<<first<<") * "<< reverse/firstLastNum<<")"<<endl;
            count++;
        }
    }
    cout << count << endl;
    return 0;
} */