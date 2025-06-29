//
// Created by win11pro on 12/16/2024.
//
#include<iostream>
#include<iomanip>
using namespace std;

float findRatio(char *str) {
    float upper = 0;
    float lower = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            upper++;
        } else if (islower(str[i])) {
            lower++;
        }
    }
    float ratio = upper / lower;
    //cout << fixed <<setprecision(2) <<ratio;
    return ratio;
}

int findMaxRatio(float *a, int n) {
    float max = a[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    char str[100];
    int i = 0;
    float saveRatios[100]{0};
    while (cin.getline(str, 100)) {
        //cin.getline(str,100);
        float ratio = findRatio(str);

        saveRatios[i++] = ratio;
        cout << fixed << setprecision(2) << ratio;
        cout << " " << str << endl;
    }
    cout << findMaxRatio(saveRatios, 100) << endl;

    return 0;
}
