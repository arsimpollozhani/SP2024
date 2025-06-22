#include<iostream>
using namespace std;

void sort(int *x, int *y, int*z) {
    if(*x < *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    if(*x < *z) {
        int temp = *x;
        *x = *z;
        *z = temp;
    }
    if(*y < *z) {
        int temp = *y;
        *y = *z;
        *z = temp;
    }
}

int main() {

    int a, b, c;
    cin>>a>>b>>c;

    sort(&a, &b, &c);

    cout<< a << b << c << endl;
    return 0;
}