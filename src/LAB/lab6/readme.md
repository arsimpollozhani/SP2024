## Task 1

Read a matrix of dimensions `m x n`. Replace every element in the **last column** with the matrix-wide maximum. Then:
- Output the updated matrix
- Print the average of all values (after replacement), as a floating-point number

### Input
- Two integers `m` and `n` — matrix dimensions
- Then `m × n` integers — row by row

### Output
- The modified matrix
- The average value of all elements (after changes)

Input:
```
2 3
1 2 3
4 5 6
```
Output:
```
1 2 6
4 5 6
4.83333
```

## Task 2

Transform the numbers below the main diagonal and anti-diagonal with negative signs.

Input: 
```
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
```
Output: 
```
1   2   3   4
5   6   7   8
9   10  11  12
13 -14 -15  16
```

## Task 3

Enter two matrices with dimensions m and n, count how many columns from the first matrix is in the second matrix.

Input:
```
4 4
1 2 4 6
2 3 4 5
5 1 3 1
1 3 4 4
```
Output
```
2 2 2 4
3 2 3 5
5 2 1 3
1 1 3 4
1
```

## Task 4

You have an NxM matrix as input, where N and M are loaded first, and then the elements of the matrix.
Your task is to print the diagonal elements starting from the first row of the matrix.
See test examples for printing

Note: Be careful in case the matrix is not square

```
Input1          Input2
3               2
3               4
1 2 3           1 2 3 4
4 5 6           5 6 7 8
7 8 9

Output1         Output2
1               1
2 4             2 5
3 5 7           3 6
4 7 
```