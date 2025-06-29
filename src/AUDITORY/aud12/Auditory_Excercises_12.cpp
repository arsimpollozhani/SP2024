// Stefan Andonov
// Created by win11pro on 12/1/2024.
//Strings
//Task 1

/*

#include<iostream>
using namespace std;

int main() {

    return 0;
}

*/

/*#include<iostream>
#include<cstring>
using namespace std;

int main() {
    //INTRO
    char text[101];
    char text2[101];
    //cin >> text; //read until the first space/newline
    cin.getline(text,100);
    cin.getline(text2,100);
    //cout << "BEFORE STRCPY" << endl;
    cout <<  text << endl; //text is a pointer, now go 5 character to the right
    // cout << strlen(text) << endl;
    cout << text2 << endl;
    // cout << strlen(text2) << endl;
    //STRNCPY
    //cout << "STRCPY" << endl;
    //
    // strcpy(text, text2); // everything from text2 is copied in text
    //
    // cout << text << endl;
    // cout << text2 << endl;


    /*cout <<"STRCAT"<<endl;
    strcat(text,text2);//will concatenate text2 at text
    cout << text << text2 <<endl;#1#

    //STRCMP()


    // cout << strcmp(text,text2) << endl;

    //STRCHR

    cout << strchr(text,'n') << endl;

    cout << strstr(text,text2) << endl;
    cout <<( strstr(text,text2) == nullptr)<< endl;//check if is a substring of the string
    return 0;

}*/

//TASK 1
/*
#include<iostream>
#include <string.h>
using namespace std;

int occurs(char *str, char c) {
    int counter = 0;
    while(*str != '\0') {
        if(*str == c) {
            counter++;
        }
        str++;
    }
    return counter;
}

int occursF (char *str, char c) {
    int counter = 0;
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == c) {
            counter++;
        }
    }
    return counter;
}

int occursR (char *str, char c) {
    if(*str == '\0') {
        return 0;
    } else {
        if(*str == c) {
            return 1 + occursF(str+1, c);
        } else {
            return occursF(str, c);
        }
    }
}

int main() {
    char text[101], c;
    cin.getline(text, 100);
    cin >> c;

    occurs(text, c);
    occursF(text, c);
    occursR(text, c);
    cout << text << endl;
    return 0;
}
*/




//TASK 3
/*
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char text[100];
    int start;
    int length;
    cin >> start >> length;
    cin.ignore(); //always between reading string after integer reading
    cin.getline(text, 100);

    // for(int i = start; i < start + length && i<strlen(text); i++) {
    //     cout << text[i];
    // }

    char result[100];
    strncpy(result, text+start, length);
    result[length] = '\0';
    cout << result;
    return 0;
}
*/


//substring
/*#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void toLowerCase(char * str) {
    for(int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}

bool substr(char *large, char *small) {
    toLowerCase(small);
    toLowerCase(large);
    return strstr(large, small) != nullptr;
}

int occurs(char *large, char *small) {
    toLowerCase(small);
    toLowerCase(large);
    char * result = strstr(large, small);
    if(result == nullptr) {
        return 0;
    } else {
        return 1+occurs(result+1,small);
    }
}

int main() {
    char large[200], small[100];
    cin.getline(large, 200);
    cin.getline(small, 100);
    cout << substr(large, small) << endl;
    cout << occurs(large, small) << endl;

    return 0;
}*/


/*#include<iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool palindrome(char * str, int start, int end) {
    if(start >= end) {
        return true;
    } else {
        if(tolower(str[start] != tolower(str[end]))) {
            return false;
        } else {
            return palindrome(str, start+1, end-1);
        }
    }
}

bool palindromesentence(char * str, int start, int end) {
    if(start >= end) {
        return true;
    } else {
        if(!isalpha(str[start])) {
            return palindromesentence(str, start+1, end);
        }
        if(!isalpha(str[end])) {
            return palindrome(str, start, end-1);
        }
        if(tolower(str[start] != tolower(str[end]))) {
            return false;
        } else {
            return palindromesentence(str, start+1, end-1);
        }
    }
}

int main() {
    char text[100];
    cin.getline(text, 100);
    cout << palindrome(text, 0, strlen(text)-1) << endl;
    cout << palindromesentence(text, 0, strlen(text)-1) << endl;
    return 0;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;



int main() {
    char text[100];
    cin.getline(text, 100);
    int j = 0;
    for(int i = 0; i < strlen(text); i++) {
        if(isalpha(text[i])) {
            if(islower(text[i])) {
                text[j] == toupper(text[i]);
            } else {
                text[j] = tolower(text[i]);
            }
            j++;
        }
    }
    text[j] = '\0';
    cout << text;
    return 0;
}*/


/*
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    while(true){
        char text[100];

        cin.getline(text, 100);

        if(strcmp(text,"#") == 0) {
            break;
        }
        char *ptr = text;
        int i;
        for(i=0; i<strlen(text); i++) {
            if(!isspace(text[i])) {
                break;
            }
        }

        ptr = text + i;
        for(i = strlen(ptr) - 1;i>0;i--) {
            if(!isspace(ptr[i])) {
                break;
            }
        }
        ptr[i+1] = '\0';
        cout << "[" << ptr << "]" << endl;
    }
    return 0;
}*/

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;



int main()
{
    char str[100];
    cin.getline(str,100);

    cout << "[" << str << "]" << endl;
    char *ptr = str;

    int i;
    for( i = 0; i < strlen(str); i++)
    {
        if(!isspace(str[i]))
        {
            break;
        }
    }

    ptr = str + i;

    for(i = strlen(ptr) - 1; i>0 ; i--)
    {
        if(!isspace(ptr[i]))
        {
            break;
        }
    }

    ptr[i+1] = '\0';
    cout << "[" << ptr << "]" << endl;

    return 0;
}