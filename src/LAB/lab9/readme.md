
## TASK 1
Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што ќе ги претворите самогласките во големи букви, а согласките во мали букви.

Вашата програма треба да дефинира функција `void transform (char* text)` .

Користете ја библиотеката `<cctype>`

---


From the standard input, read a sequence of characters with a maximum of 100 characters. Transform the sequence such that vowels are converted to uppercase letters, and consonants are converted to lowercase letters.

Your program should define the function: `void transform(char* text)`

Use the `<cctype>` library.



For example:

Input
`ABCDEFGHIJKLMNOPQRSTUVWXYZ`
Result
`AbcdEfghIjklmnOpqrstUvwxyz`




## TASK 2

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



## TASK 3

Напиши програма која ќе испечати колку зборови се палиндроми во дадена реченица (линија).

Првен се вчитува бројот `N`, потоа се вчитуваат `N` линии.

Напомена: искористи `cin.ignore()` после вчитување на `N` доколку користите `cin.getline()`.

Зборови од 1 буква се сметаат како палиндром, и проверката за палиндром да биде case-insensitive (Racecar е палиндром исто како и racecar)

**Не е дозволено користење на тип од string.**

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