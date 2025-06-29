[Main menu](../index.md)

## TASK 1

Од тастатура се внесува природен број N. Да се испише следната форма на излез:

1234...N...4321

………

123454321

1234321

12321

121

1

При печатењето да се искористи рекурзивна функција која ќе печати еден ред од формата: 123...K...321.

Доколку задачата се реши без примена на функција ќе може да се освојат до 40% од поените. Доколку функцијата не е (потполно) рекурзивна, може да со освојат до 60% од поените.

---------------------------------

A natural number N is given as input. The following output format should be printed:

1234...N...4321

………

123454321

1234321

12321

121

1

When printing, use a recursive function that will print a line of the form: 123...K...321.

If the task is solved without using a function, up to 40% of the points can be earned. If the function is not (fully) recursive, up to 60% of the points can be earned.

For example:

Input

`6`

Result

```
12345654321
123454321
1234321
12321
121
1
```

## TASK 2

За даден природен број N, да се пополни матрица N x N со цифрите 1, 2, 3… 9, 0, по редови, во змијовиден (цик-цак) облик, односно:

- редовите со парен индекс (0, 2, 4, ...) се пополнуваат од лево кон десно

- редовите со непарен индекс (1, 3, 5, ...) се пополнуваат од десно кон лево

Цифрите се користат циклично и по редослед.

---------------------------------
Given a natural number N, fill an N x N matrix with the digits 1, 2, 3, …, 9, 0 in order, row by row, in a zig-zag (snake-like) pattern, as follows:

- Rows with an even index (0, 2, 4, …) are filled from left to right.

- Rows with an odd index (1, 3, 5, …) are filled from right to left.

The digits are used cyclically and in order (i.e., after 9 comes 0, then 1 again, etc.).

For example:

Input:

`4`

Result

```
1 2 3 4
8 7 6 5
9 0 1 2
6 5 4 3
```

## TASK 3

 На влез е даден природен број  N (N<=100) и во следните N редови е даден по еден стринг со должина помала од 80 знаци. Вашата програма треба на излез да го отпечати најдолгиот стринг кој е палиндром (стринг кој потполно исто се чита и од лево на десно и од десно на лево).

Доколку има повеќе такви стрингови, да се отпечати тој што е лексикографски најмал (според редоследот од функцијата  strcmp()). Ако нема ниту еден таков стринг, на екран се печати NEMA.


---

An integer N is given as input (N <= 100), followed by N lines, each containing one string of length less than 80 characters.

Your program should output the longest string that is a palindrome (a string that reads the same forwards and backwards).

If there are multiple such strings, you should print the lexicographically smallest one (according to the order given by the strcmp() function).
If there is no palindrome at all, print NEMA on the screen.

For example:

Input:

```
6
asasa
a&b&a&b&a
awawawawawaw
Xyz
c&b&a&b&c
PotoP
```

Result:

`a&b&a&b&a`


## Task 4

Од тастатура се внесува природен број N. Да се испише следната форма на излез:

1

121

11311

1114111

……

11..1N11...11

При печатењето да се искористи рекурзивна функција која ќе печати еден ред од формата: 11..1K11..1.

Доколку задачата се реши без примена на функција ќе може да се освојат до 40% од поените. Доколку функцијата не е (потполно) рекурзивна, може да со освојат до 60% од поените

---------------------------------
A natural number N is given as input. The following output format should be printed:

1

121

11311

1114111

……

11..1N11...11

When printing, use a recursive function that will print a line of the form: 11..1K11..1.

If the task is solved without using a function, up to 40% of the points can be earned. If the function is not (fully) recursive, up to 60% of the points can be earned.

For example:

Input:

`6`

Result:

```
1
121
11311
1114111
111151111
11111611111
```


## Task 5

За даден природен број N, да се пополни матрица N x N со буквите A, B, C, D, E, F, G, H, I по редови, во змијовиден (цик-цак) облик, односно:

редовите со парен индекс (0, 2, 4, ...) се пополнуваат од лево кон десно

редовите со непарен индекс (1, 3, 5, ...) се пополнуваат од десно кон лево

Буквите се користат циклично и по редослед, т.е. после буквата I, се продолжува пак од А.

---------------------------------

Given a natural number N, fill an N x N matrix with the letters A, B, C, D, E, F, G, H, I in order, row by row, in a zig-zag (snake-like) pattern, as follows:

Rows with an even index (0, 2, 4, …) are filled from left to right.

Rows with an odd index (1, 3, 5, …) are filled from right to left.

The letters are used cyclically and in order - that is, after I, the sequence continues again from A.

Input:

`5`

Result:

```
A B C D E
A I H G F
B C D E F
B A I H G
C D E F G
```

## Task 6

На влез е даден природен број  N (N<=100) и во следните N редови е даден по еден стринг со должина помала од 80 знаци. Вашата програма треба на излез да го отпечати најкраткиот стринг кој не е палиндром (стринг кој потполно исто се чита и од лево на десно и од десно на лево).

Доколку има повеќе такви стрингови, да се отпечати тој што е лексикографски најголем (според редоследот од функцијата strcmp()). Ако нема ниту еден таков стринг, на екран се печати NEMA.

---

An integer N is given as input (N <= 100), followed by N lines, each containing one string of length less than 80 characters. Your program should output the shortest string that is not a palindrome (a string that does not read the same forwards and backwards).

If there are multiple such strings, you should print the lexicographically largest one (according to the order given by the strcmp() function).

If there is no such string, print NEMA on the screen.

Input:

`6`

Output:

```
asasa
a&b&a&b&a
awawawawawawa
XyzyX
c&b&a&b&c
PotoP
NEMA
```

Input:

`4`

Result:

```
asdr
u6253u3
bebe
lakdsadalkfhldakf
bebe
```