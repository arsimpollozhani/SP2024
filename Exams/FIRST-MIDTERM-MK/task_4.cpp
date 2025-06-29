//Created: task_4.cpp
#include<iostream>
using namespace std;

int main()
{
    char c =' ';
    bool isNumber = false;
    int number = 0, sum = 0;
    while((cin >> noskipws >> c) && (c!='!'))
    {
        if(c >= '0' && c <= '9')
        {
            number = number * 10 + (c - '0');
            isNumber = true;
        } else{
            if(isNumber && number < 100)
            {
                sum = sum + number;
            }
            number = 0;
            isNumber = false;
        }
    }
    if(isNumber && number < 100)
    {
        sum = sum + number;
    }
    cout << sum << endl;
    return 0;
}