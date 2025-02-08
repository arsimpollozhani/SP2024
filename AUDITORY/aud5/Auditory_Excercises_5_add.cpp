//
// Created by win11pro on 11/2/2024.
//
//AUDITORY EXCERCISES 5
/*
1.5. Task 4
Write a program that will print all four-digit numbers where
the sum of the three least significant digits is equal
to the most significant digit.
4031 (4=0+3+1), 5131 (5=1+3+1)
*/


/*
#include<iostream>

using namespace std;

int main()
{
    int i, n, sum, first_digit, digit;
    i = 1234;
    while( i <= 9999){ //eg. 1234
        first_digit = i / 1000; //taking up first digit //1
        n = i % 1000; // taking up last 3 digits //234
        sum = 0;
        while(n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }
        if(sum == first_digit)
        {
            cout << i << endl;
        }
        i++;
    }

    return 0;
}*/

//short way and simpler to do the last program
/*#include<iostream>

using namespace std;

int main()
{

    for(int i = 1000; i<=9999; i++) {

        int first = i % 10;
        int second = (i % 100)/10;
        int third = (i % 1000)/100;
        int last = i / 1000;
        if((first + second + third)  == last) {
            cout << i << endl;
        }

    }
    return 0;
}*/


/*
1.6. Task 5
Write a program that will print all numbers
from a given range that are read the same from left to
right and from right to left.

example numbers

12321 5061605
*/

/*#include<iostream>

using namespace std;

int main() {
    int i, from ,to , temp , op, digit;
    cin >> from >> to;
    for(i = from; i <= to; i++) {
        temp = i;
        op = 0;
        while(temp > 0) {
            digit = temp % 10;
            op = op * 10 + digit;
            temp /= 10;
        }
        if(op == i) {
            cout << i << endl;
        }
    }
    return 0;
}*/


/*
#include<iostream>

using namespace std;

int main() {
    int i, from ,to , temp , op, digit;
    cin >> from >> to;
    for(i = from; i <= to; i++) {
        temp = i;
        op = 0;
        while(temp > 0) {
            digit = temp % 10;
            op = op * 10 + digit;
            temp /= 10;
        }
        if(op == i) {
            cout << i << endl;
        }
    }
    return 0;
}
*/

/*1.7. Task 6
Write a program that will determine the number with the
maximum value from an unknown number
of integers entered from the keyboard. The program ends
if an invalid number representation is entered */

/*#include <iostream>
using namespace std;

int main() {
    int n, max;
    if(cin >> max) {
        while (cin>>n) {
            if(max < n) {
                max = n;
            }
        }
        cout << max ;
    } else {
        cout << "No number was entered!";
    }
    return 0;
}*/

//same as last program but numbers entered greater than 100 are ignored./*
/*#include <iostream>
using namespace std;

int main() {
    int n, max;
    if(cin >> max) {

        while (cin>>n) {
            if( n > 100) continue;
            if(max < n) {
                max = n;
            }
        }
        cout << max ;
    } else {
        cout << "No number was entered!";
    }
    return 0;
}*/


/*1.9. Task 8
Write a program that will determine the two numbers with the
highest values from an unknown number of integers entered from the keyboard.
The program ends if an invalid number representation is entered.

Example:

If the numbers 2 4 7 4 2 1 8 6 9 7 10 3 are entered,
the program will print 10 and 9.*/

/*
 *#include <iostream>
using namespace std;

int main() {
    int n, max1, max2, temp;
    if(cin>>max1>>max2) {
        // max1 = 2  , max2 = 5
        if(max2 > max1){
        temp=max1; // temp = 2
        max1=max2; // max1 = 5 - smallest
        max2=temp; // max2 = 2 - greatest
        }
        while (cin>>n) {
            if (n>max1) {
                max2 = max1;
                max1 = n;
            } else if(n > max2) {
                max2 = n;
            }
        }
        cout << max1 << endl;
        cout << max2 << endl;
    } else {
        cout << "Enter at least two numbers";
    }

    return 0;
}
*/

/*
 Input: 5 3 8 1 9 4
max1   max2   (after each step)
5      3      (initial)
5      3      (after sorting first two)
8      5      (after 8)
8      5      (after 1)
9      8      (after 9)
9      8      (after 4)
Output:
9
8
*/


/*
1.10. Task 9
Write a program that will determine the difference between the sums of the
numbers at even and odd positions (according to the order of entry) from N integers
entered from the keyboard. If this difference is less than 10, the screen
prints “The two sums are similar”, otherwise “The two sums differ greatly”.

Example:

For the numbers entered from the keyboard:

2 4 3 4 2 1 1 6 1 7

sum_odd_positions = 9

sum_even_positions = 22

The screen will print:

The two sums differ greatly
*/

/*#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int number = 0, n = 0, sumOdd = 0, sumEven = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> number;
        if(i % 2) {
            sumOdd += number;
        } else {
            sumEven += number;
        }
    }
    int diff = sumOdd - sumEven;
    if(abs(diff) < 10) {
        cout << "The two sums are similar";
    } else {
            cout << "The two sums differ greatly";
    }
    return 0;
}*/



/*
1.11. Task 10
Write a program that will determine the positions (ordinal numbers of entry)
of the two consecutive numbers that have the highest sum from an unknown number
of integers entered from the keyboard. The program ends if two negative integers
are entered one after the other (consecutively).
*/


/*
#include<iostream>
using namespace std;

int main() {
    int polPosition, position, maxSum, sum, previous, next;
    cin >> previous >> next;
    polPosition = position = 2;
    maxSum = sum = previous + next;
    while(1) {
        if(previous < 0 && next < 0) {
            break;
        }
        sum = previous + next;
        if(sum > maxSum) {
            maxSum = sum;
            polPosition = position;
        }
        previous = next;
        cin >> next;
        position++;
    }
    if(position > 2) {
        cout << "The numbers are at positions "<<polPosition-1<<" and "<<polPosition<<"and their sum is "<< maxSum << endl;

    }
    return 0;
}
*/

/*
1.11. Task 10
Write a program that will determine the positions (ordinal numbers of entry) of the two consecutive numbers that have
the highest sum from an unknown number of integers entered from the keyboard. The program ends if two negative integers
are entered one after the other (consecutively).
*/

/*
#include <iostream>
using namespace std;

int main() {
    int pol_position, position, max_sum, sum, previous, next;
    cin >> previous >> next;
    pol_position = position = 2;
    max_sum = sum = previous + next;
    while (1) {
        if (previous < 0 && next < 0) {
            break;
        }
        sum = previous + next;
        if (sum > max_sum) {
            max_sum = sum;
            pol_position = position;
        }
        previous = next;
        cin >> next;
        position++;
    }
    if (position > 2)
        cout << "The numbers are at positions " << pol_position - 1 << " and " << pol_position << " and their sum is " << max_sum;
    return 0;
}
*/


//EXAM PROBLEMS FOR THE FIRST MIDTERM

/*2. An example of an exam problem for the first midterm.
2.1. Task 1
In Morse code, the characters (letters, digits) are represented by dots and dashes. The digits from 0 to 4 are
represented as follows: “-----” “.----” “..---” “...--” “....-” You enter a natural number N (N < 100,000) from the keyboard,
and then N other natural numbers are entered. For each of the entered numbers, print the remainder when dividing that
number by 5 in Morse code, each in a separate line.*/

//with SWITCH
/*#include<iostream>

using namespace std;

int main() {
    int n, number;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> number;
        int remainder = number % 5;
        switch(remainder) {
            case 0:
                cout << "-----"; break;
            case 1:
                cout << ".----"; break;
            case 2:
                cout << "..---"; break;
            case 3:
                cout << "...--"; break;
            case 4:
                cout << "....-"; break;
        }
    }
    return 0;
}*/


//with IF ELSE

/*
#include<iostream>

using namespace std;

int main() {
    int n, number;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> number;
        int remainder = number % 5;

        if(remainder == 0) {
            cout << "-----"<< endl;
        } else if(remainder == 1) {
            cout << ".----"<< endl;
        } else if(remainder == 2) {
            cout << "..---"<< endl;
        } else if(remainder == 3) {
            cout << "...--"<< endl;
        } else {
            cout << "....-" << endl;
        }

    }
    return 0;
}
*/



/*
 *2.2. Task 2
A “Rosary” is a “number” obtained by concatenating the first N numbers in order.
For example, for N=4, it is 1234, and for N=11, it is 1234567891011.
An “Reverse Rosary” is similar to the above, but it starts from N, and the
numbers are concatenated in reverse order. So, for N=5, it is 54321.

For a given N, print in order on the screen: Rosaryfor 1, Reverse Rosary for 1,
Rosary for 2, Reverse Rosary for 2, and so on, up to Reverse Rosary for N.

For example, for N=5, you should print:

1
1
12
21
123
321
1234
4321
12345
54321
*/

#include<iostream>
using namespace std;

int main() {
    int i , j, N;
    cin >> N;

    for(i = 1; i <= N; i++) {
        for(j=1; j<=i; j++) {
            cout << j;
        }
        cout << endl;
        for (j=i; j > 0; j--) {
            cout << j;
        }
        cout << endl;
    }
}