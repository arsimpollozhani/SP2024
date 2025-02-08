//
// Created by win11pro on 11/9/2024.
//
//**************************
//QUESTION 10
//************************



#include<iostream>
using namespace std;
int main() {

 int z;
 int x , y;
 int pair = 0, isPair = 0;
 if (cin >> z) {
  while (cin >> x >> y) {
      if(x == 0 && y == 0){
          break;
      }
           isPair++;
          if((x+y)== z) {
           pair++;
          }

  }
 }
 cout << "You entered "<<pair << " pairs of numbers that have a sum equal to "<< z <<endl;
 cout << "The percentage of pairs with sum "<<z<<" is " << float(pair) / isPair *100.0 << "%" << endl;
 return 0;
}
