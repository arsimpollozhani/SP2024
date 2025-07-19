//
// Created by win11pro on 11/9/2024.
//
//********************************************
//QUESTION 5
//********************************************

/*
 * From SI read one number that represents today's date in the format
 * DDMMYYYY. Then read one integer N, after you read N dates of birth
 * in the given format. For each of the N read dates your program should
 * print "YES" if on today's date (read in the begininng) the person
 * with that date have more or equal to 18 years, otherwise should
 * print "NO"
 */

#include<iostream>
using namespace std;

int main() {
    int today, date, N;
    cin >> today;
    cin >> N;
    int todayDay = today / 1000000;
    int todayMonth = (today / 10000) % 100;
    int todayYear = today % 10000;


    for (int i = 1; i <= N; i++) {
        cin >> date;

        int birthDay = today / 1000000;
        int birthMonth = (today / 10000) % 100;
        int birthYear = today % 10000;

        int age = todayYear - birthYear;
        if (todayMonth < birthMonth || (todayMonth == birthMonth && todayDay < birthDay)) {
            age--;
        }
        if (age >= 18) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
