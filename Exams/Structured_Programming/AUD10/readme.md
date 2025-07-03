## Pointers and array algorithms

### Task 1

Swap two values using pointers...

### Task 2

Find minimum and maximum value in an array of pointers.

### Task 3

Write functions for sorting array by using the following method for sorting: Bubble sort.

Write functions for reading and printing elements of an array, and write main program to test the sort function.

### Task 4

Write the following functions for searching an array:

- Linear search

- Binary search

Then write a program that fill an array with numbers from 1 to 1000000, and than generates random number in this range and finds its index by calling the two functions for searching.


### Task 5

Write a program that will transofrm the input array a into output array b in the following way:

$b_i = a_i + a_{n − 1 − i}$

The input array: `1 2 3 5 7`

should be transformed into: `8 7 6 7 8`

Explanation: Since the input array a is of size n, that b will be the same size. The transformation is done by pairwise addition and replacement of the elements. For each pair of elements `a[i]` and `a[n-1-i]`, where i is from `[0 to n/2-1]`, the neighborhood sum is stored in `b[i]`, while `a[i]` is replaced with `[n-1-i]`. If n is odd, the middle element `a[n/2]` is multiplied by 2.