## Functions

### Task 1

Write appropriate functions for calculating a diameter, perimeter, and square of a circle whose radius is entered as an argument. Then write a program in which these functions will be called for R (entered from the keyboard) to calculate the diameter, perimeter, and surface of the corresponding circle.

[Solution](./t1.cpp)

### Task 2

Write a program that will print all four-digit natural numbers that are divided by the sum of the two numbers composed of the first two digits and the last two digits of the four-digit number. It should eventually print out how many such numbers have been found.

```
3417 is divisible with 34 + 17
5265 is divisible with 52 + 65
6578 is divisible with 65 + 78
```

[Solution](./t2.cpp)

### Task i

Write a program that reads an integer `X` and finds the 10 largest numbers less than `X` that satisfy both of the following conditions:

- The number is a palindrome (it reads the same forward and backward).
- The number is divisible by the sum of its digits.

For each valid number found, print it on a new line. Use helper functions:

- `reverse(int)` to reverse the digits of a number.

- `isPalindrome(int)` to check if a number is a palindrome.

- `sumOfDigit(int)` to calculate the sum of a number's digits.

- `isDivisibleBySumOfDigits(int)` to check if the number is divisible by the sum of its digits.

[Solution](./t4_1.cpp)

### Task 3

Write a program that calculates for a given natural number the difference between the nearest prime number and that number itself.

Example: For input of `573`, The program should output `577 – 573 = 4`

[Solution](./t3.cpp)

### Task 4

Write a program that will print all prime numbers less than 10000, whose sum of digits is also a prime number. At the end, print how many such numbers are found.

[Solution](./t4.cpp)

### Task 5

Write a program that will print all pairs of prime numbers less than 1000 that differ between them by 2. Finally, print the number of such pairs.

[Solution](./t5.cpp)

### Task 6

Calculate the following sum:

`1! + (1 + 2)! + (1 + 2 + 3)! + …​ + (1 + 2 + …​ + n)!`

NOTE: Use a function to calculate the sum of the first k natural numbers. Use a factorial calculation function to one natural number k

[Solution](./t6.cpp)