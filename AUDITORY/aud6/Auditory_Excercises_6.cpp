
//4.1
/*#include<iostream>
#include<cmath>

using namespace std;

float diameter (float radius) {
    return 2*radius;
}

float perimeter(float radius) {
    return diameter(radius)*M_PI;
}

float area (float radius) {
    return pow(radius, 2)*M_PI;
}
int main() {

    float radius;
    cin >> radius;
    cout << "Diameter: " << diameter(radius) << endl;
    cout << "Periemter: " << perimeter(radius) << endl;
    cout << "Area: " << area(radius) << endl;
    //M_PI - pi from cmath library
    return 0;
}*/


//3417 split in half
//34 + 17 = 51
// 3417 % 51 == 0
//4.2
/*
#include<iostream>
#include<cmath>

using namespace std;

int firstHalf (int fourDigitNumber) {
    return fourDigitNumber / 100;
}
int secondHalf(int fourDigitNumber) {
    return fourDigitNumber % 100;
}
int sumOfHalves (int fourDigitNumber) {
    return firstHalf(fourDigitNumber) + secondHalf(fourDigitNumber);
}
bool condition (int fourDigitNumber) {
    return fourDigitNumber%sumOfHalves(fourDigitNumber)==0;
}
int main() {
    for (int i = 1000; i < 10000; ++i) {
        if(condition(i)) {
            cout << i << " divisible with "<<firstHalf(i) << "and "<<secondHalf(i)<<endl;
        }
    }

    return 0;
}
*/

//reverse a number
//reverse (int x)
//bool isPalindrome(int x)
//int sumOfDigits(int x)
//bool divisibleWithSumOfDigits(int x)
#include<iostream>

using namespace std;

//test a funct
int reverse (int number) {
    int result = 0;

    while (number > 0) {
        int ld = number % 10;
        result = 10*result+ld;
        number /= 10;
    }
    return result;
}

bool isPalindrome(int number) {
    return number == reverse(number);
}

int sumOdDigits (int number) {
    int sum = 0;

    while (number > 0) {
        int ld = number %10;
        sum+=ld;
        number /= 10;
    }
    return sum;

    /*for(int i = number; i > 0; i /= 10) {
        sum+i%10;
    }*/
}

bool isDivisibleBySumOfDigits(int number) {
    return number % sumOdDigits(number) == 0;
}


int main() {
    /*int number;
    cin >> number;*/
    int X;
    cin >> X;
    /*cout << "Reverse of the number is : "<<reverse(number)<<endl;
    cout << "is the number a palindrome? "<<isPalindrome(number) << endl;*/
    int counter = 0;
    for (int i =X-1; i >= 0; i--) {
        if(isPalindrome(i) && isDivisibleBySumOfDigits(i)) {
            cout << i << endl;
            ++counter;
        }

        if(counter == 10) {
            break;
        }
    }
    return 0;
}




/*
#include<iostream>

using namespace std;

//test a funct

bool isPrime (int number) {
    //int counter = 0;
    for(int divisor = 2; divisor <= number / 2; ++divisor) {
        if(number % divisor == 0) {
            return false; // counter++;
            //break; to make it faster
        }
    }
    return true;// counter == 0;
}

int main() {
    //prime loop will start from 2 to i/2
    //divisors 2,3,4,5,6,7,8 for 15
    cout << isPrime(11) << endl;
    return 0;
}*/




/*
#include<iostream>

using namespace std;


bool isPrime (int number) {
    //int counter = 0;
    for(int divisor = 2; divisor <= number / 2; ++divisor) {
        if(number % divisor == 0) {
            return false; // counter++;
            //break; to make it faster
        }
    }
    return true;// counter == 0;
}


int main() {
    int number;
    cin >> number;

    for (int i = number + 1; ;++i) {
        if(isPrime(i)) {
            cout << i << " - " << number << (i - number) <<endl;
            break;
        }
    }
    return 0;
}*/



/*
#include<iostream>

using namespace std;


bool isPrime (int number) {
    //int counter = 0;
    for(int divisor = 2; divisor <= number / 2; ++divisor) {
        if(number % divisor == 0) {
            return false; // counter++;
            //break; to make it faster
        }
    }
    return true;// counter == 0;
}

int sumOdDigits (int number) {
    int sum = 0;

    while (number > 0) {
        int ld = number %10;
        sum+=ld;
        number /= 10;
    }
    return sum;
}


int main() {
    int number;
    cin >> number;
    int counter = 0;
    for (int i = 9999; i > 1; --i) {
        if(isPrime(i) && isPrime(sumOdDigits(i))) {
            cout << i << endl;
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}*/

//7 First Partial exams


/*
#include<iostream>
using namespace std;

int sumOfDivisors (int number) {
    int sum = 0;
    for(int divisor = 1; divisor <= number / 2; ++divisor) {
        if(number % divisor == 0) {
            sum +=divisor;

        }
    }
    return sum;
}



int main() {
    int n;
    cin >> n;
    int maxSumOfDivisors = 0;
    int maxNumber = 0;
    for(int i = n- 1; i > 0; --i) {
        cout << i << "->"<<sumOfDivisors(i)<<endl;
        if(sumOfDivisors(i) > maxSumOfDivisors ) {
            maxSumOfDivisors = sumOfDivisors(i);
            maxNumber = i;
    }
    return 0;
}*/