#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void toLower(char *str)
{
    for(int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }
}

void transform(char *str, int i = 0)
{
    if(str[i] == '\0')
    {
        return;
    }
    if(isalpha(str[i]))
    {
        //toLower(str);
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = 'a' + (str[i] - 'a' + 3) % 26;
        }
    }
    transform(str, i + 1);
}

int main()
{
    char str[101];
    cin.getline(str,101);
    toLower(str);
    transform(str);
    cout << str << endl;
    return 0;
}