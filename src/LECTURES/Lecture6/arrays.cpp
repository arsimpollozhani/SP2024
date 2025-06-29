//
// Created by win11pro on 11/25/2024.
//
//ARRAYS
/*
 * Write a program that calculates the
 * average of 10 numbers entered from the keyboard
 */
/*#include<iostream>
using namespace std;

int main() {
    int number, avg = 0, n;
    cout << "Enter Numbers: ";
    for(n = 0; n <10; n++) {
        cin >> number;
        avg = avg + number;
    }
    cout << "Average = " <<(float) avg/n << endl;
    return 0;
}*/

//Arrays are structured with related data
//the number of elements is known in advance
//all elements are variables of the same type
/*#include<iostream>
using namespace std;

int main() {
    int n[10];
    for(int i = 0; i<10; i++) {
        n[i]=i; // initialize an array
        //n[5]=n[5]*3;
        n[5]++;
        cout << n[i] << endl;
    }
    return 0;
}*/


/*#include<iostream>
using namespace std;

int main() {
    int numbers[10], n;
    float average = 0;
    cout << "Enter numbers: "<<endl;
    for(n=0; n<10; n++) {
        cin>>numbers[n];
    }
    for(n=0; n<10; n++) {
        average += numbers[n];
    }
    average = average / 10;
    cout << "Average: " << average << endl;
    for(n=0; n<10; n++) {
        cout << numbers[n] << (numbers[n]>average?" > ":" <= ") << average << endl;
    }
    return 0;
}*/



//Example:Print the number of days in each month of the year


/*#include<iostream>
using namespace std;

int main() {
    int i,
    months[]={31,28,31,30,31,30,31,31,30,31,30,31};
    for( i = 1; i < 13; i++) {
        cout << "The month number "<< i << " has "<<months[i-1]<<" days"<<endl;
    }
    return 0;
}*/

//check if arrays are identical (same)
/*#include<iostream>
using namespace std;

int main() {
    int n1 = 3, n2 = 3;
    int a[n1]={1,2,3};
    int b[n2]={1,2,3};
    int areSame = 1;
    if(n1 == n2) {
        for(int i = 0; i < n1; i++) {
            if(a[i]!=b[i]) {
                areSame = 0;
                break;
            }
        }
    }
    else areSame = 0;

    cout << areSame << endl;
    return 0;
}*/


/*#include<iostream>
#include<iomanip>
#define SIZE 10
using namespace std;

int main() {
    int n[SIZE] = {19,3,15,7,11,9,13,5,17,1};
    int i, j;
    cout << "Element"<< setw(13)<<"Value"<<"\t\t"<<setw(19)<<left<<"Histogram"<<endl;
    for(i = 0; i < SIZE; i++) {
        cout << right;
        cout << setw(7) << i << setw(13) << n[i] << "\t\t";
        for(j = 1; j<= n[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}*/


/*
Write a program that will count the
occurrence of each letter entered from the keyboard
*/


/*#include<iostream>
#include<cctype>
#define SIZE 10
using namespace std;
#define SIZE 91
int main() {
    int m, fc[SIZE];
    char ch, index;
    for(m = 0; m < SIZE; m++) {
        fc[m]=0;
    }
    while((ch = cin.get()) != '!') {
        if(isalpha(ch)) {
            if(islower(ch)) {
                ch = toupper(ch);
            }
            fc[ch]++;
        }
    }
    cout << "The text contains"<<endl;
    cout << "Letter\t\tNumber of occurences"<<endl;
    for(index = 'A'; index<= 'Z'; index++)
        cout << index <<"\t\t"<<fc[index]<<endl;
    return 0;
}*/


/*#include <iostream>
#include <cctype>
using namespace std;
#define SIZE 91
int main () {
    int m, fc[SIZE];
    char ch, index;
    for(m = 0 ; m < SIZE ; m++ ) fc[ m ]=0;
    while((ch=cin.get()) != '!'){
        if ( isalpha(ch) ) {
            if (islower(ch) ) ch = toupper(ch);
            fc[ch]++;
        }
    }
    cout << "The text contains" << endl;
    cout << "Letter\t\ tNumber of occurences" << endl;
    for( index = 'A'; index <= 'Z'; index++ )
        cout << index << "\t\t" << fc[index] << endl;
    return 0;
}*/


/*#include <iostream>
#include <cctype>
using namespace std;
int main () {
    int dayTab[2][13]=
        {{0,31,28,31,30,31,30,31,31,30,31,30,31},//not leap year leap = 0 = row
        {0,31,29,31,30,31,30,31,31,30,31,30,31}};//leap year leap = 1 = row
    int i, leap, day, month, year;
    cout << "Enter date: ";
    cin >> day >> month >> year;
    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    for(i = 1; i<month; i++) {
        day = day + dayTab[leap][i];
    }
    cout << "The entered date is the "<<day << " day in the year." << endl;
    return 0;
}*/
/*
January (31 days)   February (28 days)   March (15 days)
[1,2,3...31]       [1,2,3...28]         [1,2,3...15]
|-------------------|-------------------|------↑
Day 1              Day 32              Day 60  Day 74

*/


/*Write a program that will fill up a matrix with the
values 0 and 1 in a form of a chess board and will
than print it on the screen*/

/*#include <iostream>
#include <cctype>
using namespace std;
#define SIZE 8
int main () {
    int board[SIZE][SIZE];
    for(int i = 0; i < SIZE; i++) { //0 -> 7 = 8 values
        for(int j = 0; j < SIZE; j++) { // 0 -> 7 = 8 values
            board[i][j]=(i+j)%2; // check divisibility
        }
    }

    for(int i = 0; i< SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cout << (board[i][j]?'1':'0');//display numbers 0 or 1
        }
        cout << endl;
    }
    return 0;
}*/


//Arrays
/*Write a program to check whether two arrays are equal or not.
According to the result print the desired message. The maximum size
of the array is 100*/
#include<iostream>
using namespace std;
const int MAX = 100;
bool areEqual(int a[], int b[], int n1, int n2) {
    if (n1 == n2) {
        for (int i = 0; i < n1; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int a[MAX],b[MAX];
    int n1, n2;
    cin >> n1 >> n2;
    for(int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    cout << areEqual(a,b,n1,n2)<<endl;
    return 0;
}