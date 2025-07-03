//
// Created by win11pro on 1/4/2025.
//
// #include <iostream>
// using namespace std;
//
// void shiftElementsRight(int *a, int n, int shiftSize) {
//     int temp[shiftSize];
//     for (int i = 0; i < shiftSize; i++) {
//         temp[i] = a[n - shiftSize + i];
//     }
//
//     for (int i = n - shiftSize - 1; i >= 0; i--) {
//         a[i + shiftSize] = a[i];
//     }
//
//     for (int i = 0; i < shiftSize; i++) {
//         a[i] = 0;
//     }
// }
//
// void shiftElementsLeft(int *a, int n, int shiftSize) {
//     int temp[shiftSize];
//     for (int i = 0; i < shiftSize; i++) {
//         temp[i] = a[i];
//     }
//
//     for (int i = 0; i < n - shiftSize; i++) {
//         a[i] = a[i + shiftSize];
//     }
//
//     for (int i = 0; i < shiftSize; i++) {
//         a[n - shiftSize + i] = 0;
//     }
// }
//
// bool checkIfZeros(int *a, int n) {
//     for (int i = 0; i < n; i++) {
//         if (a[i] != 0) {
//             return false;
//         }
//     }
//     return true;
// }
//
// int main() {
//     int a[100];
//     int count = 0;
//     int n;
//     int N;
//     cin >> N;
//     for(int start = 0; start < N; start++) {
//         cin >> n;
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//
//         int shiftSize = a[0];
//         if (shiftSize > 0) {
//             shiftSize = shiftSize % n; // Ensure shift size is within bounds
//             shiftElementsRight(a, n, shiftSize);
//         } else if (shiftSize < 0) {
//             shiftSize = (-shiftSize) % n; // Ensure shift size is within bounds
//             shiftElementsLeft(a, n, shiftSize);
//         }
//
//         cout << "Array after shifting: ";
//         for (int i = 0; i < n; i++) {
//             cout << a[i] << " ";
//         }
//         if(checkIfZeros(a, n)) {
//             count++;
//         }
//         cout << endl;
//     }
//     cout << count << endl;
//     return 0;
// }

//
// Created by Stefan Andonov on 30.12.24.
//

#include<iostream>
#include<cstring>

using namespace std;


int occursR(char *big, char *small) {
    char * result = strstr(big, small);
    if (result == nullptr) {
        return 0;
    } else {
        return 1 + occursR(result+1, small);
    }
}


int occurs(char *big, char *small) {
    int counter = 0;
    for (int i = 0; big[i] != '\0'; i++) {
        if (strncmp(small, big + i, strlen(small)) == 0) {
            ++counter;//small -> first character of small
        }             //big+i -> first character of big then second char etc.
                    // compare only op to the length of small characters
    }               //then move to the next character of big
    return counter;
}

int main() {
    char start[20];
    cin.getline(start, 20);
    int n;
    cin >> n;
    cin.ignore();

    int counter[100] = {0};
    int maxResult = 0;

    for (int i = 0; i < n; i++) {
        char line[100];
        cin.getline(line, 100);
        //        cout << start << "->" << line << endl;
        int result = occurs(line, start);

        counter[result]++;
        if (result > maxResult) {
            maxResult = result;
        }
    }

    for (int i = 0; i <= maxResult; i++) {
        cout << i << ": " << counter[i] << endl;
    }
    return 0;
}