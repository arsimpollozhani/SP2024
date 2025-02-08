//
// Created by win11pro on 11/11/2024.
//

//ZADACA 1
//Se vnesuvat broevi se dur ne se vnesi nesto so ne e broj, da se ispecat
//prvite dve najznacani cifri



/*
#include<iostream>

using namespace std;

int firstTwo(int number) {
    while(number >= 100) {
        number = number / 10;
    }
    return number;
}

int main() { //
    int number;
    while (cin >> number) {
        cout << firstTwo(number) << endl;
    }
    return 0;
}*/


/*#include<iostream>

using namespace std;

int firstTwo(int number) {
    while(number >= 100) {
        number = number / 10;
    }
    return number;
}

int main() {
    int number;
    cin >> number;
    cout << firstTwo(number) << endl;
    return 0;
}*/




//ZADACA 2
// Vnesuvas broj X i vnesuvas neodreden broj
//celi broevi se dodeka ne se vnese nesto razlicno od broj.
// Proveruvas (so funkcii sekako) kolku pati se sodrzi brojot X
// vo sekoj od tie broevi.
/*#include<iostream>
#include <math.h>
#include <valarray>
using namespace std;

int checker(int x, int num) {
    int temp = x;
    int xCounter = 0;
    int counter = 0;

    while(temp!=0) { // count the digits of x
        temp=temp/10;
        xCounter++;
    }

    int divisor = pow(10,xCounter);

    while(num!=0) {
        if(num%divisor==x) {
            counter++;
            num = num/divisor;
        } else {
            num = num / 10;
        }
    }
    return counter;
}

int main() {
    int x, num;
    cin >> x;
    while(cin >> num) {
        cout << num << " -> " << checker(x,num)<<endl;
    }
    return 0;
}*/


/*
#include<iostream>
#include <cmath>
#include <valarray>

using namespace std;
        //how times  //numbers
int checker(int x, int num) {
    int temp = x;
    int countDigitsOfX = 0;
    int count = 0;
    while(temp > 0) {
        temp = temp / 10;
        countDigitsOfX++;
    }
    int divisor = pow(10, countDigitsOfX);
    while(num > 0) {
        if(num%divisor == x) {
            count++;
            num = num / divisor;
        } else {
            num = num / 10;
        }
    }
    return count;
}

int main() {
    int num, x;
    cin >> x;
    while(cin >> num) {
        cout << num << " - > "<<checker(x, num) << " times"<<endl;
    }
    return 0;
}
*/





/*
#include<iostream>
using namespace std;

int countDigits(int number) {
    int count = 0;
    while(number > 0) {
        count++;
        number /= 10;
    }
    return count;
}

int countOccurrences(int number, int pattern) {
    int patternDigits = countDigits(pattern);
    int multiplier = 1;

    for(int i = 1; i < patternDigits; i++) {
        multiplier *= 10;
    }

    int count = 0;
    while(number >= pattern) {
        int window = number % (multiplier * 10);
        if(window == pattern) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main() {
    //cout << countDigits(10) << endl;
    int p, x;
    cin >> p;
    while(cin >> x) {
        cout << countOccurrences(x, p) << endl;
    }
    return 0;
}
*/

/*
#include<iostream>
using namespace std;


int func(int num,int c) {
    int digit = 0;
    int counter2= 0;

    while(num!=0) {
        digit= num%10;

        if(digit ==c) {
            counter2++;
        }

        num/=10;
    }

    return counter2;

}

int main() {
    int x,c,p;
    int counter=1;
    cin >> x >> c >> p;
    //x -> from x ten more numbers to display;
    // c -> what digit to contain;
    //p - how many times;
    for(int i=x+1;counter<=10;i++) {
        if(func(i,c)==p) {
            cout << i<< endl;;
            counter++;
        }
    }

    return 0;
}
*/

//ZADACA 3

/*
#include<iostream>
using namespace std;

int calculate(int num, int c)
{
    int counter = 0;
    while(num > 0) {
        int digit = num % 10;
        if(digit == c) {
            counter++;// chaeck if digit is equal to the c numeer
        }             // if yes increace counter
        num = num / 10; //remove one digit
    }
    return counter; // return counter of how many times digit is in c
}
int main() {
    int x,c,p;
    int counter = 0;
    cin >> x >> c >> p;
    for(int i = x + 1; counter < 10; i++) {
        if(calculate(i,c)==p) {
            cout << i << endl;
            counter++;
        }
    }
    return 0;
}*/




//FIRST TASK

/*#include<iostream>
using namespace std;

int firstTwo(int num) {
    while(num >= 100) {
        num /= 10;
    }
    return num;
}
int main() {
    int n;
    cin  >> n;
    cout << firstTwo(n) << endl;
    return 0;
}*/


/*#include<iostream>
#include <cmath>
#include <valarray>

using namespace std;
//how times  //numbers
int checker(int x, int num) {
    int temp = x;
    int countDigitsOfX = 0;
    int count = 0;
    while(temp > 0) {
        temp = temp / 10;
        countDigitsOfX++;
    }
    int divisor = pow(10, countDigitsOfX);
    while(num > 0) {
        if(num%divisor == x) {
            count++;
            num = num / divisor;
        } else {
            num = num / 10;
        }
    }
    return count;
}

int main() {
    int num, x;
    cin >> x;
    while(cin >> num) {
        cout << num << " - > "<<checker(x, num) << " times"<<endl;
    }
    return 0;
}*/


/*#include <cmath>
#include<iostream>
#include <math.h>
using namespace std;

int checker(int x, int num) {
    int temp = x;
    int count = 0;
    int countDigitsOfX = 0;
    while(temp > 0) {
        temp /= 10;
        countDigitsOfX++;
    }
    int divisor = pow(10, countDigitsOfX);

    while(num > 0) {
        if(num % divisor == x) {
            num /= divisor;
            count++;
        } else {
            num = num / 10;
        }
    }
    return count;
}

int main() {
    int x, num;
    cin >> x;//23
    while(cin >> num) {
        cout << num << " -> " << checker(x,num)<<endl;
    }
    return 0;
}*/

/*
#include <cmath>
#include <iostream>
using namespace std;

bool checker(int x, int num) {
    int temp = x;
    int countDigitsOfX = 0;

    // Count the number of digits in x
    while (temp > 0) {
        temp /= 10;
        countDigitsOfX++;
    }

    int divisor = pow(10, countDigitsOfX);

    // Check if x is a substring of num
    while (num > 0) {
        if (num % divisor == x) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int x, n, num;
    bool found = false;

    cin >> x >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;

        if (checker(x, num)) {
            cout << num << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Nema" << endl;
    }

    return 0;
}
*/


/*#include <cmath>
#include <iostream>
using namespace std;

bool checker(int x, int num) {
    int temp = x;
    int countDigitsOfX = 0;

    // Count the number of digits in x
    while (temp > 0) {
        temp /= 10;
        countDigitsOfX++;
    }

    int divisor = pow(10, countDigitsOfX);

    // Check if x is a substring of num
    while (num > 0) {
        if (num % divisor == x) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int x, n, num;
    bool found = false;

    cin >> x >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;

        if (checker(x, num)) {
            cout << num << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Nema" << endl;
    }

    return 0;
}*/


#include<iostream>
#include <math.h>
#include <valarray>
using namespace std;

int checker(int x, int num) {
    int temp = x;
    int countX = 0, count = 0;
    while(temp > 0) {
        temp /= 10;
        countX++;
    }

    int divisor = pow(10, countX);

    while(num > 0) {
        if(num % divisor == x) {
            num /= divisor;
            count++;
        } else {
            num /= 10;
        }

    }
    return count;
}

    int main(){
        int x, num;
        cin >> x;
        while(cin >> num) {
            cout << num << " -> " <<  checker(x, num);
        }
        return 0;
    }
