//
// Created by win11pro on 1/2/2025.
//
#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

bool isPalindrome(char *str, int length)
{
    for(int i = 0; i < length / 2; ++i)
    {
        if(tolower(str[i]) != tolower(str[length-i-1]))
        {
            return false;
        }
    }
    return true;
}

int countPalindromeWords(char *str, int length)
{
    int palindromeCount = 0;
    int wordStart = 0;
    int wordLength = 0;

    for(int i = 0; i < length; ++i)
    {
        if(isalpha(str[i]))
        {
            if(wordLength == 0)
            {
                wordStart = i;
            }
            wordLength++;
        } else if (wordLength > 0)
        {
            if(isPalindrome(&str[wordStart], wordLength)){
                palindromeCount++;
            }
            wordLength = 0;
        }
    }
    if(wordLength > 0)
    {
        if(isPalindrome(&str[wordStart], wordLength))
        {
            palindromeCount++;
        }
    }
    return palindromeCount;

}
int main()
{

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        char sentence[150];
        cin.getline(sentence, 150);
        int palindromeCount = countPalindromeWords(sentence, strlen(sentence));
        cout << sentence << ": "<<palindromeCount << endl;
    }

    return 0;
}