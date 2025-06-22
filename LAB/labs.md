## Naviagtion


[**Lab 1: Conditionals**](#lab-1--conditionals)
[**Lab 2: Loops**](#lab-2--loops)
[**Lab 3: Loops 2**](#lab-3-loops-2)
[**Lab 4: Funtions**](#lab-4-functions)
[**Lab 5: Arrays**](#lab-5-arrays)
[**Lab 6: Matrices**](#lab-6-matrices)
[**Lab 7: Recursion**](#lab-7-recursion)
[**Lab 8: Pointers**](#lab-8-pointers)
[**Lab 9: Character arrays (C-style strings)**](#lab-9-character-arrays-c-style-strings)



# Lab 1 : Conditionals


### Task 1

Да се напише програма која за петцифрен број, внесен од стандарден влез, ќе го "искастри". Еден број е искастрен ако неговата најлева и најдесна цифра се избришани. На излез да се испечатат искастрениот број и во нов ред збирот на цифрите кои се кастрат.

Појаснување: бројот 54321 искастрен е 432. Цифрите кои се кастрат се 5 и 1.

---

Write a program that, for a five-digit number entered from standard input, will 'sharpen' it. A number is 'sharpened' if its leftmost and rightmost digits are removed. Output the sharpened number, and in the second line, print the sum of the digits that were sharpened.

Explanation: The number 54321 is sharpened to 432. The digits that are sharpened are 5 and 1.


For example:

Input	
`54321`

Result
```
432
6
```


### Task 2:

Од стандарден влез се читаат два телефонски броја и времетраење на разговорот во минути.
Да се пресмета цената на повикот доколку знаеме дека првите 30 минути чинат 3 ден/мин,
а после тие 30 мин цената на 1 минута е 2ден.
Дополнително доколку двата телефонски броја се на ист оператор да се пресмета 30% попуст.

оператор1 ги користи (071, 072, 073)
оператор2 ги користи (074, 075, 076)

---

Two phone numbers and the duration of the call in minutes are read from standard input. Calculate the cost of the call, knowing that the first 30 minutes cost 3 den/min, and after those 30 minutes, the price per minute is 2 den. Additionally, if both phone numbers are from the same operator, a 30% discount should be applied.

Operator1 uses (071, 072, 073)
Operator2 uses (074, 075, 076)


For example:

Input	
```
076388299
074387600
```
Result
```
45
84
```

### Task 3

На ФИНКИ е време за упис на нови студенти. За студент да се упиши, треба да пристигне на факултетот пред 9 часот и да чека ред за да биде услужен од студентска служба. Студентска служба почнува со работа од 9 часот, работи 2 часа, прави пауза 30 минути, работи 1 час, прави пауза 30 минути, работи 2 часа и нејзиното работно време завршува.

На студентска служба и е потребно точно 5 минути да услужи 1 студент.

Ваша задача е, ако знаете кој по ред е одреден студент во редицата за чекање, да го испечатете времето во часови и минути кое тој го чека за да биде услужен или да испечати на стандарден излез доколку студентот не е услужен.

---

At FINKI, it's time to enroll new students. For a student to enroll, he should arrive at the faculty before 9 a.m. and wait in line to be served by the student service. student service starts working from 9 o'clock, works 2 hours, takes a break of 30 minutes, works 1 hour, takes a break of 30 minutes, works 2 hours and its working time ends.

Student service needs exactly 5 minutes to serve 1 student.

Your task is, if you know which number a certain student is in line, to print the time in hours and minutes that he will be waiting to be served, or “Student will not be served at all” if he will not be served at all because the working hours of the student service will end.

For example:

Input	
`26`

Result
`Hours: 2, minutes: 35`

Input
`12`
Result
`Hours: 0, minutes: 55`


# Lab 2 : Loops


### Task 1

From the standard input enter a number `N`. Output all 3-digit numbers divisible with `N`.

### Task 2

Initialize number `a` , `b` and `N`. Output all numbers to `N`, which are the sum of `a` and `b`

### Task 3

From the Standard Input enter `P` the times you should enter a number, `Q` - reference value  that you should compare with `N` values that are entered through the loop
compare if `N` is equal, greater or lesser than `Q` show the results in percentage , eg. for entered numbers what is percentage that `N` is equal to `Q`, greater or less than `Q`.

### Task 4

Da se proveri so koi dvocifreni broevi `X` e deliv, isto taka zbirot na cifrite na tie dvocifreni broevi da bide delliv so toj broj `X` i istite da se ispechatat.



# Lab 3: Loops 2 


### Task 1

Input 2 numbers, a and b. b is between 0 and 9. Find how many times b is in a.

INPUT:	OUTPUT:
`12334`	`2`



### Task 2

Input binary number form SI until no binary is entered. Find the decimal number of the entered binary and print.

INPUT:	OUTPUT:
`101`	`5`


### Task 3

Enter three number `X` , `C` and `P`. Print 10 numbers greater than `X`, such that it contains number C, P times.

INPUT:		OUTPUT:

`100 2 2`		`122,202,212 etc.`

TUESDAY


### Task 4

From SI enter number X and digit K. Print in percentages how much of the digits of X are lesser than K
```
INPUT:		OUTPUT:
12345 5		80%
```
### Task 5

Print first 10 numbers (in descending order) that are less than entered number X which are palindrome - and divided by the sum of it's own digits.

INPUT:	OUTPUT:
`1000`	`999 888 828 777 etc.`

### Task 6

From SI are entered positive whole numbers, until there are entered different than positive whole numbers. For each input display the greatest digit of the number, at the end find the average of all the greatest digits of the entered numbers. 
```
INPUT    OUTPUT
123	     3

INPUT    OUTPUT 
789	     9

INPUT    OUTPUT
.	     6
```

# Lab 4: Functions

### Task 1

Se vnesuvat broevi se duri ne se vnesi nesto so ne e broj, da se ispecat prvite dve najznacani cifri

### Task 2

Vnesuvas broj X i vnesuvas neodreden broj celi broevi se dodeka ne se vnese nesto razlicno od broj.
Proveruvas (so funkcii sekako) kolku pati se sodrzi brojot X vo sekoj od tie broevi.

### Task 3

Од стандарден влез се внесуваат број x и n, па потоа n цели броеви. Да се провери дали бројот x се содржи во внесените n броеви од тастатура. Секогаш x ќе биде помал од внесените n броеви после него.
Броевите што го исполнуваат условот да се испечатат на екран. Доколку нема такви да се испечати Nema.

Пример: Најпрво се внесуваат x и n (нека x = 23, n = 4). Потоа се внесуваат n (во случајов 4) броеви од тастатура (нека бидат 1234, 2333, 1122, 1114455). Броевите што треба да се испечатат на екран се:
1234, 2333, затоа што во нив го содржат бројот х (во случајов 23).

For example:

Input    
```
23 4
1234
2333
121134
341125
```

Result
```
1234
2333
```


# Lab 5: Arrays

### Task 1

Declare array and from SI enter n elements:

- find the min and max number in the array , swap those values, and print the modified array.


### Task 2

Input array with `n` elements, in which it is checked how many elements are greater or equal to others. 

Input:
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


### Task 3

Find the duplicate of a number in the array from the end, when the duplicate is found remove it and print the modified array on SO

Input
`1 2 3 1 2 1`
Output
`1231`


### Task 4

Da se vnesat n elementi, da se najde nivniot prosek, da se najde najgolemiot element vo nizata, tie broevi shto se pogolemi od prosekot na nizata da se smenat so najgolemiot

Input:
`1 2 3 4 5 4`
Output:
`1 2 3 5 5 5`

# Lab 6: Matrices

### Task 1
Enter a square matrix from SI and do the following changes:

Replace the last element of the matrix with the maximum of each row and find the average of the new matrix.

### Task 2

Enter a square matrix from SI and do the following changes:

Transform the numbers below the main diagonal and antidiagonal with negative signs

### Task 3

You have an `NxM` matrix as input, where N and M are entered first, and then the elements of the matrix.
Your task is to print the diagonal elements (see image) starting from the first row of the matrix.
See test examples for printing
Note: be careful in case the matrix is not square

Input1          
```
3               
3               
1 2 3           
4 5 6           
7 8 9
```

Output1
```         
1               
2 4             
3 5 7           
```                

Input2
```
2
4
1 2 3 4
5 6 7 8
```
Output2
```
1
2 5
3 6
4 7
```
### Task 4

Task 1: Enter a square matrix with n rows cols, FIND THE COLUMN WITH THE LARGEST SUM OF ELEMENTS
the found sum add to every element of that specific column and print the transformed matrix.

### Task 5

Transform the numbers below the main diagonal and antidiagonal with negative signs


### Task 6

Enter two matrices with dimensions m and n, count how many columns from the first matrix is in the second matrix.

Input
```
4 4
1 2 4 6
2 3 4 5
5 1 3 1
1 3 4 4

2 2 2 4
3 2 3 5
5 2 1 3
1 1 3 4
```
Output
`1`


# Lab 7: Recursion

### Task 1

Enter number N, print the sum of all even digits of the number N.
use recursive function

`(1 2 3 4 5 6 7 8 9 10) -> (2+4+6+8+10)`

INPUT:  `10`  
OUTPUT: `30`


### Task 2

Enter number N and K (onedigit). Use recursive function to mark the digits with 0 or 1.
 - with 1 if the K is greater or equal than the digit
 - with 0 if the K is less than the digit

INPUT:  `77134 5		7045 3`
OUTPUT: `11000		1011`


### Task 3

Use `void (char c, boolbackwards)` print all the characters from the alphabet , from the character c backwards if boolbackwards is 0 and forward if boolbackward is 1.

INPUT:  `c 0`
OUTPUT: `cba`


### Task 4

Use a recursive function triangle(int n) to print number from 1 to n
in the given format. Loops are not allowed

INPUT: `4`

OUTPUT:
```
1234
123
12
1
```

### Task 5

Use a recursive function to check if a given number is ZigZag or not.
Example if the number `101010` is given `(1 > 0, 0 < 1 , 1 > 0 , 0 < 1...)`
or   `(0 < 1, 1 > 0,0 < 1, 1 > 0,...)`

INPUT: `101010`
OUTPUT: `1`

# Lab 8: Pointers


### Task 1

Write a function `void sort(int x, int y, int z)` that sorts three numbers in descending order,
such that x will hold the largest number and z the smallest.

The main function must not be modified.

STARTER CODE
```
int main() {
    int a, b, c;
    cin>>a>>b>>c;
    sort(&a, &b, &c);
    cout<<a<<b<<c<<endl;
return 0;
}
```

Input 
`1 2 3`
Result
`3 2 1`


### Task 2

From the standard input, the number of elements in an array and the array itself are provided.
Your task is to write a single function that will find the largest and smallest elements of the array,
calculate the sum of the elements (after the transformation) of the array and transform the array such
that each element is increased by the difference between the largest and smallest elements.
Finally, print the largest element, the smallest element, the sum of the elements, and the
transformed array.  

Input
```
5
2 4 5 1 3
```
Result
```
MAX -> 5
MIN -> 1
SUM -> 15
6 8 9 5 7
```


### Task 3

TASK 3.
For the needs of professors and assistants at FINKI, a program is required to scale the scores of students for a given exam.

From the standard input, the scores of up to 100 students are to be read and stored in an array.

Define a function `void scale(int scores[], int n)` that takes an array of numbers
(the scores of students on the exam) and performs the scaling as follows:

- Find the maximum score on the exam (e.g., 88 out of 100).
- Calculate the ratio 100/max
    - 100/max (e.g., 100/88 = 1.13636).
- Multiply all the scores in the array by this ratio so that the student with the highest score gets 100 points.
- Print the array with the scaled scores.

The transformation should be done in-place, without using an auxiliary array.

Input 
```
5
10 20 30 40 82
```
Result
`12.20 24.39 36.59 48.78 100.00`


# Lab 9: Character arrays (C-style strings)

### TASK 1
Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што ќе ги претворите самогласките во големи букви, а согласките во мали букви.

Вашата програма треба да дефинира функција void transform (char* text) .

Користете ја библиотеката `<cctype>` 

---


From the standard input, read a sequence of characters with a maximum of 100 characters. Transform the sequence such that vowels are converted to uppercase letters, and consonants are converted to lowercase letters.

Your program should define the function: void transform(char* text);

Use the `<cctype>` library.



For example:

Input	
`ABCDEFGHIJKLMNOPQRSTUVWXYZ`
Result
`AbcdEfghIjklmnOpqrstUvwxyz`




### TASK 2
Од тастатура се вчитува текстуална низа дадена во еден ред (низата може да има најмногу 300 знаци). По вчитување на низата, се вчитува еден знак c . 

На екран да се испечати поднизата која почнува од првото појавување на знакот c до последното појавување на знакот c. 

Да се игнорира големината на буквите.

---

Write a program that reads a textual string from the keyboard, read from a single line (the string can have up to 300 characters). After reading the string, a character 'c' is read.

The program then prints to the screen the substring that begins with the first occurrence of the character 'c' and ends with the last occurrence of the character 'c'.

Ignore the case of the letters


For example:

Input	
```
Zdravo kako si? 
a
```
Result
`avo ka`



### TASK 3

Напиши програма која ќе испечати колку зборови се палиндроми во дадена реченица (линија).

Првен се вчитува бројот N, потоа се вчитуваат N линии.

Напомена: искористи `cin.ignore()` после вчитување на N доколку користите `cin.getline()`.

Зборови од 1 буква се сметаат како палиндром, и проверката за палиндром да биде case-insensitive (Racecar е палиндром исто како и racecar)

Не е дозволено користење на тип од string.

For example:

Input	
```
2
Was it a car or a cat I saw
Hello world
```
Result
```
Was it a car or a cat I saw: 3
Hello world: 0
```
-----------------------------------
Input
```
2
There is a racecar on the track
This is not palindromic
```
Result
```
There is a racecar on the track: 2
This is not palindromic: 0
```