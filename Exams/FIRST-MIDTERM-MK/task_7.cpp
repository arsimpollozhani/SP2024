//Created: task_7.cpp
#include<iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    if(number > 2) {
        for(int i = 0; i < number ; i++) {
            for(int j = 0; j < number; j++) {
                if(j == 0 || j == number - 1 ) {
                    cout << "%";
                }
                else if (i == 0 || i == number - 1) {
                    cout <<"@";
                }else {
                    cout << ".";
                }

            }
            cout << endl;
        }
    } else {
        return 1;
    }
}