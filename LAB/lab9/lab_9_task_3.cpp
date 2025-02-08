//
// Created by win11pro on 1/2/2025.
//
#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

void test();

bool isPalindrome(char *str, int length)
{
    for(int i = 0; i < length/2; ++i)
    {
        if(tolower(str[i]) != tolower(str[length-1-i]))
        {
            return false;
        }
    }
    return true;
}

int isPalindromeSentence(char *str, int length)
{
    int palCount = 0;
    int wordStart = 0;
    int wordLength = 0;
    for(int i = 0; i < length; i++)
    {
        if(isalpha(str[i]))
        {
            if(wordLength == 0)
            {
                wordStart = i;
            }
            wordLength++;
        } else if(wordLength > 0)
        {
            if(isPalindrome(&str[wordStart], wordLength))
            {
                palCount++;
            }
            wordLength = 0;
        }
    }
    if(wordLength>0){
        if(isPalindrome(&str[wordStart], wordLength))
        {
            palCount++;
        }
    }

    return palCount;

}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        char str[100];
        cin.getline(str,100);
        int palindromeWordsInSentence = isPalindromeSentence(str, strlen(str));
        cout << str << ": " << palindromeWordsInSentence << endl;
    }
    //test();
    return 0;
}

void test()
{
    char str[100] = "kanna";
    int len = strlen(str);
    cout << isPalindrome(str , len) << endl;
}