#include<iostream>
using namespace std;

int main () {

    int array[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    bool increasing = true;
    bool decreasing = true;

    for (int i = 0; i < n-1; i++) {
        if (array[i] >= array[i+1]) {
            increasing = false;
            break;
        }
    }

    for (int i = 0; i < n-1; i++) {
        if (array[i] <= array[i+1]) {
            decreasing = false;
            break;
        }
    }

    if (!increasing && !decreasing) {
        cout << "Nor increasing nor decreasing" << endl;
    } else if (increasing) {
        cout << "Increasing" << endl;
    } else if (decreasing) {
        cout << "Decreasing" << endl;
    }
    

    
    return 0;
}