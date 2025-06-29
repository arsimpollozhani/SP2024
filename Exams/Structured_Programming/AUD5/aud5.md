# Loops

## Task 1

Write a program that will print all four-digit numbers where the sum of the three least significant digits is equal to the most significant digit.

`4031 (4=0+3+1), 5131 (5=1+3+1)`

[Solution](./t1.cpp)

## Task 2

Write a program that will print all numbers from a given range that are read the same from left to right and from right to left.

Example numbers:

`12321 5061605`

[Solution](./t2.cpp)

## Task 3
Write a program that will determine the number with the maximum value from an unknown number of integers entered from the keyboard. The program ends if an invalid number representation is entered.

[Solution](./t3.cpp)

## Task 4

Write a program that will determine the number with the maximum value from an unknown number of integers entered from the keyboard. In this case, numbers greater than 100 are not taken into account i.e. they are ignored. The program ends if an invalid number representation is entered.

[Solution](./t4.cpp)
[Solution](./t4_1.cpp)

## Task 5

Write a program that will determine the two numbers with the highest values from an unknown number of integers entered from the keyboard. The program ends if an invalid number representation is entered.

Example:

If the numbers `2 4 7 4 2 1 8 6 9 7 10 3` are entered, the program will print 10 and 9.

[Solution](./t5.cpp)

## Task 6

Write a program that will determine the difference between the sums of the numbers at even and odd positions (according to the order of entry) from N integers entered from the keyboard. If this difference is less than 10, the screen prints “The two sums are similar”, otherwise “The two sums differ greatly”.

Example:

For the numbers entered from the keyboard:

`2 4 3 4 2 1 1 6 1 7`

sum_odd_positions = `9`

sum_even_positions = `22`

The screen will print:

`The two sums differ greatly`

[Solution](./t6.cpp)

## Task 7

Write a program that will determine the positions (ordinal numbers of entry) of the two consecutive numbers that have the highest sum from an unknown number of integers entered from the keyboard. The program ends if two negative integers are entered one after the other (consecutively).

[Solution](./t7.cpp)

## Example of First Midterm probelms

### Task 1

In Morse code, the characters (letters, digits) are represented by dots and dashes. The digits from 0 to 4 are represented as follows: “`-----`” “`.----`” “`..---`” “`...--`” “`....-`” You enter a natural number `N` (`N < 100,000`) from the keyboard, and then N other natural numbers are entered. For each of the entered numbers, print the remainder when dividing that number by 5 in Morse code, each in a separate line.

[Solution](./m1.cpp)

### Task 2

A “Rosary” is a “number” obtained by concatenating the first `N` numbers in order. For example, for `N = 4`, it is `1234`, and for `N = 11`, it is `1234567891011`. An “Reverse Rosary” is similar to the above, but it starts from `N`, and the numbers are concatenated in reverse order. So, for `N = 5`, it is `54321`.

For a given N, print in order on the screen: Rosaryfor 1, Reverse Rosary for 1, Rosary for 2, Reverse Rosary for 2, and so on, up to Reverse Rosary for N.

For example, for `N = 5`, you should print:

```
1
1
12
21
123
321
1234
4321
12345
54321
```

[Solution](./m2.cpp)


### Task 3

The average number is a number where each subsequent digit is smaller than the previous one (when considering from the most significant digit to the least significant digit). For example, `7421`. Single-digit numbers are not considered average numbers.

To write a program, first enter a number N, which determines the total number of numbers to be entered from the keyboard. Then, enter the N numbers one by one. As output, you should print all the numbers that meet the condition for an average number, and then print the minimum average number from the entered numbers.

If there is no number that satisfies the condition, the value `-1` is printed.

Example input:
```
5
435
643
12234
721
7720
```

Example output:
```
643
721
643
```

[Solution](./m3.cpp)