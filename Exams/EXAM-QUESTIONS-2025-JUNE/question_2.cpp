//Created: question_2.cpp
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int matrix[100][100]; 

    int digit = 1;

    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            
            for (int j = 0; j < N; ++j) {
                matrix[i][j] = digit;
                digit = (digit + 1) % 10;
            }
        } else {
           
            for (int j = N - 1; j >= 0; --j) {
                matrix[i][j] = digit;
                digit = (digit + 1) % 10;
            }
        }
    }

    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << " ";
            
        }
        cout << endl;
    }

    return 0;
}
