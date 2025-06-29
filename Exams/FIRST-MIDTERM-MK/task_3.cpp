//Created: task_3.cpp

#include<iostream>

using namespace std;

int sumOfDivisors(int n) {
    int sum = 0;
    for(int i = 1; i <= n / 2; i++) {
        if(n%i == 0) {
            sum += i;
        }
    }
    return sum;
}


int main() {
    int n;
    cin >> n;
    int maxDivisorSum = 0;
    int maxDivisorNumber = 0;
    for(int i = n - 1; i >= 0; i--) {
        int divisorSum = sumOfDivisors(i);
        if(divisorSum > maxDivisorSum) {
            maxDivisorSum = divisorSum;
            maxDivisorNumber = i;
        }
    }
    cout << maxDivisorNumber << endl;
    return 0;
}