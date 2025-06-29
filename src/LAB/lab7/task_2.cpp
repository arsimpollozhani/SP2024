#include<iostream>
using namespace std;

int markDigits(int n, int k) {
    //Base: single digit
    if(n<10) {
        if(n<=k) {
            return 0;
        } else {
            return 1;
        }
    }
    int lastDigit = n%10;
    int remaining = n/10;
    int markedRemainingDigit = markDigits(remaining, k);
    int markedLastDigit;
    if(lastDigit <= k) {
        markedLastDigit = 0;
    } else {
        markedLastDigit = 1;
    }

    return markedLastDigit + markedRemainingDigit * 10;;
}
int main() {
    int N, K;
    cin>>N>>K;
    cout << markDigits(N, K);
    return 0;
}