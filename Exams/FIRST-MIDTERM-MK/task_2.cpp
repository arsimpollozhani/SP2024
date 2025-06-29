//Created: task_2.cpp

#include<iostream>

using namespace std;

int reverse(int number) {
    int reversed = 0;
    while(number > 0) {
        int digit = number % 10;
        reversed= reversed * 10 + digit;
        number /= 10;

    }
    return reversed;
}

int countDigits(int number) {
    int count =0;
    while (number > 0) {
        number /= 10;
        count++;
    }
    return count;
}
int main() {
    int number;
    cin >> number ;
    /*
    cout << reverse(number) << endl; //TEST
    cout << countDigits(number) << endl;*/
    if(number > 9) {
        for(int i = number - 1; i >= 9; i--) {
            int reverseNum = reverse(i);
            int count = countDigits(i);
            if(reverseNum % count == 0) {
                cout << i << endl;
                break;
            }
        }
    } else {
        cout << "Brojot ne e validen";
    }
    return 0;
}