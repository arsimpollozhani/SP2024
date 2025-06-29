#include<iostream>
#include<math.h>
using namespace std;

int min (int a, int b) {
    if (a < b) return a;
    return b;
}

int max (int a, int b) {
    if (a > b) return a;
    return b;
}
int main () {

    int N;
    cin >> N;


    for (int i = 0; i < N; i++)
    {
        int a, b , c;

        cin >> a >> b >> c;

        int minimum = min (min(a,b), c);
        int maximum = max (max(a,b), c);
        // cout << minimum;
        // cout << maximum;

        float res = 2 * minimum - maximum / 2 + abs(minimum-a);
        printf ("%.2f\n", res);
    }
    
    return 0;
}