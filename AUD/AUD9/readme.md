## Recursion `**` (Important topic)

### Task 1

Calculate the sum `1! + (1 + 2)! + (1 + 2 + 3)! + ... + (1 + 2 + ... + n)!`, follow these steps: - use a *recursive* function to calculate the sum of the first k natural numbers. - use a recursive function to calculate the factorial of a natural number.

### Task 2

Write a recursive function `count_down(int n)` that for a given integer n prints the numbers from n to 0.

### Task 2.1

Write a recursive function `count_up(int n)` that for a given integer n prints the numbers from 0 to n. (Use the code of the function `count_down(int n)` and solve the task by changing the order of the commands).

### Task 3

Write a program that for a given natural number, calculates the difference between the nearest larger prime number and the number itself.

The program should use a recursive function to find the appropriate prime number, which in turn should use a recursive function to check if a given number is a prime number.

Example:

If `573` is entered, the program should print `577 - 573 = 4`


### Task 4

Write a program that will print the value of the n-th element of the array defined by:

```
x[1] = 1
x[2] = 2
...
x[n] = (n - 1) * x[n - 1] / n + x[n - 2] / n
```

### Task 5

Write a recursive function that will calculate the sum of the digits of a number.
```
sumDigits(126) -> 9
sumDigits(49) -> 13
sumDigits(12) -> 3
```

### Task 6

For a given number n, write a recursive function that will count the occurrences of the digit 8. Additionally, if there is another digit 8 immediately to the left of any 8, its occurrence should be counted twice.

```
count8(8) -> 1
count8(818) -> 2
count8(8818) -> 4
```


### Task 7

Write a program that for a given array of natural numbers (input from the keyboard), will print the greatest common divisor (GCD) of its elements. The program must include a recursive function for calculating the GCD of two natural numbers.

Example

`48 36 120 72 84`

The output should be:

`GCD of the elements in this array is 12`

- The GCD for two numbers can be calculated using the Euclidean algorithm
- To calculate the GCD of numbers m and n, the remainder is calculated when dividing m by n.
    - If the reminder is not 0, calculate the remainder when dividing n by m % n
    - Repeat the process until non-zero remainders are obtained
    - If the reminder is 0, the GCD of the two numbers is the last calculated non-zero remainder
```
GCD(20, 12)
20 % 12 = 8
12 % 8 = 4
8 % 4 = 0

GCD(20, 12) = 4
```

### Task 8

Write a program that for a given array of integers (input from the keyboard), will print the least common multiple (LCM) of its elements. The program must include a recursive function for calculating the LCM of two numbers.

Example: For the array `18 12 24 36 6` the output should be:

LCM of the elements in this array is `72`

### Task 9

Write a program that for a given array of integers (input from the keyboard) will print the sum of elements from the array. The program should include a recursive function for finding the sum of elements in a given array.

### Task 10

Write a program that for a given array of integers (input from the keyboard), will print the largest element. The program should include a recursive function for finding the largest element in a given array.

Example: For the array

`5 8 3 12 9 6` 


The output should be:

The largest element in the array should be `12`