#include<iostream>
using namespace std;

void swapp (int & a, int & b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main (){

    int a = 5;
    int b = 7;
    cout << a << " " << b << endl;
    swapp (a, b);
    cout << a << " " << b;

    return 0;
}