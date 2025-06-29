#include <iostream>
using namespace std;

int main() {
    char answer;
    cout << "Is SP easy to learn? (y/n): ";
    cin >> answer;
    switch (answer) {
        case 'Y':
        case 'y':
            cout << "I think so too!" << endl;
            break;
        case 'N':
        case 'n':
            cout << "Really?" << endl;
            break;
        default:
            cout << "Is this a yes or no question?" << endl;
    }
  return 0;
}