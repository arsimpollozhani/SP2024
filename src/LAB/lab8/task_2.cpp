#include<iostream>
using namespace std;
#define SIZE 100;

void findMinMax(int *array, int size, int *min, int *max, int *sum) {
    *min = *max = *array;
    *sum = 0;
    for (int i = 0; i < size; i++) {
        if (*(array + i) < *min) {
            *min = *(array + i);
        } else if (*(array + i) > *max) {
            *max = *(array + i);
        }
        *sum += *(array + i);
    }
}

void fillArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        cin >> *(array + i);
    }
}

int main() {
    int array[100];
    int n;
    cin >> n;
    fillArray(array, n);
    //printArray(array, n);
    int min = 0, max = 0, sum = 0;
    findMinMax(array, n, &min, &max, &sum);
    cout << "\n";
    cout << "MAX -> " << max << endl;
    cout << "MIN -> " << min << endl;
    cout << "SUM -> " << sum << endl;
    int diff = max - min;
    for (int i = 0; i < n; i++) {
        cout << *(array + i) + diff << " ";
    }
    return 0;
}
