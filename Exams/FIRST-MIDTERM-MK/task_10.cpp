//Created: task_10.cpp
#include <iostream>
using namespace std;

/*
Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми
односно помали една во однос на друга. На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
Пр. 343, 4624, 6231209
Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). Читањето завршува во моментот кога
ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.
*/

bool cikcak(int x) {
    int posledna, predposledna, predpredposledna;

    while (x >= 100) {
        posledna = x % 10;
        predposledna = (x / 10) % 10;
        predpredposledna = (x / 100) % 10;

        // Check for zig-zag pattern
        if ((posledna > predposledna && predposledna < predpredposledna) ||
            (posledna < predposledna && predposledna > predpredposledna)) {
            x /= 10; // Move to the next digit
            } else {
                return false; // Not a zig-zag
            }
    }

    // Handle two-digit numbers
    if (x < 100) {
        posledna = x % 10;
        predposledna = (x / 10) % 10;
        return posledna != predposledna; // Ensure the two digits are not equal
    }

    return true;
}

int main() {
    int broj;
    while (cin >> broj) { // Read numbers until non-numeric input
        if (broj < 10) {
            continue; // Ignore numbers less than 10
        }

        if (cikcak(broj)) {
            cout << broj << endl; // Print zig-zag numbers
        }
    }

    return 0;
}
