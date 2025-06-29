//Created: question_5.cpp
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    char matrix[100][100];
    char character = 'A';

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < N; j++) {
                matrix[i][j] = character;
                character++;
                if (character > 'I') character = 'A';
            }
        } else {
            for (int j = N - 1; j >= 0; j--) {
                matrix[i][j] = character;
                character++;
                if (character > 'I') character = 'A';
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
