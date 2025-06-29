//Created: question_3.cpp
#include<iostream>
using namespace std;

void print(int n) {
    cout << n << " ";
    if(n<=0) {
        return;
    }
    print(n-5);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}
