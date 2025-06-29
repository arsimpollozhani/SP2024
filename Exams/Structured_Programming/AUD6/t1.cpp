#include<iostream>
#include<cmath>
using namespace std;

double diameter (double radius) {
    return 2 * radius;
}

double perimter (double radius) {
    return 2 * M_PI * radius;
}

double area (double radius) {
    return M_PI * radius * radius;
}

int main () {

    double radius;
    cin >> radius;

    double d = diameter (radius);
    double p = perimter (radius);
    double a = area (radius);

    cout << "Diameter: " << d << " Perimeter: " << p << " Area: " << a << endl;
    return 0;
}