#include <iostream>
#include <cstring>
using namespace std;

bool searchHorizontalLR(char matrix[51][51], int n, char *word, int &startRow, int &startCol, int &endRow, int &endCol) {
    int len = strlen(word);
    for (int i = 0; i < n; i++) { // looping through the rows
        for (int j = 0; j <= n - len; j++) { // 5 - 3 2
            bool found = true;
            for (int k = 0; k < len; k++) {
                if (matrix[i][j + k] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                startRow = endRow = i;
                startCol = j;
                endCol = j + len - 1;
                return true;
            }
        }
    }
    return false;
}

bool searchHorizontalRL(char matrix[51][51], int n, char *word, int &startRow, int &startCol, int &endRow, int &endCol) {
    int len = strlen(word);
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= len - 1; j--) {
            bool found = true;
            for (int k = 0; k < len; k++) {
                if (matrix[i][j - k] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                startRow = endRow = i;
                startCol = j;
                endCol = j - len + 1;
                return true;
            }
        }
    }
    return false;
}

bool searchVerticalTB(char matrix[51][51], int n, char *word, int &startRow, int &startCol, int &endRow, int &endCol) {
    int len = strlen(word);
    for (int j = 0; j < n; j++) {
        for (int i = 0; i <= n - len; i++) {
            bool found = true;
            for (int k = 0; k < len; k++) {
                if (matrix[i + k][j] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                startRow = i;
                endRow = i + len - 1;
                startCol = endCol = j;
                return true;
            }
        }
    }
    return false;
}

bool searchVerticalBT(char matrix[51][51], int n, char *word, int &startRow, int &startCol, int &endRow, int &endCol) {
    int len = strlen(word);
    for (int j = 0; j < n; j++) {
        for (int i = n - 1; i >= len - 1; i--) {
            bool found = true;
            for (int k = 0; k < len; k++) {
                if (matrix[i - k][j] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                startRow = i;
                endRow = i - len + 1;
                startCol = endCol = j;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    char matrix[51][51];
    char word[11];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cin >> word;

    int startRow = 0, startCol = 0, endRow = 0, endCol = 0;
    bool found = false;

    if (searchHorizontalLR(matrix, n, word, startRow, startCol, endRow, endCol)) {
        found = true;
    } else if (searchVerticalTB(matrix, n, word, startRow, startCol, endRow, endCol)) {
        found = true;
    } else if (searchHorizontalRL(matrix, n, word, startRow, startCol, endRow, endCol)) {
        found = true;
    } else if (searchVerticalBT(matrix, n, word, startRow, startCol, endRow, endCol)) {
        found = true;
    }

    if (found) {
        cout << startRow << ", " << startCol;
        cout << " -> " << endRow << ", " << endCol << endl;
    } else {
        cout << "Not Found" << endl;
    }
    return 0;
}
