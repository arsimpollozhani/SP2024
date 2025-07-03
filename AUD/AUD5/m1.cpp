#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        int remainder = number % 5;

        if (remainder == 0) {
            cout << "-----" << endl;
        } else if (remainder == 1) {
            cout << ".----" << endl;
        } else if (remainder == 2) {
            cout << "..---" << endl;
        } else if (remainder == 3) {
            cout << "...--" << endl;
        } else {
            cout << "....-" << endl;
        }
    }
    

    return 0;
}