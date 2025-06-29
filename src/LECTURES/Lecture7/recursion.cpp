//
// Created by win11pro on 12/9/2024.
//
//FACTORIAL
/*#include<iostream>
using namespace std;

int factorial(int n) {
    if(n==0) { return 1;}
    else {
        return n*factorial(n-1);
    }
}

int main() {
    cout << factorial(5) << endl;
    return 0;
}*/

// POWER OF THE NUMBER
/*#include<iostream>
using namespace std;

int powerFunction(int m, int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return m * powerFunction(m, n - 1);
    }
}

int main() {
    cout << powerFunction(3, 3) << endl;
    return 0;
}*/

//SUM OF THE FIRST N WHOLE NUMBERS
/*
#include<iostream>
using namespace std;

int sum(int n) {
    if(n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main() {
    cout << sum(10) << endl;
    return 0;
}
*/

//PRINT N STARS
/*#include<iostream>
using namespace std;

void stars(int n) {
    if(n==0) {
        return;
    }
    cout << "*" ;
    stars(n-1);
}

int main() {
    stars(5);
    return 0;
}*/


//SUM OF DIGITS OF A GIVEN NUMBER
/*#include<iostream>
using namespace std;

int sumOfDigits(int n) {
    if(n==0) return 0;
    else return n%10 + sumOfDigits(n/10);
}

int main() {
    cout << sumOfDigits(5321) << endl;
    return 0;
}*/

//PRINT IN DESCENDING ORDER FROM GIVEN NUMBER N
/*#include<iostream>
using namespace std;

void descending(int n) {
    if(n > 0) {
        cout << n ;
        descending(n-1);
    }
}

int main() {
    descending(5);
    return 0;
}*/


//PRINT IN ASCENDING ORDER FROM GIVEN NUMBER

/*
#include<iostream>
using namespace std;

void ascending(int n) {
    if(n > 0) {
        ascending(n-1);
        cout << n ;
    }
}

int main() {
    ascending(5);
    return 0;
}
*/


/*#include<iostream>
using namespace std;

void ascendDescent(int n) {
    if(n > 0) {
        cout << n ;
        ascendDescent(n-1);
        cout << n ;
    }
}

int main() {
    ascendDescent(5);
    return 0;
}*/


//FIBONACCI
/*#include<iostream>
using namespace std;

long fibonacci(long n) {
    if(n==0 || n==1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    cout << fibonacci(14);
    return 0;
}*/

//Find the minimal value of an array

/*#include<iostream>
using namespace std;
#define SIZE 20
int minValue(int a[], int n) {
    if(n == 1) {
        return a[0];
    } else {
        int temp = minValue(a, n-1);
        if(a[n-1] < temp) {
            return a[n-1];
        }
        return temp;
    }
}

int minValue2(int a[], int n) {
    if(n==1) {
        return a[0];
    } else {
        int temp = minValue2(a + 1, n-1);
        if(a[0] < temp) {
            return a[0];
        }
        return temp;
    }
}

int main() {
    int a[SIZE];
    cout << "Enter n: ";
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "min : " << minValue(a, n) << "\n";
    cout << "min : " << minValue2(a, n);
    return 0;
}*/

//MIRROR TRANSFORM AN ARRAY
#include<iostream>
using namespace std;

void mirror(int a[], int n) {
    if(n>0) {
        int temp = a[0];
        a[0] = a[n-1];
        a[n-1] = temp;
        mirror(a + 1, n - 2);
    }
}

int main() {
    int a[100];
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    mirror(a, n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}