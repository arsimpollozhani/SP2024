#include<iostream>
using namespace std;

int main() {
    int a[100], b[100], n, scalar = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    for (int i = 0; i < n; i++){
        scalar += a[i] * b[i];
    }
    cout << "The scalar product is: " << scalar << endl;

    return 0;
}