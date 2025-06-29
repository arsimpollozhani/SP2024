// //
// // Created by win11pro on 12/16/2024.
// //
// #include<iostream>
// #include <cstring>
//
// using namespace std;
//
//
// void insertVowel(char *str, int &size, int element, int position) {
//     for(int i = strlen(str); i >= position; i--) {
//         str[i+1] = str[i];
//     }
//
//     str[position] = element;
//     size++;
// }
// int main() {
//     char str[500];
//     int times;
//     cin>>times;
//     cin.ignore();
//     cin.getline(str,500);
//     char temp[500];
//     int size = strlen(str);
//     for(int i = 0; i < size; i++) {
//
//             if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'||
//                 str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
//                 for(int j = 0; j < times -1; j++) {
//                     insertVowel(str, size, str[i], i);
//                     i++;
//
//                 }
//             }
//
//     }
//     cout << str << endl;
//     return 0;
// }

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

bool isVowel(char ch)
{
    char c = tolower(ch);
    return (c == 'a' || c=='e' || c == 'i' || c== 'o' || c == 'u');
}

bool isVowelD(char ch)
{
    char vowels[11] = "AEIOUaeiou";
    for(int i = 0; i < strlen(vowels);i++)
    {
        if(vowels[i] == ch)
        {
            return true;
        }
    }
    return false;
}

void insertVowel(char *str, int &size, int element, int position)
{
    for(int i = strlen(str) ; i >= position; i--)
    {
        str[i+1] = str[i];
    }
    str[position] = element;
    size++;
}

int main()
{
    char str[1000];
    int k;
    cin  >> k;
    cin.ignore();
    cin.getline(str,1000);
    int size = strlen(str);
    for(int i = 0; i < size; i++)
    {
        if(isVowelD(str[i]))
        {
            for(int j = 0; j < k - 1; j++) // k-1 because already there is one vowel
            {
                insertVowel(str, size, str[i], i);
                i++;//go to the next character because the next original is the added extra vowel DON'T OVERLAP
            }
        }
    }
    cout << str << endl;
    return 0;
}