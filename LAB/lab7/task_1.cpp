#include<iostream>
using namespace std;

int sum(int number) {
    if(number == 0) {
        return 0;
    }
    else {
        if(number%2 == 0) {
            return number + sum(number-2);
        } else {
            return sum(number-1);
        }
    }
}
int main() {
    cout << sum(12);
    return 0;
}