#include<iostream>
using namespace std;


int lcm (int m, int n, int divisor) {
    if (m == 1 && n == 1) {  //base case
        return 1;
    } else {
        if (m%divisor!=0 && n%divisor!=0) {
            return lcm (m,n, divisor+1);   // from 2 to 3 ->divisor
        } else {
            if (m%divisor==0) {
                m/=divisor;
            }
            if (n%divisor==0) {
                n/=divisor;
            }

            return divisor * lcm (m,n,divisor);
        }
    }
}

int main () {
    int a[100];
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin>>a[i];
    }

    int result = lcm(a[0],a[1],2);
    //if we enter more than 2 numbers
    for (int i = 2; i < n; i++) {
        result = lcm (result, a[i], 2);
    }

    cout << result << endl;
    //18 12 24 36 6

    return 0;
}