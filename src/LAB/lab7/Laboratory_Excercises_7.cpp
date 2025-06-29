//Lab 7 - Recursion

//Task 1 Mon


// Enter number n, print the sum of even numbers of the
// numbers up to n ex.for n=10 (10+8+6+4+2)=30
/*
 * INPUT: 10
 * OUTPUT: 30
 */
/*#include<iostream>
using namespace std;

int sum(int number) {
    if(number == 0) {
        return 0;
    }
    else {
        if(number%2 == 0) {
            return number + sum(number-2);
        } else {
            return sum(number-1);
        }
    }
}
int main() {
    cout << sum(12);
    return 0;
}*/

//Task 2 Mon
/*
 * Enter a number n and (single digit) k.
 * Use recursive function to mark the digits from N
 * which less or equal to k to be 0,
 * to mark the digits of N which greater than K with 1.
 * CONDITION 1: digit<=k -> 0
 * CONDITION 2: digit>k  -> 1
 * INPUT: 77134 5
 * OUTPUT: 11000
 */
#include<iostream>
using namespace std;

int markDigits(int n, int k) {
    //Base: single digit
    if(n<10) {
        if(n<=k) {
            return 0;
        } else {
            return 1;
        }
    }
    int lastDigit = n%10;
    int remaining = n/10;
    int markedRemainingDigit = markDigits(remaining, k);
    int markedLastDigit;
    if(lastDigit <= k) {
        markedLastDigit = 0;
    } else {
        markedLastDigit = 1;
    }

    return markedLastDigit + markedRemainingDigit * 10;;
}
int main() {
    int N, K;
    cin>>N>>K;
    cout << markDigits(N, K);
    return 0;
}

//Task 3 Mon
/*
*Use a recursive void function  void printCharacters(char c, bool backwards).
*Print all the characters of the alphabet from that char c regarding of the
*value of the bool backwards
    INPUT : c 0
    OUTPUT: cba
 */
/*#include<iostream>
using namespace std;

void printCharacters(char c, bool backwards) {
    //Base case:
    if(!((c>='a' && c <= 'z') || (c>='A' && c <= 'Z'))) {
        return;
    }
    cout << c; //print the current character

    if(!backwards) {
        printCharacters(c-1, backwards);
    } else {
        printCharacters(c+1, backwards);
    }
}
int main() {
    char c;
    bool backwards;
    cin >> c;
    cin >> backwards;
    printCharacters(c, backwards);
    return 0;
}*/