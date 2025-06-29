#include<iostream>

using namespace std;

//function to populate the array
void fillArray (int array [], int n) {
    for (int i = 0; i < n; i++) {
        cin >> array[i]; 
    }
}

bool checkSize (int n1, int n2) {
    return n1 == n2;
}

bool checkEquality (int * array_1, int * array_2, int n) {
    for (int i = 0; i < n; i++) {
        if (array_1[i] != array_2[i]) {
            return false;
        }
    }
    return true;
    
}

void printArray (int * array, int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    
}

int main () {

    int array_1 [100];
    int array_2 [100];

    int n1, n2; //sizes of arrays

    cin >> n1 >> n2;

    fillArray (array_1, n1);
    fillArray (array_2, n2);

    if (!checkSize(n1, n2)) {
        cout << "Arrays are not equal. They have different sizes." << endl;
    } else { //they have equal size
        if (checkEquality(array_1, array_2, n1)) {     //n1 or n2 doesn't matter
            cout << "They are equal" << endl;
            printArray(array_1, n1);    
            cout << endl;
            printArray(array_2, n2);
        } else {
            cout << "They are not equal" << endl;
        }
    }

    return 0;
}