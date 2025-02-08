//
// Created by win11pro on 11/9/2024.
//
/*#include<iostream>
using namespace std;

int area(int l, int w) {
    return l*w;
}

int main() {
    int l, w;
    cin>>l>>w;
    cout<<area(l,w)<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;

void squares(int n) {
    for(int i = 1; i <= n; i++) {
        cout << i * i << endl;
    }

}

int main() {
    int n;
    cin >> n;
    squares(n);
    return 0;
}*/


/*#include<iostream>
using namespace std;

int calcFactorial(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << factorial << endl;
}

int main() {
    int n;
    cout << "Enter n to calculate factorial: ";;
    cin >> n;
    cout << calcFactorial(n) << endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;

void printAnswer(int answer) {
    if(answer < 0) {
        cout << "Answer is corrupt"<<endl;
    } else {
        cout << answer << endl;
    }
}

int main() {
    int answer;
    cin >> answer;
    printAnswer(answer);
    return 0;
}*/


//function can have multiple return statements
/*#include<iostream>
using namespace std;

int validateInput(char command) {
    switch (command) {
        case '+': case '-': return 1;
        case '*': case '/': return 2;
        default: return 0;
    }
}

int main() {
    char userInput;
    cin >> userInput;
    validateInput(userInput);
    return 0;
}*/



/*#include<iostream>
using namespace std;

float triangle(float width, float height) {
    float area = (width * height)/2;
    return (area);
}

int main() {
    int width, height;
    cout << "Input width of the triangle: "<<endl;
    cin >> width;
    cout << "Input height of the triangle: "<<endl;
    cin >> height;

    cout << "Area = "<< triangle(width, height);

    return 0;
}*/

/*#include<iostream>
using namespace std;

// float square(float); // FUNCTION PROTOTYPE

int main() {
    float square(float); // FUNCTION PROTOTYPE
    float x;
    cin >> x;
    float result = square(x);
    cout << result << endl;
    return 0;
}

float square(float x) {
    float y = x * x;
    return y;
}*/



/*
#include<iostream>
using namespace std;

int maximum(int a, int b, int c) {
    int max = a;
    if(max < b) {
        max = b;
    }
    if(max < c) {
        max = c;
    }
    return max;
}

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    cout << maximum(num1, num2, num3) << endl;
    return 0;
}
*/

//Passing values to the function

/*#include<iostream>

using namespace std;
int swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}

int main() {
    int a = 10, b = 20;
    cout << "x = " <<a <<", b =" <<b<<endl; // original values of a and b
    swap(a, b); // original values are copied in the formal args of the function swap(a -> int x, b ->  int y)
    cout << "x = " <<a <<", b =" <<b<<endl; // values of a and b are not modified after func call
    return 0;
}*/

/*#include<iostream>

using namespace std;
inline int max(int a, int b) {
    if (a>b) return a;
    return b;
}
int main() {
    int result, x = 23, y = 45;
    cout << "x = " << x << " and y = "<<y << endl;
    result = max(x++, y++); // first increments the value then is passed in the function
    cout << "x = " << x << " and y = "<<y << endl;
    cout << result << endl;
    result = max(x, y);
    cout << result << endl;

    return 0;
}*/



/*
#include<iostream>

using namespace std;

inline double cube(int s) {
    return s*s*s;
}

int main() {
    double side;
    for (int i = 1; i <= 4; i++) {
        cin >> side;
        cout << cube(side) << endl;
    }

    return 0;
}*/




#include<iostream>
using namespace std;

int sumOfNumber(int number)
{
    int sum = 0;
    for(int i = 0; i <= number; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int factorial(int number)
{
    int result = 1;
    for(int i = 1; i <= number; i++)
    {
        result = result * i;
    }
    return result;
}
int main()
{
    // cout << factorial(5);
    int number;
    cin >> number;
    int result, sum;
    for(int i = 1; i < number; i++)
    {
        sum = sumOfNumber(i);
        result = factorial(sum);
        cout << sum << "! + " ;

    }
    sum = sumOfNumber(number);
    result = result + factorial(sum);
    cout << sum << "! = " << result << endl;
    return 0;
}