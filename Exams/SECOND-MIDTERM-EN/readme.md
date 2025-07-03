## Task 1

From SI read N strings not longer than 80 chars. At the beginning of the program read two integers:

    N - number of strings you are going to read
    X - shifting size.

Each of the read strings should be transformed in such a way that lowercase and uppercase letters (a-z, A-Z) are replaced with the same letter shifted X places afterwards in the alphabet (a-z). If you overflow the range of alphabet, continue cyclic from the beginning of the alphabet. Transformed string should be printed on SO.

Transformation of a string should be implemented in a separate recursive function.

Example:

Welcome -> transformed with shift 5 -> Bjqhtrj

For example:
Input 	
```
16 10
Sheets of empty canvas, untouched sheets of clay
Were laid spread out before me as her body once did.
All of five horizons revolved around her soul as the earth to the sun
Now the air I tasted and breathed has taken a turn
Ooh, and all I taught her was everything
Ooh, I know she gave me all that she was
And now my bitter hands chafe beneath the clouds of what was everything.
Oh, the pictures have all been washed in black, tattooed everything...
I take a walk outside, I'm surrounded by some kids at play
I can feel their laughter, so why do I sear?
Oh, and twisted thoughts that spin round my head, I'm spinning, oh,
I'm spinning, how quick the sun can drop away
And now my bitter hands cradle broken glass of what was everything
All the pictures have all been washed in black, tattooed everything...
All the love gone bad turned my world to black
Tattooed all I see, all that I am, all I'll be... yeah...
```

Result	
```
Croodc yp owzdi mkxfkc, exdyemron croodc yp mvki
Gobo vksn czbokn yed lopybo wo kc rob lyni yxmo nsn.
Kvv yp psfo rybsjyxc bofyvfon kbyexn rob cyev kc dro okbdr dy dro cex
Xyg dro ksb S dkcdon kxn lbokdron rkc dkuox k debx
Yyr, kxn kvv S dkeqrd rob gkc ofobidrsxq
Yyr, S uxyg cro qkfo wo kvv drkd cro gkc
Kxn xyg wi lsddob rkxnc mrkpo loxokdr dro mvyenc yp grkd gkc ofobidrsxq.
Yr, dro zsmdeboc rkfo kvv loox gkcron sx lvkmu, dkddyyon ofobidrsxq...
S dkuo k gkvu yedcsno, S'w cebbyexnon li cywo usnc kd zvki
S mkx poov drosb vkeqrdob, cy gri ny S cokb?
Yr, kxn dgscdon dryeqrdc drkd czsx byexn wi rokn, S'w czsxxsxq, yr,
S'w czsxxsxq, ryg aesmu dro cex mkx nbyz kgki
Kxn xyg wi lsddob rkxnc mbknvo lbyuox qvkcc yp grkd gkc ofobidrsxq
Kvv dro zsmdeboc rkfo kvv loox gkcron sx lvkmu, dkddyyon ofobidrsxq...
Kvv dro vyfo qyxo lkn debxon wi gybvn dy lvkmu
Dkddyyon kvv S coo, kvv drkd S kw, kvv S'vv lo... iokr...
```

## Task 2

Write a program that will print the contents read from SI coded. The coding is done letter by letter, so that each letter (only letters, not digits, dots, ...) is replaced with the letter 3 places after in the alphabet. In case of the letters at the end of the alphabet, the counting continues cyclic from the beginning of the alphabet. In the final coded text all letters are lowercase. Example letter a is coded to d, H is coded to k, p is coded to s, x is coded to a, etc.

For example:
Input 	

`Momentalno go testiram resenieto na mojata treta zadaca!`
	
Result

`prphqwdoqr jr whvwludp uhvhqlhwr qd prmdwd wuhwd cdgdfd!`

## Task 3

Let $A = {a1, a2, .. a_n}$ is an array of integers. The size of the array n and the elements of the array are read from SI. Write a program that will transform the array so each element of the original array is replaced with the number of appearance of the least significant digit (the right most) in the number itself. Print the result array on the standard output.

Compute the count of given digit in a number with separate recursive function.


For example:
Input 	
```
3
18181818 900003 505
```
	
Result

`4 1 2`

## Task 4

Write a program that will read unknown number of three integers, and for each triple (a, b, c) will print the number (a or b) that contains the digit c more times on even positions (the positions are counted from right to left, and the first position is 1).

For example:
Input 	
```
5436666 542456 6
1232432 3435 2
121211 22222 1
3333 4444 3
555514 1212 1
889999 99 9
50 20 2
81 21 8
```
Result
```
5436666
1232432
121211
3333
1212
889999
20
81
```

## Task 5

Write a program that reads matrix with dimensions MxN (max. 100x100). At the beginning the dimensions are read, and then the elements of the matrix with values 0 or 1. Your program should count and print on SO the number of rows and columns with at least 3 consecutive appearance of elements with value 1.

Example:

```
Input 

10 4
0 0 0 1
0 1 0 0
0 0 0 1
1 0 0 0
0 0 0 1
1 0 0 1
0 1 0 0
1 0 1 1
0 1 1 0
1 0 1 1

Result

1
```

## Task 6

Read from standard input the dimensions of a matrix (m < 100 and n < 100) which contains only zeros and ones. Then read the elements of the matrix.

Read the coordinates of one element of the matrix. If the element of the read position is 0, then it should become 1 and:

- all zeros above that element to the first element with value 1 or to the start of the column,
- all zeros bellow that element to the first element with value 1 or to the end of the column,
- all zeros left from that element to the first element with value 1 or to the begin of the row and
- all zeros right from that element to the first element with value 1 or to the end of the row.

If the element of the given position is 1 than the matrix stays unchanged.

Print the changed matrix.

Example:

<p>

For given matrix <span class="nolink">\( А_{m,n} \)</span>: </p><p><span class="nolink">\( \begin{pmatrix} \color{blue}{1}  \color{blue}{1}  \color{blue}{1} \color{blue}{1}  \color{blue}{1}  \color{blue}{1}\\ \color{blue}{0}  \color{blue}{0}  \color{red}{0} \color{blue}{0}  \color{blue}{1}  \color{blue}{0}\\ \color{blue}{1}  \color{blue}{0}  \color{blue}{0} \color{blue}{0}  \color{blue}{1}  \color{blue}{1}\\ \color{blue}{1}  \color{blue}{1}  \color{blue}{0} \color{blue}{1}  \color{blue}{0}  \color{blue}{0}\\ \color{blue}{0}  \color{blue}{1}  \color{blue}{1} \color{blue}{0}  \color{blue}{0}  \color{blue}{0}\\ \color{blue}{0}  \color{blue}{1}  \color{blue}{0} \color{blue}{0}  \color{blue}{0}  \color{blue}{0}\\ \color{blue}{1}  \color{blue}{1}  \color{blue}{0} \color{blue}{0}  \color{blue}{0}  \color{blue}{0}\\ \end{pmatrix} \)</span><br>

</p>

<p>and coordinates 1 and 2 (the red element) the result matrix is:</p>

<p>

<span class="nolink">\( \begin{pmatrix} \color{blue}{1}  \color{blue}{1}  \color{blue}{1} \color{blue}{1}  \color{blue}{1}  \color{blue}{1}\\ \color{red}{1}  \color{red}{1}  \color{red}{1} \color{red}{1}  \color{blue}{1}  \color{blue}{0}\\ \color{blue}{1}  \color{blue}{0}  \color{red}{1} \color{blue}{0}  \color{blue}{1}  \color{blue}{1}\\ \color{blue}{1}  \color{blue}{1}  \color{red}{1} \color{blue}{1}  \color{blue}{0}  \color{blue}{0}\\ \color{blue}{0}  \color{blue}{1}  \color{blue}{1} \color{blue}{0}  \color{blue}{0}  \color{blue}{0}\\ \color{blue}{0}  \color{blue}{1}  \color{blue}{0} \color{blue}{0}  \color{blue}{0}  \color{blue}{0}\\ \color{blue}{1}  \color{blue}{1}  \color{blue}{0} \color{blue}{0}  \color{blue}{0}  \color{blue}{0}\\ \end{pmatrix} \)</span><br>
</p>

Input 	
```
7 6
1 1 1 1 1 1
0 0 0 0 1 0
1 0 0 0 1 1
1 1 0 1 0 0
0 1 1 0 0 0
0 1 0 0 0 0
1 1 0 0 0 0
5 5
```
Result
```
1 1 1 1 1 1 
0 0 0 0 1 0 
1 0 0 0 1 1 
1 1 0 1 0 1 
0 1 1 0 0 1 
0 1 1 1 1 1 
1 1 0 0 0 1
```

## Task 7

The dimensions of one matrix (m,n <= 100), and then the elements of the matrix are entered from the keyboard. Make a transformation of the matrix so that the middle element in each column is replaced by the difference (by absolute value) of the sum of the elements in the first half of the column and the sum of the elements in the second half of the column. If the matrix has even number of rows, the value of the middle two elements should be changed. The middle element(s) are included when calculating the sum (in the case of an odd number of rows, the middle element is included when calculating both of the sums (upper and lower sum)!). Print the transformed matrix on the standard output.

Input 	
```
6 5
0 -5 0 -100 -10
0 0 0 -30 0
0 0 0 -20 22
0 0 45 0 0
0 4 -23 0 14
0 -2 11 0 0
```
	
Result
```
0 -5 0 -100 -10 
0 0 0 -30 0 
0 7 33 150 2 
0 7 33 150 2 
0 4 -23 0 14 
0 -2 11 0 0 
```
## Task 8


Write a recursive function that will find the number of odd numbers of an array of integers. The function accepts as an arguments the array for which the number of odd numbers is required and the total number of elements in the array. The function is given with the following prototype:

int Odd (int a [], int n);

Also write the main () function to test the Odd function.

For example:

Input 	
```
25
-1
-2
-5
5
7
-7
5
100
-6
-2
6
-6
-2
-9
-110
-24
-55
2
4
6
8
10
17
24
-25
```
	
Result

`10`

## Task 9

For one integer b we say that is a parity complement of other integer a if and only if in the number b all the even digits of the number a are replaced with the corresponding (odd) digit increased by 1, and all odd digits of the number a are replaced with the corresponding (odd) digit decreased by 1 .

Example. Number b = 4013698 is a parity complement of a = 5102789.

Read from SI unknown number of integers (not more than 100), until something that is not a number is entered.

Your task is to print the smallest 5 of the parity complements of all numbers, from the smallest to the largest.

Notice: If less then 5 numbers are entered, then print all the entered numbers.

Finding the parity complement of a number should be implemented in a separate recursive function parcom(int a).

Example.

For numbers: 9641, 69403, 103007, 6, 11, 181, 20486 you should find their parity complements (those are: 8750, 78512, 12116, 7, 0, 90 and 31597, respectively), and print the 5 smallest of them in this order: 0 7 90 8750 12116.

Using global variables is FORBIDDEN.

Input:

```
 	

9641
69403
103007
6
11
181
20486
x
```

Result

```
0 7 90 8750 12116
```

## Task 10

Write a program where a matrix A read from SI (maximum value of dimensions of the matrix is 100) is transformed to a new matrix B. Each element of the new matrix B is sum of positive neighbors of the corresponding element of the matrix A. Print the new matrix B on the standard output


Input 	
```
2 3
1 -5 -9
-2 3 8
```
Result
```
0 4 8 
4 8 3 
```

## Task 11

Write a program that will read a string (not longer than 100 characters) containing letters and digits. The program should print on the standard output the letters that are between the first and the second digit, left-to-right, including the bordering digits themselves. If there is only one digit in the string, the program should print all the letters till the end of the string. If there is no digits in the string the program should print out the message "No digits".

Example:

Axvdf7dbb3bdbd88B -> 7dbb3
Isdv88mvndkv9d -> 88
vnjis9kjsnvnv -> 9kjsnvnv
dsfsrtt -> No digits

For example:
Input 	

`Isdv88mvndkv9d`
	
Result

`88`

## Task 12

An array of integers is to be read from SI. First the number N (N<=100) is entered followed by N integers. Write a program that will transform the array in the following way: starting at the beginning of the array, for each element that is equal to the next element in the array, double the value of the first one and overwrite the second one with 0. After that, rearrange the array so that all the zeroes will be moved at the end of the array, keeping the order of the other elements. Print all the elements of the array on the SO in a single line, separated by space.

Write separate functions for transforming the array and for reordering the elements.

Example: 
```
6
2 2 0 4 8 8
```

(Intermediate: 4, 0, 0, 4, 16, 0)

Output: 

`4 4 16 0 0 0`

For example:

Input 	
```
7
0 0 0 0 0 0 0
```	
Result

`0 0 0 0 0 0 0` 

## Task 13

Read a square matrix of integers from standard input. First the dimension N is entered (2 < N <= 100) and then the elements of the matrix by rows.

Transform the matrix in a way that all the elements ABOVE the main diagonal will be set to the value of the maximal element found above the main diagonal, while all the elements BELOW the main diagonal will be set to the value of the minimal element found below the main diagonal. Print out the transformed matrix.

For example:

Input
```
6
15 23 54 78 96 42
11 25 64 45 78 97
32 56 45 87 23 45
15 64 38 72 64 52
82 39 41 52 36 87
56 54 87 98 32 12
```

Result
```
15 97 97 97 97 97
11 25 97 97 97 97
11 11 45 97 97 97
11 11 11 72 97 97
11 11 11 11 36 97
11 11 11 11 11 12
```

## Task 14

Read a square binary matrix from standard input. First the dimension N is entered (1 < N <= 100) and then the elements of the matrix (either 0 or 1) by rows.

Write a program that will calculate the smallest number of necessary changes of the elements in order to transform the matrix to zero diagonal symmetrical matrix. Any transition of an element form 0 to 1 or form 1 to 0 is counts as a single change. After the conversion all the elements of the main diagonal should be 0, and the matrix should be symmetrical with respect to the main diagonal. Print the minimal number of transitions required.

For example for the input:
```
4
1 0 0 1
1 1 1 1
0 1 1 1
0 0 0 0
```
the output should be:

`7`

Explanation:

the number of changes is 7, as the matrix after the transitions could of been transformed to:
```
0 0 0 1
0 0 1 1
0 1 0 1
1 1 1 0
```

Input 	
```
2
0  1  
1  1
```
Result

`1`

## Task 15

From SI read lines of text, none of which is longer than 80 characters. Write e program that will transform the input and print it out on the standard output. The output should contain only letters (all other characters are discarded), and each word should be printed in a separate line.

For example:

Input:
```
Voi5 ovaa 6d6ato$$tek!a ke
ostanat09856 4453 sa5m2o
bu!!4kv(((((i
```

Output:
```
Vo
ovaa 
datoteka
ke
ostanat
samo
bukvi
```

## Task 16

Read words from SI. No words are longer than 20 characters. Write a program that on the SO will print all the words from the file that are unsigned hexadecimal numbers (one word per line in uppercase digits). At the end also print the total number of such numbers found in the file.

The hexadecimal numbers can contain both upper and lowercase letters a-f and A-F, but when printing them convert them all to uppercase. The possible leading zeroes are also treated as part of the number and should also be printed. Since the numbers are unsigned whole numbers no sign or decimal point is considered as part of the number.

Input:
```
The_sum_is
64
and_the_minimum_is
def
ined_as
a
035
where_signs_like
+12AB
are_not_considered
as_well_as
decimal_point_like
12.f5a
also_not
this1
or
2one
```
Output
```
64
DEF
A
035
Total: 4
```

## Task 17

Read an integer k from SI, followed by lines of characters. Print on SO the read lines transformed in such a way that all the vowels in the line will be repeated k times. 

Input
```
10
Check out that iTunes link below.
```
Output


```
Cheeeeeeeeeeck oooooooooouuuuuuuuuut thaaaaaaaaaat iiiiiiiiiiTuuuuuuuuuuneeeeeeeeees liiiiiiiiiink beeeeeeeeeeloooooooooow.
```

## Task 18

Read from SI lines. Find and print the row, where the ratio of digits/letters is largest. If there are more than one such rows print the last. No row is longer than 100 characters, and if in a row there are no letters, that row is ignored.

Input 	

```
dct4MaGaxilBB
EjjcbpTxyq1Np33VgX8zzgYU27kPgNXqh8xGKDv7lon7skaedIdTBGCmqObHiJVJa3Li6qOezrflzrE
lwmxpqkAwVxY7XhKUB4wlQvtrFfwo5X406slhHEryb44K0l9ppaoEvlrh1Vnj0p3yr4oXxCvy
rwfcwTkpzt90nkm3guA1uncNotkbJl1pquSdzuCgzBxbqP4bowyf9T4n0iEsx39aqhl3vh31bBq7asQ
6l1zv000000003333333333TakyQ
dLcGA4yseDppd6s3CUzurl2Xhh6eeX5SpSW7o0DcilYmtSljk5g19lV722jljr
```
Result	

`6l1zv000000003333333333TakyQ`

## Task 19

From SI are read dimension and elements of square matrix (MAX 100x100) of integers.

Create a new matrix where each element of the main diagonal will be replaced with the sum of all elements from the same row right from the element and elements from the same column over the element.

Also replace each element of the antidiagonal with the sum of all elements from the same row before the element and elements from the same column below the element.

The blue red elements are part of the main diagonal, the blue elements are part of antidiagonal, and the element in purple is part of both diagonals.

If there is no such elements, the element is 0. If some element is on both diagonals, both sums are summed.

Input 	
```
4
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
```
	
Result
```
3 1 1 12 
2 5 11 2 
3 7 6 3 
0 4 4 6 
```

## Task 20

Write a program that will read from SI array of natural numbers (not more than 100). Print all the elements of the array that represent strong numbers (each in new line). One number is strong if the sum of factorials of each of his digits is equal to the number itself. Example, number 145 is strong because:

145 = 1! + 4! + 5!

If a number is strong should be checked in a separate function, and for computing factorial a separate recursive function should be implemented and used.

For example:
Input 	
```
2
5034
546
```
	
Result

`Strong numbers:`


## Task 21

Read a an array of N integers from standard input (first read the number N than the elements). Than call a recursive function on the array that will change on the following way:

- $a_0 = a_{N-1}=max (a_0, a_{N-1})$
- $a_0 = a_{N-2}=max (a_0, a_{N-2})$
- ...

where **max** is a function that returns the maximum of the two numbers. The function should return the number of switched elements. Then print that number and the changed array.

For example:

Input 	
```
5
4 5 6 7 8
```
Result
```
2
8 7 6 7 8
```

## Task 22

Write a fully recursive function `triangle (n)` which given the input argument n, prints a triangle from the numbers from 1 to n. Additional functions can be used, but no loops should be used.

Example for `n=4`.

Input 	

`4`

Result
```
1
12
123
1234
```


## Task 23

N positive integers are entered from the standard input and stored in an array a (N <100)**. Also, a single-digit integer **k** is entered. Write a function that will find the maximum of the abbreviated numbers of the elements in the array **a** and provide a call to that function in the main () function. A given element of the array is abbreviated as follows: all digits smaller than or equal to **k are deleted from the number.

For example: If k = 3 and a[0] = 12345, then abbreviated a[0] becomes 45, if a[1] = 458763, a[1] becomes 45876, and a[2] = 112 is shortened to a[2] = 0. The maximum abbreviated number is 45876.

For example:
Input 	
```
3
12365
98765
654
2
```
Result
`98765`

## Task 24

N positive integers are entered from the standard input and are stored in an array (N <100). All elements that meet the next criteria should be presented on the standard output in the same order that they have appeared on the standard input. The criteria is following: the most important digit (the digit on the first place) is odd and the least important digit is even. If, no such number was entered, you should print out "No such elements!" message.

The implementation of checking the criteria should be performed in a separate function (recursive function for additional 5 points).

For example:
Input 	
```
10
12345
2345
345678
2912301
3212342
9129321
77777
213312
32322
313138
```
Result
```
345678
3212342
32322
313138
```

## Task 25

Read the dimension N (with a maximum value of 100) and the values (possible values are only 1 and 0) of one square matrix $A_ {NxN}$ from the standard input. Create a new matrix $B_ {NxN}$ in the following way:

For each element in B, write the value of the same corresponding element from A. During this procedure, if in the neighborhood of one element of A (neighbors are the elements above it or below it, on the left or right side of it) there are minimum 3 elements with a value of 1, then that element in the matrix B gets a value of 1 (although in A the corresponding value was zero).

Print the newly obtained matrix B.

Input 
```
10
1 1 0 0 0 0 0 0 1 1
0 1 1 1 0 0 1 1 1 1
0 0 1 0 0 1 0 1 0 0
0 1 1 0 1 0 0 0 1 0
1 0 0 0 0 1 0 1 0 1
0 1 0 1 0 0 0 0 1 0
0 0 0 1 0 1 0 0 1 1
1 0 0 1 1 1 0 0 0 1
1 1 1 1 0 1 0 0 0 0
0 0 0 1 1 0 1 1 0 1
```
Result
```
1 1 0 0 0 0 0 0 1 1 
0 1 1 1 0 0 1 1 1 1 
0 1 1 0 0 1 1 1 1 0 
0 1 1 0 1 1 0 1 1 0 
1 1 0 0 0 1 0 1 1 1 
0 1 0 1 0 0 0 0 1 1 
0 0 0 1 1 1 0 0 1 1 
1 0 0 1 1 1 0 0 0 1 
1 1 1 1 1 1 0 0 0 0 
0 0 0 1 1 1 1 1 0 1 
```

## Task 26

Firstly read the dimension of one matrix (m, n <= 100) from the standard input, and then the elements of the matrix. Generate an array (with at most m x n elements) of the elements of the matrix that will contain the elements of each row that appear exactly once in that row. The order of writing the elements in the array corresponds to the order of the rows and the order of the elements within the row. If the newly generated array has no elements, print N, otherwise, print the elements of the array.

For example:

Input
```
7
5
30
-10
45
-10
12
23
23
56
78
23
-12
-12
32
99
0
-1
-100
33
33
12
-7
-4
-7
-4
-23
-12
78
34
23
98
654
43
56
67
89
```
Output
```
30 45 12 56 78 32 99 0 -1 -100 12 -23 -12 78 34 23 98 654 43 56 67 89
```


## Task 27

Read the dimensions M and N (not bigger than 100) and the values (whole numbers) of one matrix A_ {MxN} from the standard input. Print out the index of the first column that has the smallest sum of all of its elements.

For example:
Input
```
3 8
1 2 3 5 7 11 13 17
19 23 29 31 37 41 43 47
53 59 61 67 71 73 79 83
```
Result
`0`

## Task 28
Write a program that reads lines no longer than 80 characters from SI. Each line consists of digits and letters.

The program should print on SO each line transformed in such way that the letters will be concatenated next to each other, followed by the sum of all numbers that appear in the row. The numbers can be with more than one digit! If there are no numbers, print 0 at the end of the line

For example:
Input 	
```
7h3r3545h4d0wJu57B3h1ndM3
5hr0ud1n63v3ryBr347h174k3
```
Result
```
hrhdwJuBhndM3623
hrudnvryBrhk596
```

## Task 29

Write a program that will read from SI words (each in a separate row) no longer than 30 letters. Find all the words  that define a palindrome only with the vowels they contain (after making the opposite word of the given one, the vowels have not changed their indexes within the word). Print these words on a standard output. The appearance of uppercase and lowercase letters should be ignored.

Input 	
```
KalAbaLAm
BananaS
WooooSH
ANMA
```
Result
```
KalAbaLAm
BananaS
ANMA
```

## Task 30


```
**.....*
**.....*
**.....*
```

(A-lines with B-stars, where A is the smaller of the two numbers found).

In the test cases, there are always exactly two numbers that appear the same most times.

Example:

Input:
```
10
2 5 3 7 5 3 3 6 4 5
```
(3 appears 3 times, 5 appears 3 times, while the others are less frequent)

Output:
```
* * * * *
* * * * *
* * * * *
```

For example:

Input
```
11
9 8 9 8 1 1 9 8 7 6 5
```
	
Output
```
* * * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
```

## Task 31

Write a program that will read lines from SI and it will print on the SO the lines preceded by the ratio of upper/lower case letters in the rows. 

Also, at the end print the number of the line with the largest ration of upper/lower case letters.


Input

```
So, so you think you can tell Heaven from Hell,
blue skies From Pain.
Can you tell a Green Field From a cold steel rail?
A smile from a veil?
Do you think you can tell?
And did they geT you to Trade Your heroes for ghosts? 
Hot ashes for trees?
```

Result

```
0.09 So, so you think you can tell Heaven from Hell,
0.13 blue skies From Pain.
0.11 Can you tell a Green Field From a cold steel rail?
0.07 A smile from a veil?
0.05 Do you think you can tell?
0.11 And did they geT you to Trade Your heroes for ghosts? 
0.07 Hot ashes for trees?
1
```


## Task 32

Words (no longer than 20 letters and each in a new line) are read from SI. Write a program that will print the word that has the biggest number of different letters. Words that have less than four letters are not taken into account during the check. Do not make a difference between upper and lower case letters. If there are more words that meet the criteria, the last one is printed.

Input
```
To
those
whom
Ive
fought
with
and
to
those
I
dont
know
your
name
we
fought
by
one
another
You
did
not
die
in
vain
```

Result

```
another
```

## Task 33

Z-diagonal of given square matrix is composed of the elements of the first row, the elements of the supportive diagonal, and the elements of the last row (marked with blue color on the example).

From SI read the dimensions of square matrix (integer N, N > 2, N<100), and the elements of the matrix (real numbers). Store the elements of the Z-diagonal in a array, starting from the first row, continuing with the supportive diagonal, and finishing with the last row (the last element of the first row is the same element with the first element of the supportive diagonal, and the last element of the supportive diagonal is the same as the first element of the last row, and these elements should be stored only once). The resulted array should be printed on the SO. Then print the original matrix, but with the elements of Z-diagonal in reverse order.

Input 	
```
4
5 5.5 6 1.2
8 95.1 21.3 13
34 4.1 37.4 22
4.1 5.5 0.7 7
```
	
Result
```
5 5.5 6 1.2 21.3 4.1 4.1 5.5 0.7 7
7 0.7 5.5 4.1
8 95.1 4.1 13
34 21.3 37.4 22
1.2 6 5.5 5
```