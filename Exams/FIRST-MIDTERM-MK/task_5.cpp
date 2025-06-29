//Created: task_5.cpp
#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a <= 0 || b <= 0) {
        cout << "Invalid input" << endl;
    }
    else {
        int bigN = 0;
        int smallN = 0;
        if (a>b) {
            bigN = a;
            smallN = b;
        } else {
            bigN = b;
            smallN = a;
        }
        bool isEven = true;
        while (smallN > 0) {
            int digitSmall = smallN % 10;
            int digitBig = bigN /10 % 10;
            if(digitSmall != digitBig) {
                isEven = false;
                break;
            }
            smallN = smallN / 10;
            bigN = bigN / 100;
        }

        if(isEven) {
            cout << "PAREN" << endl;
        } else {
            cout << "NE"<<endl;
        }
        return 0;
    }
}