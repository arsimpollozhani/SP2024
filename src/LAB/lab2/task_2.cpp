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