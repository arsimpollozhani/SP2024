#include<iostream>
using namespace std;

int main() {
    int a, b, N;
    cin >> a >> b >> N;
    for (int i = 1; i <= N; i++) {
        cout << a << " ";
        // if(N > i) {
        //     cout << " ";
        // }
        a = a + b;
    }
    return 0;
}

/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 10 ; i <= 99 ; i++) {
        int firstDigit = i / 10;
        int lastDigit = i % 10;
        int sum = firstDigit + lastDigit;
        if(sum%n ==0) {
            cout << i << " ";
        }
    }
    return 0;
}
* */
