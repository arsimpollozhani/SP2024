#include<iostream>
#include <math.h>
#include <valarray>
using namespace std;

int checker(int x, int num) {
    int temp = x;
    int xCounter = 0;
    int counter = 0;

    while(temp!=0) { // count the digits of x
        temp=temp/10;
        xCounter++;
    }

    int divisor = pow(10,xCounter);

    while(num!=0) {
        if(num%divisor==x) {
            counter++;
            num = num/divisor;
        } else {
            num = num / 10;
        }
    }
    return counter;
}

int main() {
    int x, num;
    cin >> x;
    while(cin >> num) {
        cout << num << " -> " << checker(x,num)<<endl;
    }
    return 0;
}