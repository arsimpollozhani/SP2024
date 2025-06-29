//
// Created by win11pro on 12/16/2024.
//

/*
* Let A = {a1, a2, .. a_n} is an array of integers.
* The size of the array n and the elements of the array are read from SI.
* Write a program that will transform the array so each element of the original array
* is replaced with the number of appearance of the least significant digit (the right most)
* in the number itself. Print the result array on the standard output.

Compute the count of given digit in a number with separate recursive function.
 */

#include<iostream>
using namespace std;
#define SIZE 100

void fillArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

//loop
/*int countOccurrences(int n) {
    int count = 1;
    int lastDigit = n%10;
    while(n>0) {
        int secondLastDigit = (n/10)%10;
        if(lastDigit == secondLastDigit) {
            count++;
        }
        n = n/10;
    }
    return count;
}*/
int lastDigit(int n) {
    return n % 10;
}
int countOccurrencesRec(int n, int lastDigit) {
    if(n < 10) return 0;
    int secondLastDigit = (n / 10) % 10;
    if(lastDigit == secondLastDigit) {

        return 1 + countOccurrencesRec(n / 10,lastDigit);
    } else {
        return countOccurrencesRec(n/10,lastDigit);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int fixedLastDigit = lastDigit(arr[i]);
        arr[i] = countOccurrencesRec(arr[i],fixedLastDigit) + 1;
        cout << arr[i] << " ";
    }
}
int main() {
    int array[SIZE];
    int n;
    cin >> n;
    fillArray(array, n);
    //cout << countOccurrencesRec(505) << endl;
    printArray(array, n);
    return 0;
}