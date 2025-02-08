/*#include<iostream>
using namespace std;

int modifyNumber(int num, int k) {
    int modifiedNum = 0;
    int multiplier = 1;
    while(num > 0) {
        int digit = num % 10;
        num = num / 10;
        if(digit > k) {
            modifiedNum = modifiedNum +digit * multiplier;
            multiplier *= 10;
        }
    }
    return modifiedNum;
}

int findMaxModifiedNum(int *a, int n, int k) {
    int max = 0;
    for(int i = 0; i < n; i++) {
        int modifiedNum = modifyNumber(a[i], k);
        if(max < modifiedNum) {
            max = modifiedNum;
        }
    }
    return max;
}
void fillArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int a[100];
    int n, k;
    cin >> n;
    fillArray(a, n);
    cin >> k;
    cout << findMaxModifiedNum(a, n, k) << endl;
    return 0;
}*/