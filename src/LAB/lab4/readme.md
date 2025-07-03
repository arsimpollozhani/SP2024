## Task 1

Write a C++ program that continuously reads integers from standard input. 
For each number, the program should output its **first two most significant digits**.

### Example
Input: 
```
12345
89
502
```
Output: 
```
12
89
50
```

## Task 2

Build a program that detects how often a number `x` appears as a **block** within a larger number `num`.

- First, read an integer `x`
- Then, repeatedly read integers `num`
- For each `num`, determine how many times `x` appears as a contiguous group of digits (not just as individual digits)


### Example

Input: 
```
23
23212323
```
Output: 
`23212323 -> 2`

## Task 3

Identify the first 10 integers greater than `x` where digit `c` appears exactly `p` times.

### Input
- Three integers:
    - `x`: the lower bound
    - `c`: the digit to count
    - `p`: the required frequency of digit `c`
### Output
- Print the first 10 numbers greater than `x` that contain digit `c` exactly `p` times.

### Example
Input: 
```
150 2 1
```
Output:
```
152
162
172
182
192
205
215
225
235
245
```

