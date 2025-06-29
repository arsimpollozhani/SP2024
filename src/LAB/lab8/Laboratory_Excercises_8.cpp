//
// Created by win11pro on 12/1/2024.
//
//Pointers and sorting

/*
* TASK 1.
Write a function void sort(int x, int y, int z) that sorts three numbers in descending order,
such that x will hold the largest number and z the smallest.

The main function must not be modified.
int main() {
    int a, b, c;
    cin>>a>>b>>c;
    sort(&a, &b, &c);
    cout<<a<<b<<c<<endl;
return 0;
}
Input Result
1 2 3
3 2 1
 */
/*
#include<iostream>
using namespace std;

void sort(int *x, int *y, int*z) {
    if(*x < *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    if(*x < *z) {
        int temp = *x;
        *x = *z;
        *z = temp;
    }
    if(*y < *z) {
        int temp = *y;
        *y = *z;
        *z = temp;
    }
}

int main() {

    int a, b, c;
    cin>>a>>b>>c;

    sort(&a, &b, &c);

    cout<< a << b << c << endl;
    return 0;
}
*/


/*
* From the standard input, the number of elements in an array and the array itself are provided.
* Your task is to write a single function that will find the largest and smallest elements of the array,
* calculate the sum of the elements (after the transformation) of the array and transform the array such
* that each element is increased by the difference between the largest and smallest elements.
* Finally, print the largest element, the smallest element, the sum of the elements, and the
* transformed array. Input Result
5
2 4 5 1 3
MAX -> 5
MIN -> 1
SUM -> 15
6 8 9 5 7
 */

/*#include<iostream>
using namespace std;
#define SIZE 100;

void findMinMax(int *array, int size, int *min, int *max, int *sum) {
    *min = *max = *array;
    *sum = 0;
    for (int i = 0; i < size; i++) {
        if (*(array+i) < *min) {
            *min = *(array+i);
        } else if (*(array+i) > *max) {
            *max = *(array+i);
        }
        *sum += *(array+i);
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
    findMinMax(array, n, &min, &max,&sum);
    cout << "\n";
    cout << "MAX -> " << max << endl;
    cout << "MIN -> " << min << endl;
    cout << "SUM -> " <<sum << endl;
    int diff = max - min;
    for (int i = 0; i < n; i++) {
        cout << *(array + i) + diff<< " ";
    }
    return 0;
}*/



/*
* TASK 3.
For the needs of professors and assistants at FINKI, a program is required to scale the scores of students for a given exam.

From the standard input, the scores of up to 100 students are to be read and stored in an array.

Define a function void scale(int scores[], int n) that takes an array of numbers
(the scores of students on the exam) and performs the scaling as follows:

Find the maximum score on the exam (e.g., 88 out of 100).
Calculate the ratio
100/max
100/max (e.g., 100/88 = 1.13636).
Multiply all the scores in the array by this ratio so that the student with the highest score gets 100 points.
Print the array with the scaled scores.
The transformation should be done in-place, without using an auxiliary array.

Input Result
5
10 20 30 40 82
12.20 24.39 36.59 48.78 100.00
 */
/*
#include <iomanip>
#include<iostream>
using namespace std;

void scale(float scores[], int n) {
    int maxScore = *scores;
    for (int i = 0; i < n; i++) {
        if(maxScore < *(scores+i)) {
            maxScore = *(scores+i);
        }
    }

    float ratio = 100.0 / maxScore;

    for(int i = 0; i < n; i++) {
        *(scores+i) = *(scores+i) * ratio;
        cout << fixed <<setprecision(2) <<*(scores+i) << " ";
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
*/


