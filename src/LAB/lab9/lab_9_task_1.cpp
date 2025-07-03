//
// Created by win11pro on 1/2/2025.
//
#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

bool isVowel(char ch) {
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

}

void modifyStr(char *str)
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(isVowel(str[i]))
        {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }
}
int main()
{
    char str[100];
    cin.getline(str,100);
    modifyStr(str);
    cout << str;
    return 0;
}