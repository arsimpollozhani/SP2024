#include <iomanip>
#include<iostream>
using namespace std;

void scale(float scores[], int n) {
    int maxScore = *scores;
    for (int i = 0; i < n; i++) {
        if (maxScore < *(scores + i)) {
            maxScore = *(scores + i);
        }
    }

    float ratio = 100.0 / maxScore;

    for (int i = 0; i < n; i++) {
        *(scores + i) = *(scores + i) * ratio;
        cout << fixed << setprecision(2) << *(scores + i) << " ";
    }
}

void fillArray(float *array, int size) {
    for (int i = 0; i < size; i++) {
        cin >> *(array + i);
    }
}


int main() {
    float array[100];
    int n;
    cin >> n;

    fillArray(array, n);

    scale(array, n);


    return 0;
}
