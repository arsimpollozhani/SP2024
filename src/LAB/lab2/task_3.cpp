#include <iostream>
using namespace std;

int main() {
    float P, Q, N;
    float a = 0, b = 0, c = 0;
    cin >> P >> Q;
    for (int i = 1; i <= P; i++) {
        cin >> N;
        if (N == Q) {
            a++;
        } else if (N > Q) {
            b++;
        } else {
            c++;
        }
    }
    float equal = (a / P);
    float greater = (b / P);
    float lesser = (c / P);


    cout << "Greater: " << greater * 100 << "%" << endl;
    cout << "Equal: " << equal * 100 << "%" << endl;
    cout << "Lesser: " << lesser * 100 << "%" << endl;
    return 0;
}

