#include<iostream>
using namespace std;

int main() {
    float price;
    int installments;
    int interestRate;

    cin >> price;
    cin >> installments;
    cin >> interestRate;

    float total = price * (1 + (interestRate / 100.0));
    float installmentAmount = total / installments;


    cout << "Total price: " << total << endl;
    cout << "Installments: " << installmentAmount << endl;
}