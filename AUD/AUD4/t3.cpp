#include<iostream>
using namespace std;

int main () {

    int div, r1, r2;

    div = r1 = r2 = 0;


    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        if (number % 3 == 0) {
            div++;
        } else if (number % 3 == 1) {
            r1++;
        } else {
            r2++;
        }
    }
    cout << div << " " << r1 << " " << r2 << endl;

}