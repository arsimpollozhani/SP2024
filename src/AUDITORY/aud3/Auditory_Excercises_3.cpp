//
// Created by win11pro on 10/18/2024.
//
/*
 OPERATORS IN C++
1.1 RELATIONAL OPERATORS
 Operator   < , <= , > , >= , == (equality), != (not equal/difference)
1.2 LOGICAL OPERATORS
 Operator  &&, || , ! (negation - NOT)


 int a = 5&&0;  // a=0
 a = 2 && 5; // a=1
 a = 0||5 // a=1
 a = !0; // a=1
 a = !5; // a = 0

1.3 ASSIGNMENT OPERATOR
All expressions have values, even those containing =
The value of such an expression is the value of the expression on the right-hand side.
Therefore, assignment of the following form is possible:
  x = (y = 10)*(z = 5)
  x = y = z = 20;

1.4 INCREMENT AND DECREMENT OPERATORS
Increment op :  ++ (increases the value of the operand by 1)
prefix: a = ++b; // the value is increases before the expresion is calulated
postfix: a = b++; // the value is increased after the exp. is calculated
Decrement op:   -- (decreases the value of the operand by 1)

1.5 COMPOUND OPERATORS
  a += 5;  // a = a + 5;   a += b *c; // a = a + b * c;
  a -= 5;  // a = a - 5;
  a *= 3;  // a = a * 3;
  a /= 3; //  a = a / 3;
  a %= 3; //  a = a % 3;

2.0 CONTROL STRUCTURES for SELECTION : if-else

if(condition)
{
    statement_if_true;
}else{
    statement_if_false;
}
 */

//Example
/*#include<iostream>
using namespace std;
int main() {
    int m  = 5, n = 10;
    if (m > n) {
        ++m;
    }
    ++n;
    cout << "m = " << m << " n = " << n << endl;
}*/

//****************EXCERCISES****************
//3.1 if character lowercse print 1 if uppercase print 0 , if digit print digit
/*
#include<iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (c >= 'a' && c <= 'z') {
        cout << 1;
    } else if (c>='A' && c<='Z') {
        cout << 0;
    } else if (c>='0' && c<='9') {
        cout << "Digit" << endl;
    }
    return 0;
}
*/

//3.2 Coordinate system
//Sol 1
/*#include<iostream>
using namespace std;

int main()
{
    float x , y;
    cout << "Enter the coordinates : " << endl;
    cin >> x >> y;
    if (y>0) {
        if(x>0) {
            cout << "1";
        } else if (x<0) {
            cout << "2" <<endl;
        } else {
            cout << "y-axis";
        }
    } else if (y<0) {
        if(x>0) {
            cout << "4";
        } else if (x<0) {
            cout<<"3"<<endl;
        } else {
            cout << "y-axis";
        }
    } else {
        if (x>0 || x<0) {
            cout << "x-axis";
        }
        if (x==0 && y==0) {
            cout << "Origin";
        }
    }
    return 0;
}*/

//3.2
// not a complete sol. if entered 0 and 0 , no result etc.
/*#include <iostream>
using namespace std;

int main() {
    float x,y;
    cout << "Enter coordinates: " <<endl;
    cin >> x >> y;
    if (x>0 && y>0) {
        cout << "Quadrant 1";
    }
    if (x>0 && y<0) {
        cout << "Quadrant 4";
    }
    if (x<0 && y<0) {
        cout << "Quadrant 2";
    }
    if (x<0 && y<0) {
        cout << "Quadrant 3";
    }
    return 0;
}*/

//3.2 Nested if-else

/*#include <iostream>
using namespace std;
int main() {
    float x,y;
    cout << "Enter coordinates: " <<endl;
    cin >> x >> y;
    if (x>0) {
        if (y>0) {
            cout << "1";
        } else if (y<0) {
            cout << "4";
        } else {
            cout << "Positive X";
        }
    } else if (x<0) {
        if (y>0) {
            cout <<"2"<<endl;
        } else if (y<0) {
            cout<<"3"<<endl;
        } else {
            cout <<"Negative X";
        }
    } else {
        if (y>0) {
            cout << "Positive Y";
        } else if(y<0) {
            cout << "Negative Y";
        } else {
            cout << "Origin.";
        }
    }
    return 0;
}*/

//3.3 Grade calculation
/*#include <iostream>
using namespace std;
int main() {
    int points, grade = 0;
    cout << "Enter number of points: ";
    cin >> points;
    if (points >= 0 && points <= 50){
        grade = 5;
        cout<< "You failed!"<<endl;
    }
    else if (points > 50 && points <= 60)
        grade = 6;
    else if (points > 60 && points <= 70)
        grade = 7;
    else if (points > 70 && points <= 80)
        grade = 8;
    else if (points > 80 && points <= 90)
        grade = 9;
    else if (points > 90 && points <= 100)
        grade = 10;
    else
        cout<<"The points that you entered are not in the correct form!"<<endl;

    cout << grade << endl;
    return 0;
}*/

//different version
/*#include <iostream>
using namespace std;
int main() {
    int points, grade = 0;
    cin >> points;
    if (points < 0 || points > 100) {
        cout << "Invalid input" << endl;
    } else {
        if (points > 90) {
            grade = 10;
        } else if(points > 80) {
            grade = 9;
        } else if(points > 70) {
            grade = 8;
        } else if(points > 60) {
            grade = 7;
        } else if(points > 50) {
            grade = 6;
        } else {
            grade = 5;
        }
        cout << grade << endl;
    }
}*/

//Grade calculation with signs
/*#include <iostream>
using namespace std;
int main() {
    int points, grade = 0;
    cin >> points;
    if (points < 0 || points > 100) {
        cout << "Invalid input" << endl;
    } else {
        if (points > 90) {
            grade = 10;
        } else if(points > 80) {
            grade = 9;
        } else if(points > 70) {
            grade = 8;
        } else if(points > 60) {
            grade = 7;
        } else if(points > 50) {
            grade = 6;
        } else {
            grade = 5;
        }
    }
        char sign = ' ';
        int digit = points % 10;
        if (grade != 5) {
            if (digit >= 1 && digit <=3) {
                sign = '-';
            } else if (grade != 10 && (digit >= 8 || digit == 0)) {
                sign = '+';
        }
        cout << grade << sign <<endl;
    }
}*/

//3.5 Check if the triangle can be constructed, if yes, check whether
//is a right triangle and calculate its area,
/*#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Please enter the length of the sides: ";
    cin >> a >> b >> c;
    if ((a + b <= c) || (a+c <=b)||(b+c <= a)) {
        cout<<"The triangle cannot be constructed"<<endl;
    }else {
        if (a>=b) {
            float tmp = a;
            a = b;
            b = tmp;
        }
        if (a >= c) {
            float tmp = c;
            a = c;
            c = tmp;
        }
        if(b>=c) {
            float tmp = b;
            b=c;
            c=tmp;
        } // with this the longest side will be c
        if (c*c == a*a + b*b) {
            cout << "The triangle is RIGHT TRIANGLE."<<endl;
            cout << "Area is "<< (a*b)/2 <<endl;
        }else {
            cout << "The triangle is NOT RIGHT TRIANGLE."<<endl;
        }
    }
    return 0;
}*/

//3.6 Check if is triangle, if yes, check the type, calculate area

/*
#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float a, b, c;
    cout << "Please enter the length of the sides: ";
    cin >> a >> b >> c;
    if ((a + b <= c) || (a+c <=b)||(b+c <= a)) {
        cout<<"The triangle cannot be constructed"<<endl;
    }
    else {
        if(a == b && b == c)
        {
            cout<<"The triangle is equilateral."<<endl;
        }
        else if (a == b || b == c || a == c){
            cout<<"The triangle is isosceless."<<endl;
        } else {
            cout<<"The triangle is scalene"<<endl;
        }
        float p , s = (a + b + c)/2;
        p = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "Area = " << p << endl;
    }
    return 0;
}
*/

//3.7 Calculate dog's age in human years.
//Note: 2 years of dog = 10.5 human years
// After that, each dog year is equal to 4 human years.
/*
#include<iostream>
using namespace std;

int main() {
    int dog_age , human_age;
    cout << "Enter dog age: ";
    cin >> dog_age;

    if(dog_age < 0) {
        cout << "Age must be a positive number!"<<endl;
    } else {
        if(dog_age <= 2) {
            human_age = dog_age * 10.5;
        } else {
            human_age = 2 * 10.5 + (dog_age - 2) * 4;
        } // (dog_age-2)*4 we exclude the first two years and multiply by 4

        cout << "Human age of the dog is: " << human_age << endl;
    }
    return 0;
}*/

//3.8 Maximum of two numbers
/*#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Please enter two integers: ";
    cin >> a >> b;
    if (a > b) {
        cout << "Maximum number is " << a << endl;
    }else{
        cout << "Minimum number is " << b << endl;
    }
    return 0;
}*/

//With ternary operators
/*#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers: "<<endl;
    cin >> a >> b;
    int max = a > b ? a : b;
    cout << max << endl;
}*/

//3.9
//Check if year given from keyboard is a leap year or not.


//check leap year
/*
#include<iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter year: "<<endl;
    cin>>year;
    if((year % 4 ==0 && year %100 != 0) || year % 400 == 0) {
        cout<<year<<" is a leap year"<<endl;
    } else {
        cout<<year<<" is not a leap year"<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main() {
    int date;
    cin >> date;
    //18091992
    int day = date / 1000000;
    int month =(date / 10000) % 100;

    cout << day << "."<<month<<endl;

    return 0;
}*/