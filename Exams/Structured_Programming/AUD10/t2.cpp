#include<iostream>
using namespace std;

//basically with pointer you can return two values from the function (not like Python) with references/pointers
//C++ syntax
void findMinMax (int * array, int n, int & max, int & min) {
    min = array[0];
    max = array[0];

    for (int i = 0; i < n; i++){
        if (array[i] > max) {
            max = array[i];
        } 
        if (array[i] < min) {
            min = array[i];
        }
    }
}

//C syntax
void findMinMaxPointers (int * array, int n, int * max, int * min) {
    *min = array[0];
    *max = array[0];

    for (int i = 0; i < n; i++){
        if (array[i] > *max) {
            *max = array[i];
        } 
        if (array[i] < *min) {
            *min = array[i];
        }
    }
}

void fillArray (int * array, int n) {
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}


int main () {

    int min ;
    int max;

    int min1;
    int max1;

    int array[100];
    int n;
    cin >> n;

    fillArray (array, n);

    findMinMax (array, n, max, min);
    findMinMaxPointers (array, n, &max1, &min1);

    cout << "Max: "  << max << " Min: " << min << endl;
    cout << "Max: "  << max1 << " Min: " << min1 << endl; //demo
    return 0;
}