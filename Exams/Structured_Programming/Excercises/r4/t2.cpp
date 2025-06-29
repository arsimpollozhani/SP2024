#include<iostream>
using namespace std;

void transform (int * array , int n){
    int even[100];
    int odd [100];


    int j = 0, k = 0;

    for (int i = 0; i < n; i++){
        if (array[i]%2==0) {
            even[j++] = array[i];
        }
    }

    for (int i = n-1; i>=0; i--){
        if (array[i]%2==1) {
            odd[k++] = array[i];
        }
    }

    for (int i = 0; i < j; i++) {
        array[i] = even[i];
    }

    for (int i = 0; i < k;i++){
        array[i+j]=odd[i];
    }

}

void fillArray (int * array,int n) {
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
}

void printArray (int * array,int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}

int main () {
    int n;
    cin >> n;

    int array[100];

    fillArray (array, n);


    transform(array, n);

    printArray (array, n);

    return 0;
}