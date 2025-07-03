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
