#include <iostream>
using namespace std;

int main() {
    int choice;
    int value;
    cin >> value;
    do {
        do {
            cout << "Menu:" << endl;
            cout << "1 - Increase" << endl;
            cout << "2 - Decrease" << endl;
            cout << "3 - Double" << endl;
            cout << "0 - Exit" << endl;
            cout << "Choice: ";
            cin >> choice; 
        } while (choice < 0 || choice > 3);

        switch (choice) {
            case 1: value++; break;
            case 2: value--; break;
            case 3: value*=2; break;
            case 0: cout << "End"<< endl; break;
            default: cout << "Invalid choice" << endl; break;
        }
        
        cout << "Value: " << value << endl;

    } while (choice != 0);

    return 0;
}