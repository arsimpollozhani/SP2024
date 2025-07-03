## Task1 

Write a function void sort(int x, int y, int z) that sorts three numbers in descending order,
such that x will hold the largest number and z the smallest.

## Task 2

From the standard input, the number of elements in an array and the array itself are provided.
Your task is to write a single function that will find the largest and smallest elements of the array,  calculate the sum of the elements (after the transformation) of the array and transform the array such that each element is increased by the difference between the largest and smallest elements.
Finally, print the largest element, the smallest element, the sum of the elements, and the  transformed array.  

Input
```
5
2  5 1 34
```
Result
```
MAX -> 5
MIN -> 1
SUM -> 15
6 8 9 5 7
```
## Task 3

For the needs of professors and assistants at FINKI, a program is required to scale the scores of students for a given exam.

From the standard input, the scores of up to 100 students are to be read and stored in an array.

Define a function `void scale(int scores[], int n)` that takes an array of numbers
(the scores of students on the exam) and performs the scaling as follows:

- Find the maximum score on the exam (e.g., 88 out of 100).
- Calculate the ratio  `100/max`
> 100/max (e.g., 100/88 = 1.13636).

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