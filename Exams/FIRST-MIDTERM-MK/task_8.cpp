//Created: task_8.cpp

#include <iostream>
using namespace std;

bool has_common_digit(int a, int b) {
    while (a > 0) {
        int digitA = a % 10;
        int tempB = b;
        while (tempB > 0) {
            int digitB = tempB % 10;
            if (digitA == digitB) {
                return true;
            }
            tempB /= 10;
        }
        a /= 10;
    }
    return false;
}

int main() {
    int N, X;
    cin >> N >> X;
    bool found = false;
    for (int i = N - 1; i > 0; i--) {
        if (!has_common_digit(i, X)) {
            cout << i << endl;
            found = true;
            break;
        }
    }
    
    if(!found)
    {
        cout << 0 << endl;
    }

    return 0;
}
