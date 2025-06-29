//
// Created by win11pro on 10/18/2024.
//
/*#include<iostream>  // #include - directive to include external libraries
                    // <iostream> - library for working with standart input/output streams(keyboard/screen)

using namespace std;

int main() //main function
{
    /*variable declaration;
    program statement ;#1#
    cout << "Welcome to Finki" << endl;
    // cout - global object for working with the output stream (screen)
    // << - operator for printing to the output stream (screen)
    return 0;
}*/

//Input and Output streams
/*#include<iostream>
using namespace std;

int main()
{
    int value;
    cout<<"Please enter an integer: ";
    cin>>value;
    cout <<"The value is: "<<value<<endl;
    return 0;
}*/

//Variables
/*
 Variables are symbolic names for locations in memory where values are stored.
 All variables must be declared before they are used.
 Each time a new value is assigned to a variable, the old value is overwritten.

 Variable declaration in C++
 --      data_type variable_name = initial_value;


 Variable types in C++

 INTEGER       CHARACTER        FLOATING-POINT          BOOLEAN
 int            char            float                   bool
 short                          double
 long                           long double
 */

/*
#include<iostream>
using namespace std;

int main()
{
    int number = 5;
    float price = 7.99;
    char letter = 'a';
    bool is_true = true;
    return 0;
}*/

/*Operators
 Operator   +  ,  -   ,  *   ,   / ,  %
 *
 *
 *
 */


//*********EXCERCISES**********
//8.1

/*
#include<iostream>
using namespace std;

int main()
{
    float x = 3.0/2 + (5-46*5.0/12);
    cout << x << endl;
    return 0;
}
*/

//8.2
/*#include<iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a value for x to calculate the square fo x : ";
    cin >> x;
    cout << "The square fo x is " << x * x << endl;
    return 0;
}*/

//8.3

/*
#include<iostream>
using namespace std;

int main()
{
    float a = 5, b = 7.5 , c = 10.2;
    float perimeter, area, s;
    perimeter = a + b + c;
    s = perimeter / 2;
    area = s*(s-a)*(s-b)*(s-c);
    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;
    return 0;
}
*/
//8.4
/*#include<iostream>
using namespace std;

int main()
{
    int a = 3, b = 5, c = 12;
    float average = (a + b + c)/3.0;
    cout << "Arithmetic mean of " << a << ", " <<b<< ", "<< c << "is "<< average << endl;
    return 0;
}*/

//8.5
/*
#include<iostream>
using namespace std;

int main()
{
    int num = 19;
    cout << "Remainder when "<<num<<" is divided with 2 :"<<num%2<<endl;
    cout << "Remainder when "<<num<<" is divided with 3 :"<<num%3<<endl;
    cout << "Remainder when "<<num<<" is divided with 5 :"<<num%5<<endl;
    cout << "Remainder when "<<num<<" is divided with 8 :"<<num%8<<endl;
    return 0;
}
*/

//8.6
/*#include<iostream>
using namespace std;

int main()
{
    const float pi = 3.14;
    float radius , perimeter, area;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    perimeter = 2 * pi * radius;
    area = pi * radius * radius;
    cout<<"Area of the circle is: "<<area<<endl;
    cout<<"Perimeter of the circle is: "<<perimeter<<endl;
    return 0;
}*/
//8.7

/*#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<"Please enter two integers: ";
    cin >> x >> y;
    cout << "The sum of the two numbers is : " << x+y << endl;
    cout << "The difference of the two numbers is : " << x-y << endl;
    cout << "The product of the two numbers is : " << x*y << endl;
    cout << "The quotient of the two numbers is : " << x/y << endl;
    cout << "The remainder of the two numbers is : " << x%y << endl;
    return 0;
}*/

//8.8
/*#include<iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character: ";
    cin>>c;
    cout << "You entered: " << c << " the lowercase letter is "<<char(c + ('a'-'A')) << endl;

    return 0;
}*/

//8.9
/*#include<iostream>
using namespace std;

int main()
{
    float price;
    cout << "Enter Price: ";
    cin >> price;
    cout << "The total price of the product (with 18% VAT) is: " << price * 1.18 << endl;
    return 0;
}*/

//8.10
/*#include<iostream>
using namespace std;

int main()
{
    float price, interest_rate, installment , total;
    int installments;
    cout<<"Enter Price: ";
    cin>>price;
    cout<<"Enter the number of installments: ";
    cin>>installments;
    cout<<"Enter Interest Rate: ";
    cin>>interest_rate;
    total = price * (1+ interest_rate / 100);
    installment = total / installments;

    cout << "One installment will be: "<< installment << endl;
    cout << "Total amount paid will be: "<< total << endl;
    return 0;
}*/

//8.12
/*
#include<iostream>
using namespace std;

int main()
{
    int three_digit;
    cout << "Enter three digit integer: "<<endl;
    cin>>three_digit;
    int most_significant_digit = three_digit / 100;
    int least_significant_digit = three_digit % 10;

    cout << "Most significant digit: " << most_significant_digit<<endl;
    cout << "Least significant digit: " << least_significant_digit<<endl;
    return 0;
}
*/


//8.12
/*
#include<iostream>
using namespace std;

int main()
{
    int date;
    cout << "Enter the date of a year (ddmmyyyy): ";
    cin >> date;
    int day = date / 1'000'000;
    int month = (date / 10000) % 100;

    cout << day << "." << month << endl;
    return 0;
}
*/



