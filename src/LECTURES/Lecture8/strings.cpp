//
// Created by win11pro on 12/9/2024.
//
//STRINGS

//DECLARATION AND INITIALIZATION OF STRINGS
/*#include <iostream>
#include <cstring>
using namespace std;


int main() {
    //ARRAY DECLARATION
    char string1[10] = "Hello";
    // this is stored in RAM, array of characters in stack
    //can be modified ex. string1[0] = 'J';
    //variable string1 represents the starting address of
    //this memory block and cannot be assigned to a different location

    //POINTER DECLARATION
    char *string2 = "Hello";
    //The pointer points to a read-only string literal in
    //the program's memory.
    //Content cannot be modified

    char string3[10] = "foo";
    char *string4 = "bar";
    string4 = string3; // string4 points to the address of string3
    cout << string3 << endl;//foo
    cout << string4 << endl;//foo


    return 0;
}*/



//ENTERING TEXT
/*#include <iostream>
#include <cstring>
using namespace std;


int main() {
    //cin
    //skips blank spaces
    /*char str[100];
    cin >> str;
    cout << str << endl;#1#

    //cin.getline()
    //cin.getline(stringName, maxNumOfCharacters)
    //it reads all chars until a newline character
    //or until it reaches the maximum number of chars
    //does not ignore white spaces, allows reading entire line
    /*char str[100];
    cin.getline(str, 100);
    cout << str << endl;#1#

    //cin.get()
    //overloaded function
    //1. reads a single char form stream and returns as result
    //same input args as cin.getline()
    //it reads at most N-1 chars or until encouners a newline
    //BUT does not read it(it leaves in the stream to be the first
    //character to be read next)
    //it does not ignore white spaces, reads entire line
    /*char str[100];
    cin.get(str, 100);
    cout << str << endl;#1#

    //fgets(str, N, stdin)
    //reads at most N-1 characters until it encounters a newline
    //character or EOF marker and also stores '\n' character in
    //the str array, does not ignore spaces
    return 0;
}*/


//Problems with CIN:
//if we enter word longer than len-1 character, the program
//might fail during execution
/*#include<iostream>
using namespace std;

int main() {
    const int MAX = 12;
    char name[MAX], day[MAX];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your favorite day of the week: ";
    cin >> day;
    cout << name << ", your favorite day is "<<day <<"."<<endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;

int main() {
    const int MAX = 10;
    char name[MAX], day[MAX];
    cout << "Enter your name: ";
    cin.getline(name, MAX, '.');
    cout << "Enter your favorite day of the week: ";
    cin.getline(day, MAX,'\n');
    cout << name << ", your favorite day is "<<day <<"."<<endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;

int main() {
    const int MAX = 10;
    char name[MAX], day[MAX];
    cout << "Enter your name: ";
    cin.get(name, MAX);
    cout << "Enter your favorite day of the week: ";
    cin.get(day, MAX);
    cout << name << ", your favorite day is "<<day <<"."<<endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;

int main(){
    const int MAX = 20;
    char name[MAX], day[MAX];
    cout << "Enter your name: " << endl;
    cin.get(name, MAX).get();
    cout << "Enter your favourite day of the week:" << endl;
    cin.get(day, MAX).get();
    cout << name << ", your favourite day is " << day << "."<< endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;

int main() {
    const int MAX = 20;
    char name[MAX];
    int year;

    cout << "What is your birth year?"<<endl;
    cin>>year;
    cin.get();
    cout << "What is you name?"<<endl;
    cin.get(name,MAX);
    cout << "Year of birth: " << year << endl;
    cout << "Name: " << name << endl;
    return 0;
}*/

/*#include<iostream>
#define N 10
using namespace std;

int main() {
    char ch, str[N];
    int i = 0;
    while((i<N-1) && ((ch=getchar()) != '\n'))
        str[i++] = ch;
    str[i] = '\0';
    return 0;
}*/


//PRINTING STRINGS

/*#include<iostream>
using namespace std;

int main() {
    char str[] = "Hello World";
    //puts(str); //adds \n after str
    //cout << str << endl;

    char str2[20];
    cin.getline(str2, 20);
    cout << str2 << endl;
    return 0;
}*/