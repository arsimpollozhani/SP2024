//
// Created by win11pro on 11/9/2024.
//
//**************************
//QUESTION 11
//************************


#include<iostream>
using namespace std;

int sumOfAngles(int a, int b, int c) {
    return a + b + c;
}

int main() {
 int a, b, c;
 cin >> a >> b >> c;
 // test cout << sumOfAngles(a, b, c) << endl;
 if(sumOfAngles(a,b,c) != 180) {
    cout << "NO" << endl;
 } else {
    cout << "YES" << endl;
  if (a > 90|| b > 90 || c > 90 ) {
    cout << "OBTUSE"<<endl;
  } else if(a == 90 || b == 90 || c == 90) {
    cout << "RIGHT"<<endl;
  } else  {
    cout << "ACUTE"<<endl;
  }
 }

 return 0;
}

