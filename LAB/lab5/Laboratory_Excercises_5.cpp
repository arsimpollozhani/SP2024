//
// Created by win11pro on 12/1/2024.
//
//Task 1 Mon
//Declare array and from SI enter n elements;
//find the min and max number in the array , swap those values, and print
//the modified array.


/*#include<iostream>
using namespace std;
int main() {
    int a[100];
    int n;
    cin >> n;
    for(int i = 0; i<n; i++) {
        cin >> a[i];
    }
    int minIndex = 0, maxIndex = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > a[maxIndex]) {
            maxIndex = i;
        }
        if(a[i] < a[minIndex]) {
            minIndex = i;
        }
    }
    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;

    for(int i = 0; i < n; i++) {
        cout << a[i] <<" ";
    }
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main() {
    int n;
    int array[100];
    int min=100000000, max=-1000000;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>array[i];
    }

    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }

    cout<<endl;

    for(int i=0; i<n; i++) {
        if(array[i]<min) {
            min=array[i];
        } else if (array[i]>max) {
            max=array[i];
        }
    }

    for(int i=0; i<n; i++) {
        if (array[i]==min) {
            array[i]=max;
        } else if (array[i]==max) {
            array[i]=min;
        }
    }

    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }

    return 0;
}*/

// w/functions
/*
#include<iostream>
using namespace std;
void readArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int findMin(const int a[], int n) {
    int minIndex = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < a[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int findMax(const int a[], int n) {
    int maxIndex = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] >  a[maxIndex]) {
           maxIndex = i;
        }
    }
    return maxIndex;
}

void swapMinMax(int a[], int n) {
    int minIndex = findMin(a, n);
    int maxIndex = findMax(a, n);
    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;
}
void printModifiedArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
int main() {
    int a[100];
    int n;
    cin >> n;
    readArray(a,n);
    swapMinMax(a,n);
    printModifiedArray(a,n);
    /*cout <<findMin(a, n);
    cout << findMax(a, n);#1#
    return 0;
}
*/

//***************************************************
//***************************************************

//TASK 2
/*Input array with n elements, in which it is checked
how many elements are greater or equal to others. Npr input
5

1 2 3 4 5
Output
[0] 1:4
[1] 2:3
[2] 3:2
[3] 4:1
[4] 5:0*/
/*#include<iostream>
using namespace std;
int main() {
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        int geq = 0;
        for(int j = 0 ; j < n; j++) {
            if(a[i] <= a[j]) {
                geq++;
            }
        }
        cout <<"[" << i << "] " <<a[i] << ":" <<geq-1<<endl;
    }

    return 0;
}*/

// w/ functions

/*
#include <iostream>
using namespace std;

// Function to read the array
void readArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

// Function to count elements greater or equal to the current element
int countGeq(const int a[], int n, int index) {
    int geq = 0;
    for (int j = 0; j < n; j++) {
        if (a[index] <= a[j]) {
            geq++;
        }
    }
    return geq - 1; // Exclude the element itself
}

// Function to print the array with counts
void printArrayWithCounts(const int a[], int n) {
    for (int i = 0; i < n; i++) {
        int geq = countGeq(a, n, i);
        cout << "[" << i << "] " << a[i] << ":" << geq << endl;
    }
}

int main() {
    int a[100];
    int n;

    // Read the size of the array
    cin >> n;

    // Read the elements of the array
    readArray(a, n);

    // Print the array with counts of elements greater or equal to each element
    printArrayWithCounts(a, n);

    return 0;
}
*/


//******************************************
//******************************************

//TASK 3
//naogjanje duplikati od krajot na nizata so toa sto
//se naogja prviot duplikat i tuka treba break
/*primer
1 2 3 1 2 1
ke bide
1231
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = n - 1; j > i; j--) {
            if(a[i] == a[j]) {
                for(int k = j; k < n - 1 ; k++) {
                    a[k] = a[k+1];
                }
                n--;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}




//TUESDAY
//Task 1
/*
samo prvata beshe malku porazlichna
da se vnesat n elementi, da se najde nivniot prosek, da se
najde najgolemiot element vo nizata, tie broevi shto se pogolemi od
prosekot na nizata da se smenat so najgolemiot
input:
1 2 3 4 5 4
output:
1 2 3 5 5 5
*/

/*#include<iostream>
using namespace std;

int main() {
    int a[100];
    int n;
    cin >> n;
    for(int i =0 ; i < n; i++) {
        cin >> a[i];
    }
    float sum = 0;
    int max = 0;
    for(int i =0; i < n; i++) {
        sum += a[i];
        if(a[i] > max) {
            max = a[i];
        }

    }
    float average = sum / n;
    for(int i =0; i < n; i++) {
        if(a[i] > average) {
            a[i] = max;
        }
    }

    for(int i =0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}*/