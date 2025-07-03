#include<iostream>
using namespace std;


void transform (int * array, int n) {
    // for (int i = 0, j = n-1; i < j; i++, j--) {
    //     array[i] += array[j];
    //     array[j] = array[i]; 
    // }

    for (int i = 0; i < n/2; i++) {
        int temp = array[i] + array[n-1-i];
        array[i] = temp;
        array[n-1-i] = temp;
    }

    if (n%2==1) {
        array[n/2] *= 2;
    }
}




int main () {

    int a[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    transform (a, n);
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}