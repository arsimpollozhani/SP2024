/*2.1. Task 1a
Write a program to calculate the sum of all
even two-digit numbers. The calculated sum is printed on the screen.*/

// 2 digit numbers are from 10-99;
//even starts from 11 to 99

/*
#include<iostream>

using namespace std;

int main() {
    int i = 10;   //initialize i as 10
    int sum = 0;   // initializw sum as 0, beacause may have random values
    while (i <= 98) {  // from 10 to 98
        sum += i;   //sum = sum + 10
        i+=2;     // increment i by 2
    }
    cout << sum << endl;  // display sum
    return 0;
}
*/



/*2.2. Task 1b
Write a program to calculate the sum of all odd two-digit numbers.
The program prints the sum on the screen in the following format:

11 + 13 + 15 + 17 + … + 97 + 99 = 2475

Solve the program without using the if statement*/

//Solution 1
/*
#include <iostream>
using namespace std;
int main () {
    int i = 11, sum = 0;
    cout << i;
    sum = i;
    i=i+2;
    while (i <= 99){
        cout << " + " << i;
        sum = sum + i;
        i+=2;
    }
    cout << " = " << sum << endl;
    return 0;
}
*/


//Solution 2

/*
#include <iostream>
using namespace std;
int main () {
    int i = 11, sum = 0;
    while(i<=97) {
        cout << i << " + ";
        sum += i;
        i+=2;
    }
    sum += i;
    cout << i << " = " << sum <<endl;
    return 0;
}
*/


/*
2.3. Task 2
Write a program to calculate \$y = x^n\\$ for
a given natural number n, n >= 1 and real number x.
*/

//solution 1 with WHILE
/*#include<iostream>
using namespace std;

int main() {
    int counter = 0, n;
    float x, y = 1;
    cout << "x : "; cin >> x;
    cout << "n : "; cin >> n;
    while(counter < n) { // 0 < 2
        y = y * x;
        counter++;
    }
    cout << x << "^" << n << " = " << y << endl;
    return 0;
}*/

//Solution 2 with DO WHILE
/*#include<iostream>
using namespace std;

int main() {
    int counter = 0, n;
    float x , y = 1;
    cout << "x: ";
    cin >> x;
    cout << "n: ";
    cin >> n;
    do {
        y = y * x;
        counter++;
    } while(counter < n);
    cout << y;
    return 0;
}*/

//SOLUTION 3 with FOR

/*
#include<iostream>

using namespace std;

int main() {
    int counter, n;
    float x, y;
    cout << "x : ";
    cin >> x;
    cout << "n : ";
    cin >> n;
    for (counter = 1, y = x; counter < n; counter++) {
        y = y * x;
    }
    cout << "y = " << y << endl;
    return 0;
}
*/

/*
#include<iostream>

using namespace std;

int main() {
    int counter = 0, n;
    float x , y = 1;
    cin >> x;
    cin >> n;
    for( ; counter<n; counter++) {
        y *= x;
    }
    cout << y << endl;
}
*/



/*2.4. Task 3
Write a program that will determine the number of numbers divisible by 3,
when divided by 3 have a remainder of 1, or 2, out of n numbers (entered from the keyboard).

Solve the task with while, do while and for*/

/*#include<iostream>

using namespace std;

int main() {
    int n = 1 , i = 0, number, div, r1, r2;
    div = r1 = r2 = 0; // counters
    cin >> n; // input numbers

    while(i < n) {
        cin >> number;
        if(number % 2 == 0) {
            div++;
        } else if (number % 3 == 1) {
            r1++;
        }else {
            r2++;
        }
        i++;
    }
    cout << div << endl;
    cout << r1 << endl;
    cout << r2 << endl;
    return 0;
}*/

/*#include<iostream>

using namespace std;

int main() {
    int n = 1, i = 0, number, div, r1, r2;
    div = r1 = r2 = 0; /* counters #1#
    cin >> n;   /* input numbers #1#
    do {
        cin >> number;
        if(number % 3 == 0) {
            div++;
        } else if (number % 3 == 1) {
            r1++;
        } else if (number % 3 == 2) {
            r2++;
        }
        i++;
    } while(i < n);
    cout << div << endl;
    cout << r1 << endl;
    cout << r2 << endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main() {
    int n, number, i = 0, div, r1, r2;
    div = r1 = r2 = 0;
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> number;
        if(number % 3 == 0) {
            r1++;
        } else if (number % 3 == 1) {
            r2++;
        } else if (number % 3 == 2) {
            div++;
        }
    }
    cout << div << endl;
    cout << r1 << endl;
    cout << r2 << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    for (int i = 0, j = 10, k = 20; (i + j + k) < 100;
         j++, k--, i += k) {
        cout << i << " " << j << " " << k << "\n";
         }
    return 0;
}*/