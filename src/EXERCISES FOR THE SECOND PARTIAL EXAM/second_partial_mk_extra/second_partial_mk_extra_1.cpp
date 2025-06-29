// //
// // Created by win11pro on 1/4/2025.
// //
// #include <iostream>
// #include <string.h>
// using namespace std;
//
// bool containsSpecialChar(char *str)
// {
//     int len = strlen(str);
//     for (int i = 0; i < len; i++)
//     {
//         if (!isalnum(str[i]) && !isspace(str[i]))
//         {
//             return true;
//         }
//     }
//     return false;
// }
//
// int isPalindrome(char *str)
// {
//     int len = strlen(str);
//     for (int i = 0; i < len / 2; i++)
//     {
//         if ((str[i] != str[len - i - 1]))
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
//
// int main()
// {
//     char str[81];
//     int n;
//     cin >> n;
//     cin.ignore();
//     int maxLength = 0;
//     char longestPalindrome[81];
//     for (int i = 0; i < n; i++)
//     {
//         cin.getline(str, 81);
//
//         if(isPalindrome(str) && containsSpecialChar(str))
//         {
//             int len = strlen(str);
//             if(len > maxLength)
//             {
//                 maxLength = len;
//                 strcpy(longestPalindrome, str);
//             }
//         }
//     }
//
//     if(maxLength > 0)
//     {
//         cout << longestPalindrome << endl;
//     } else {
//         cout << "Nema!" << endl;
//     }
//
//     return 0;
// }


#include<iostream>
#include <string.h>
using namespace std;


bool containsSpecialChar(char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(!isalnum(str[i]) && !isspace(str[i])) {
            return true;
        }
    }
    return false;
}
bool isPalindrome(char *str) {
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    cin.ignore();
    int maxLength = 0;
    char longestPalindrome[81];
    for(int i=0;i<n;i++) {
        char str[81];
        cin.getline(str,81);
        int len = strlen(str);
        if(isPalindrome(str) && containsSpecialChar(str)) {
            if(len > maxLength) {
                maxLength = len;
                strcpy(longestPalindrome,str);
            }
        }
    }
    if(maxLength > 0) {
        cout<<longestPalindrome<<endl;
    } else {
        cout << "Nema";
    }
    return 0;
}