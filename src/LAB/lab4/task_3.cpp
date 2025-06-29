#include<iostream>
using namespace std;

int calculate(int num, int c)
{
    int counter = 0;
    while(num > 0) {
        int digit = num % 10;
        if(digit == c) {
            counter++;// chaeck if digit is equal to the c numeer
        }             // if yes increace counter
        num = num / 10; //remove one digit
    }
    return counter; // return counter of how many times digit is in c
}
int main() {
    int x,c,p;
    int counter = 0;
    cin >> x >> c >> p;
    for(int i = x + 1; counter < 10; i++) {
        if(calculate(i,c)==p) {
            cout << i << endl;
            counter++;
        }
    }
    return 0;
}