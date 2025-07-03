#include<iostream>
using namespace std;

int uniqueDigits (int n) {
    char ocurrences[10] = {0,0,0,0,0,0,0,0,0,0}; // for each digit track ocurences
    

    while (n) {
        int digit = n % 10;
        ocurrences[digit]++;
        n/=10;
    }

    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        if (ocurrences[i] > 0) {
            ++counter;
        }
    }

    return counter;
}

void swap (int & a, int & b) {
    int temp = a;
    a = b;
    b = temp;
}

void sort (int *array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (array[j] < array[j+1]) {
                swap (array[j], array[j+1]);
            }
        }
        
    }
    
}

int main () {
    int x;
    cin >> x;
    
    int n;
    cin >> n;

    int j = 0;
    int result [100];

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        if (uniqueDigits(number) == x) {
            result[j++] = number;
        }
    }

    sort(result, j);

    for (int i = 0; i < j; i++)
    {
        cout << result[i] << endl;
    }
    
    return 0;
}

// 4
// 10
// 99
// 190
// 10100
// 5931
// 1232
// 999
// 1231
// 9999
// 1234567
// 2342421