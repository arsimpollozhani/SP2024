## Task 1

Declare array and from SI enter n elements.
Find the minimum and maximum number in the array ,swap those values, and print
the modified array.

Input: 
`5  2  9  7  4  1`
Output: 
`2  1  7  4  9`

## Task 2

Input an array with `n` elements, in which it is checked how many elements are greater or equal to others.

```
5
1 2 3 4 5
```
Output
```
[0] 1:4
[1] 2:3
[2] 3:2
[3] 4:1
[4] 5:0
```

## Task 3

Read a sequence of `n` integers from input. Remove any repeated elements while **preserving the order** of first appearances. That is:
- Only the first occurrence of each number should remain (start looping from the end)
- Any further duplicates should be removed

### Input
- The first line contains an integer `n`
- The next `n` lines contain the integers of the array

### Output
- A single line with the modified array, duplicates removed and order preserved

### Example

Input: 
```
6
4  2  4  3  2  1
```
Output: 
`4 2 3 1`
