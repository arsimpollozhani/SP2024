## Task 1
From SI read characters until you read the char !. In these characters are hidden integers (smaller than 100). Write a program that will read all characters and print the sum of all integers hidden in the text.

Use `cin >> noskipws >> sign` to read all the chars including spaces.

For example:

Input 	

`ako34D neka12em bashka41mewr!`

Result

`87`


## Task 2

Read from SI two integers a and b. Write a program that will print all numbers from a to b (a < b), such as the number created as a product of the digits from the next to the first to the next to last digit (middle digits = the digits that will remain if we remove the first and the last digit from the original number) is divisible with the number created from the last and the first digit. Do not print the numbers where the product of the middle digits is 0. At the end print the count of such numbers.

When printing out the numbers, next to each number that satisfies the condition, print the equation of that condition, for example: `55650 -> (150 == 50 * 3)`, where `150 = 5 * 6 * 5` and `50` is constructed from `5` (the first digit) and the `0` (the last digit of the number)

	
Input:

```
7777 8888
```
Result:

```
7892 -> (72 == 72 * 1)
7982 -> (72 == 72 * 1)
2
```

## Task 3

Using the characters `+` and `-` form a square image with "width" n (n > 2) that represent square of the chars `-`, enclosed by a square of chars `+` (view examples). For given n, print the appropriate image.

Attention: do not print additional characters as empty spaces, or unnecessary new line... The image ends with new line char. _*Do not use any matrix or arrays because n is not limited*_.

For example:
Input 	

`3`

Result

```
+++
+-+
+++
```


## Task 4

From SI are read N pairs of integers, where the first number is the students' points, and the second is the max. points. Write a program where for each pair (points, max points), will print the students success in percentage and his grade following these rules:

- if the student has 90% or more - "10".
- if the student has 80% or more - "9".
- if the student has 70% or more - "8".
- if the student has 60% or more - "7".
- if the student has 50% or more - "6".
- If the student has less than 50% print "FAIL".

For example:
Input 	
```
3
19 20
27 40
55 70
```
Result
```
95 10
67.5 7
78.5714 8

```


## Task 5

From SI read one number that represents the today's date in format `DDMMYYYY` (DD-day, MM-month, YYYY-year). Then read one integer `N`, after you read `N` dates of birth in the given format. For each of the `N` read dates your program should print `"YES"` if on today's date (read in the beginning) the person with that date have more or equal to 18 years, otherwise should print `"NO"`.

For example:

Input 	
```
15032015
12
12121992
16031997
12121980
12041997
01011999
23121976
28071955
16091985
19950817
04061983
16111981
25021951
```

Result
```
YES
NO
YES
NO
NO
YES
YES
YES
YES
YES
YES
YES
```


## Task 6

One number is interesting if his flipped number is divisible by the number of digits it contains. The flipped number is composed from the same digits, but in opposite order (ex. 653 is flipped of the number 356). Read from SI one integer n ( n > 9). Find and print the largest integer small than n that is "interesting". If the read number is not valid print a message "The number is invalid".

For example:
Input 	

`5`

Result

`The number is invalid`

## Task 7

Read from SI one integer n. From the integers smaller than n, find the one with maximum sum of divisors. Do not count the number itself in the sum of divisors.

For example:
Input 	

`50`

Result

`48`


## Task 8

Read from SI two integers a and b. Write a program that will print all numbers from a to b (a < b), such as the number created from all the digits from next to the first to the next to last digit in the original number (the digits that will remain if we remove the first and the last digit from the original number), reversed (read from right to left) is divisible with the number created as the sum of the first and the last digit. For single and two digit numbers, the number created from the middle digits is 0, and these numbers are not printed. At the end print out the count of such numbers.

Example. For the number 82675 the number created from the digits from the next to the first up to the next to last digit, reversed is 762, and the sum of the first and the last digit is (8 + 5) = 13. When printing out the numbers, next to each number that is satisfying the condition, print the equation of the condition in the following form:

> original_number -> (reversed_middle == (last_digit + first_digit) * quotient)

for example: `291 -> (9 == (1 + 2) * 3) 84575 -> (754 == (5 + 8) * 58)`


Input:

`15000 15500`

Output:

```
15000 -> (5 == (0 + 1) * 5)
15004 -> (5 == (4 + 1) * 1)
15010 -> (105 == (0 + 1) * 105)
15012 -> (105 == (2 + 1) * 35)
15014 -> (105 == (4 + 1) * 21)
15016 -> (105 == (6 + 1) * 15)
15020 -> (205 == (0 + 1) * 205)
15024 -> (205 == (4 + 1) * 41)
15030 -> (305 == (0 + 1) * 305)
15034 -> (305 == (4 + 1) * 61)
15040 -> (405 == (0 + 1) * 405)
15042 -> (405 == (2 + 1) * 135)
15044 -> (405 == (4 + 1) * 81)
15048 -> (405 == (8 + 1) * 45)
15050 -> (505 == (0 + 1) * 505)
15054 -> (505 == (4 + 1) * 101)
15060 -> (605 == (0 + 1) * 605)
15064 -> (605 == (4 + 1) * 121)
15070 -> (705 == (0 + 1) * 705)
15072 -> (705 == (2 + 1) * 235)
15074 -> (705 == (4 + 1) * 141)
15080 -> (805 == (0 + 1) * 805)
15084 -> (805 == (4 + 1) * 161)
15086 -> (805 == (6 + 1) * 115)
15090 -> (905 == (0 + 1) * 905)
15094 -> (905 == (4 + 1) * 181)
15100 -> (15 == (0 + 1) * 15)
15102 -> (15 == (2 + 1) * 5)
15104 -> (15 == (4 + 1) * 3)
15110 -> (115 == (0 + 1) * 115)
15114 -> (115 == (4 + 1) * 23)
15120 -> (215 == (0 + 1) * 215)
15124 -> (215 == (4 + 1) * 43)
15130 -> (315 == (0 + 1) * 315)
15132 -> (315 == (2 + 1) * 105)
15134 -> (315 == (4 + 1) * 63)
15136 -> (315 == (6 + 1) * 45)
15138 -> (315 == (8 + 1) * 35)
15140 -> (415 == (0 + 1) * 415)
15144 -> (415 == (4 + 1) * 83)
15150 -> (515 == (0 + 1) * 515)
15154 -> (515 == (4 + 1) * 103)
15160 -> (615 == (0 + 1) * 615)
15162 -> (615 == (2 + 1) * 205)
15164 -> (615 == (4 + 1) * 123)
15170 -> (715 == (0 + 1) * 715)
15174 -> (715 == (4 + 1) * 143)
15180 -> (815 == (0 + 1) * 815)
15184 -> (815 == (4 + 1) * 163)
15190 -> (915 == (0 + 1) * 915)
15192 -> (915 == (2 + 1) * 305)
15194 -> (915 == (4 + 1) * 183)
15200 -> (25 == (0 + 1) * 25)
15204 -> (25 == (4 + 1) * 5)
15210 -> (125 == (0 + 1) * 125)
15214 -> (125 == (4 + 1) * 25)
15220 -> (225 == (0 + 1) * 225)
15222 -> (225 == (2 + 1) * 75)
15224 -> (225 == (4 + 1) * 45)
15228 -> (225 == (8 + 1) * 25)
15230 -> (325 == (0 + 1) * 325)
15234 -> (325 == (4 + 1) * 65)
15240 -> (425 == (0 + 1) * 425)
15244 -> (425 == (4 + 1) * 85)
15250 -> (525 == (0 + 1) * 525)
15252 -> (525 == (2 + 1) * 175)
15254 -> (525 == (4 + 1) * 105)
15256 -> (525 == (6 + 1) * 75)
15260 -> (625 == (0 + 1) * 625)
15264 -> (625 == (4 + 1) * 125)
15270 -> (725 == (0 + 1) * 725)
15274 -> (725 == (4 + 1) * 145)
15280 -> (825 == (0 + 1) * 825)
15282 -> (825 == (2 + 1) * 275)
15284 -> (825 == (4 + 1) * 165)
15290 -> (925 == (0 + 1) * 925)
15294 -> (925 == (4 + 1) * 185)
15300 -> (35 == (0 + 1) * 35)
15304 -> (35 == (4 + 1) * 7)
15306 -> (35 == (6 + 1) * 5)
15310 -> (135 == (0 + 1) * 135)
15312 -> (135 == (2 + 1) * 45)
15314 -> (135 == (4 + 1) * 27)
15318 -> (135 == (8 + 1) * 15)
15320 -> (235 == (0 + 1) * 235)
15324 -> (235 == (4 + 1) * 47)
15330 -> (335 == (0 + 1) * 335)
15334 -> (335 == (4 + 1) * 67)
15340 -> (435 == (0 + 1) * 435)
15342 -> (435 == (2 + 1) * 145)
15344 -> (435 == (4 + 1) * 87)
15350 -> (535 == (0 + 1) * 535)
15354 -> (535 == (4 + 1) * 107)
15360 -> (635 == (0 + 1) * 635)
15364 -> (635 == (4 + 1) * 127)
15370 -> (735 == (0 + 1) * 735)
15372 -> (735 == (2 + 1) * 245)
15374 -> (735 == (4 + 1) * 147)
15376 -> (735 == (6 + 1) * 105)
15380 -> (835 == (0 + 1) * 835)
15384 -> (835 == (4 + 1) * 167)
15390 -> (935 == (0 + 1) * 935)
15394 -> (935 == (4 + 1) * 187)
15400 -> (45 == (0 + 1) * 45)
15402 -> (45 == (2 + 1) * 15)
15404 -> (45 == (4 + 1) * 9)
15408 -> (45 == (8 + 1) * 5)
15410 -> (145 == (0 + 1) * 145)
15414 -> (145 == (4 + 1) * 29)
15420 -> (245 == (0 + 1) * 245)
15424 -> (245 == (4 + 1) * 49)
15426 -> (245 == (6 + 1) * 35)
15430 -> (345 == (0 + 1) * 345)
15432 -> (345 == (2 + 1) * 115)
15434 -> (345 == (4 + 1) * 69)
15440 -> (445 == (0 + 1) * 445)
15444 -> (445 == (4 + 1) * 89)
15450 -> (545 == (0 + 1) * 545)
15454 -> (545 == (4 + 1) * 109)
15460 -> (645 == (0 + 1) * 645)
15462 -> (645 == (2 + 1) * 215)
15464 -> (645 == (4 + 1) * 129)
15470 -> (745 == (0 + 1) * 745)
15474 -> (745 == (4 + 1) * 149)
15480 -> (845 == (0 + 1) * 845)
15484 -> (845 == (4 + 1) * 169)
15490 -> (945 == (0 + 1) * 945)
15492 -> (945 == (2 + 1) * 315)
15494 -> (945 == (4 + 1) * 189)
15496 -> (945 == (6 + 1) * 135)
1
```


## Task 9
Read from SI unknown number of triplets of integers (three integers). The reading ends when the program can not read successfully read three integers. For each triplet of integers print out the two of them that have the minimum difference between them. First print the smaller one, and then the bigger integer. If two pairs of integers in the triplet have equal difference, than print out all the integers, ordered from the smallest to the largest.

Example: if 5 1 7 is entered -> `5 - 1 = 4`, `7 - 5 = 2`, `7 - 1 = 6` -> `2` is the smallest difference -> 5 7 should be printed

Input:
```
5 1 7
10 2 18
```

Output:
```
5 7
2 10 18
```

Input 	
```
19 38 34
36 97 19
15 60 84
51 62 22
42 20 52
58 79 3
15 22 91
24 26 44
18 25 15
100 56 61
100 9 92
50 26 65
5 59 61
35 34 51
78 31 59
67 91 13
69 54 38
68 91 17
67 89 78
85 98 30
75 95 97
74 82 15
90 64 60
91 4 45
26 2 95
99 0 94
70 60 23
28 39 35
31 27 31
76 77 49
79 34 43
76 38 39
73 52 49
82 34 81
29 92 16
37 6 46
23 74 24
26 33 80
r
```	

Output
```
34 38
19 36
60 84
51 62
42 52
58 79
15 22
24 26
15 18
56 61
92 100
50 65
59 61
34 35
59 78
67 91
54 69
68 91
67 78 89
85 98
95 97
74 82
60 64
4 45
2 26
94 99
60 70
35 39
31 31
76 77
34 43
38 39
49 52
81 82
16 29
37 46
23 24
26 33
```

## Task 10

Write a program in which from the standard input you read one positive integer z, and afterwards you read one after another pairs of integers `(a, b)`. Thereby, the loop should end if you read the pair `(0, 0)`. The program should calculate how many times the integer z is equal to the sum of the pairs `a` and `b`, as well as the percentage of the pairs `(a,b)` that give sum equal to `z` (NOTE: the pair (0,0) is not taken into account when doing calculations!).

For example:

Input 	
```
100
50 50
-50 -50
-99 199
32 98
0 0
```

Result
```
You entered 2 pairs of numbers that have a sum equal to 100
The percentage of pairs with sum 100 is 50%
```

## Task 12

Three natural numbers А, B and C are entered from the SI.

Write a program that will check if the three entered numbers can represent the values of the angles (in degrees) of a triangle. If the values can represent angles of a triangle print YES in the first line of the standard output followed by type of the triangle (RIGHT, ACUTE or OBTUSE) in the next line. If triangle is not possible with the tree given angles print NO in a single line.

Examples:

Example 1:
```
60 40 80

YES

ACUTE
```

Example 2:
```
100 50 30

YES

OBTUSE
```
Example 3:
```
100 50 50

NO
```

For example:
Input 	

`100 50 30`

Result
```
YES
OBTUSE
```

## Task 12
A whole number N greater then 0 is entered from the SI followed by N pairs of natural numbers greater than 10. Write a program that for every pair of entered numbers will check if the number obtained by moving the last digit of the first number on its first place is greater that the second number in the pair or not. Print YES if the condition is satisfied or NO if the condition is not satisfied on the standard output in a single line for each pair of numbers.

(Example for moving the last digit of a number on its first place: 1234 -> 4123, 98700 -> 9870). If the numbers 3456 and 6210 are entered as a pair YES should be printed since 6345 > 6210.

For example:
Input 	
```
4
56 4532
423 90
90 300
543 300
```

Result
```
NO
YES
NO
YES
```

## Task 13

Sweet number is number that contains only even digits `(0, 2, 4, 6, 8)`. In given range (m and n read from SI) find the smallest "sweet number". If there is no such number, print `NSN`.

For example:
Input 	

`1000 5000`


Result

`2000`