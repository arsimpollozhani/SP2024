#include<iostream>
using namespace std;


int sumOfElements (int array[], int n){
    if (n == 0) {
        return 0;
    } else {
        return array[n-1] + sumOfElements (array, n-1);
    }
}

int main () {

    int array[100];
    int n;
    cin >> n;

    for (int i=0 ;i<n; i++) {
        cin >> array[i];
    }

    cout << sumOfElements (array, n);

    return 0;
}