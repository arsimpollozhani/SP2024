#include<iostream>
using namespace std;

int factorial (int number) {
    int result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}

int sum (int number) {
    int sum = 0;
    for (int i = 1; i<=number; i++) {
        sum+=i;
    }
    return sum;
}

int main () {

    int N;
    cin >> N;

    int s = 0;
    int result = 0;
    for (int i = 1; i <= N; i++) {
        s = sum(i);
        result += factorial(s);
    }
    cout << result << endl;
    return 0;
}
