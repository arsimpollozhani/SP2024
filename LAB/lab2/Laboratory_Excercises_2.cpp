//
// Created by win11pro on 10/29/2024.
//

//TASK 1
// From the standard input enter a number N. Output all 3-digit numbers divisible with N.

/*#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 100; i < 1000; i++) {
    if(i%N == 0) {
        cout << i << endl; }
    }
    return 0;
}*/



//TASK 2
//Initialize number a , b and N. Output all numbers to N, which are the sum of a and b
//Arithmetic Progession

/*#include<iostream>
using namespace std;

int main() {
    int a, b, N;
    cin >> a >> b >> N;
    for(int i = 1; i <= N; i++) {
        cout << a << " ";
        // if(N > i) {
        //     cout << " ";
        // }
        a = a + b;
    }
    return 0;
}*/

/*3.
 * From the Standard Input enter P the times you should enter a number, Q - reference value
 * that you should compare with N values that are entered through the loop
 * compare if N is equal, greater or lesser than Q
 * show the results in percentage , eg. for entered numbers what is percentage that N is
 * equal to Q, greater or less than Q.
 */

/*#include <iostream>
using namespace std;

int main() {
    float P, Q,N ;
    float a = 0 , b = 0 , c = 0;
    cin>>P>>Q;
    for(int i  = 1; i <= P; i++) {
        cin >> N;
        if(N == Q) {
            a++;
        } else if (N > Q) {
            b++;
        } else {
            c++;
        }
    }
    float equal = (a/P);
    float greater =(b/P);
    float lesser = (c/P);


    cout << "Greater: " << greater*100  << "%"<< endl;
    cout << "Equal: " << equal*100 << "%"<< endl;
    cout << "Lesser: " << lesser*100 << "%"<< endl;
    return 0;}*/




//TUESDAY

/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 10 ; i <= 99 ; i++) {
        int firstDigit = i / 10;
        int lastDigit = i % 10;
        int sum = firstDigit + lastDigit;
        if(sum%n ==0) {
            cout << i << " ";
        }
    }
    return 0;
}
*/


/*
#include <iostream>
using namespace std;
int main() {
    int a , b , N;
    cin >> a >> b >> N;
    for( int i = 0 ; i < N ; i++) {
        cout  << a << " ";
        a = a * b;
    }
    return 0;
}
*/


/*#include <iostream>
using namespace std;
int main() {

    float students, grade, max_grade, min_grade, exellent = 0, good = 0, bad = 0;
    cin >> students >> max_grade >> min_grade;
    for(int i = 0; i < students; i++) {
        cin >> grade;
        if(grade >= max_grade) {
            exellent++;
        } else if (grade < max_grade && grade >= (max_grade/2) ) {
            good++;
        } else {
            bad++;
        }

    }
        float e = (exellent/students)*100;
        float g = (good/students)*100;
        float b = (bad/students)*100;

    cout  << e << endl;
    cout << g << endl;
    cout << b << endl;
    return 0;
}*/