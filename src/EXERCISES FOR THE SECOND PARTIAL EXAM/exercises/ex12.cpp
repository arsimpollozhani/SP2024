//
// Created by win11pro on 1/10/2025.
//
/*#include<iostream>
#include<cstring>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int countVowelOccurrences(char *str) {
    int size = strlen(str);
    int occurrences = 0;
    for(int i = 0; i < size; i++) {
        int counter = 0;
        while(isalpha(str[i]) &&  isVowel(str[i])) {
            counter++;
            i++;
        }
        if(counter>1) {
            occurrences++;
        }
    }
    return occurrences;
}

int main() {
    char str[101];
    int counter[100] = {0};
    int maxResult = 0;
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cin.getline(str, 101);
        int result = countVowelOccurrences(str);
        counter[result]++;
        if (result > maxResult) {
            maxResult = result;
        }
    }
    for(int i = 0; i <= maxResult; i++) {
        cout << i << ": " << counter[i] << endl;
    }
    return 0;
}*/


/*#include<iostream>
#include<cstring>
using namespace std;

int occurrs(char *big, char *small) {
    char *result = strstr(big, small);
    if (result == nullptr) {
        return 0;
    } else {
        return 1 + occurrs(result + 1, small);
    }
}

int main() {
    char start[51];
    cin.getline(start,51);

    int counter[100] = {0};
    int maxResult = 0;
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        char str[101];
        cin.getline(str,101);
        int result = occurrs(str, start);
        counter[result]++;
        if(maxResult < result) {
            maxResult = result;
        }
    }

    for(int i = 0; i <= maxResult; i++) {
        cout << i << ": " << counter[i] << endl;
    }
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main() {
    int m, n;
    int matrix[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int z = 1; z < min(m, n); z++) {
        int sum = 0;
        //first row
        for(int j = 0; j <= z; j++) {
            sum+= matrix[0][j];
        }

        for(int j = 0; j <=z ; j++) {
            sum+= matrix[z][j];
        }

        for(int i = 1; i <= z-1; i++) {
            sum+= matrix[i][z-i];
        }
        cout << sum << endl;
    }
    return 0;
}*/


/*#include<iostream>
using namespace std;

void print(int n) {
    cout << n << " ";
    if(n<=0) {
        return ;
    } else {
        print(n-5);
        cout << n << " " ;
    }
}*/


/*#include<iostream>
#include<cstring>
using namespace std;

int occurrsConsecutive(char *big, char *small) {
    int len = strlen(small);
    int maxCount = 0;
    int currentCount = 0;
    while(*big != '\0') {
        if(strncmp(big, small, len) == 0) {
            ++currentCount;
            big += len;
        } else {
            if(currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount = 0;
            big++;
        }
    }
    if(currentCount > maxCount) {
        maxCount = currentCount;
    }
    return maxCount;
}

int main() {
    char start[21];
    cin.getline(start, 21);
    int n;
    int maxResult = 0;
    int counter[100] = {0};
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        char str[151];
        cin.getline(str, 151);
        int result = occurrsConsecutive(str, start);

        counter[result]++;

        if(maxResult < result) {
            maxResult = result;
        }
    }

    for(int i = 0; i <= maxResult; i++) {
        cout << i << ": " << counter[i] << endl;
    }
    return 0;
}*/


/*
#include<iostream>
using namespace std;

int main() {
    int m, n;
    int matrix[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int z = 1; z < min(m, n); z++) {
        int sum = 0;
        for(int i = 0; i <= z; i++) {
            sum += matrix[i][0];
        }

        for(int i = 0; i <= z; i++) {
            sum += matrix[i][z];
        }

        for(int i = 0; i <= z-1; i++) {
            sum += matrix[i][i];
        }
    }
    return 0;
}
*/


/*#include<iostream>
#include<cstring>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countConsonantOccurrence(char *str) {
    int count = 0;
    for(int i = 0; str[i] != '\0';) {
        if(isalpha(str[i]) && isalpha(str[i + 1])) {
            if(!isVowel(str[i]) && !isVowel(str[i+1])) {
                count++;
                i+=2;
            } else {
                i++;
            }
        } else {
            i++;
        }
    }
    return count;
}

int main() {
    int n;
    int counter[100] = {0};
    cin >> n;
    cin.ignore();
    int maxRes = 0;
    for (int i = 0; i < n; i++) {
        char str[101];
        cin.getline(str, 101);
        int res = countConsonantOccurrence(str);
        counter[res]++;
        if(maxRes < res) {
            maxRes = res;
        }
    }

    for(int i = 0; i <= maxRes; i++) {
        cout << i << ": " << counter[i] << endl;
    }
    return 0;
}*/



/*
#include<iostream>
#include<cstring>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countOccurrences(char *str) {
    int size = strlen(str);
    int occurrences = 0;
    int count = 0;
    for(int i = 0;i < size; i++) {
        count = 0;
        while(isalpha(str[i]) && isVowel(str[i])) {
            count++;
            i++;
        }
        if(count > 1) {
            occurrences++;
        }
    }
    return occurrences;
}


int main() {
    int n, maxResult = 0;
    int counter[100] = {0};
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        char str[101];
        cin.getline(str, 101);
        int result = countOccurrences(str);
        counter[result]++;
        if(result > maxResult) {
            maxResult = result;
        }
    }

    for(int i = 0; i <= maxResult; i++) {
        cout << i << ": " << counter[i] << endl;
    }
    return 0;
}*/

/*#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

int maxElementAboveDiagonal(int matrix[100][100], int m) {
    int max = INT_MIN;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if(i<j) {
                if(matrix[i][j]>max) {
                    max = matrix[i][j];
                }
            }
        }
    }
    return max;
}

int minElementBelowDiagonal(int matrix[100][100], int m) {
    int min = INT_MAX;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if(i>j) {
                if(matrix[i][j]<min) {
                    min = matrix[i][j];
                }
            }
        }
    }
    return min;
}

void transformMatrix(int matrix[100][100], int m) {
    int max = maxElementAboveDiagonal(matrix, m);
    int min = minElementBelowDiagonal(matrix, m);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if(i > j) {
                matrix[i][j] = min;
            }
            if(i < j) {
                matrix[i][j] = max;
            }
        }
    }
}

void printMatrix(int matrix[100][100], int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int matrix[100][100];
    int m;
    cin >> m ;
    int number = INT_MAX;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    transformMatrix(matrix, m);
    printMatrix(matrix, m);
    return 0;
}*/

/*#include<iostream>
using namespace std;

int numberOfDigits(int number) {
    int count = 0;
    while (number > 0) {
        count++;
        number /= 10;
    }
    return count;
}

int reverseNum (int number) {
    int rev = 0;
    while (number > 0) {
        int lastDigit = number % 10;
        rev = 10*rev + lastDigit;
        number /= 10;
    }
    return rev;
}

int main() {
    int n;
    cin>>n;
    if(n < 9) {
        cout << "The number is invalid" << endl;
    } else {
        for(int i = n - 1; i > 9; i--) {
            if(reverseNum(i) % numberOfDigits(i) == 0) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}*/


/*#include<iostream>
#include<climits>
using namespace std;

void calculate(int *a, int n, int *max, int *min, int *avg) {
    *max = INT_MIN;
    *min = INT_MAX;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] > *max) {
            *max = a[i];
        }
        if(a[i] < *min) {
            *min = a[i];
        }
        sum += a[i];
    }
    *avg = sum / n;
}

int main() {

    int array[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> *(array + i);
    }
    int max = 0, min = 0, avg = 0;
    calculate(array, n, &max, &min, &avg);
    cout << max << " " << min << " " << avg << endl;

}*/



/*#include<iostream>
#include<climits>
using namespace std;

int add (int a, int b) {
    int result = 0;
    result = a + b;
    return result;
}
int main() {

    /*char str[100] = "John";
    char *ptr = str;

    cout << *(ptr+1) << endl;
    cout << endl;
    #1#


    int a, b;
    a = 5;
    b = 7;
    cout << add(a, b) << endl;
    cout << 5 << endl;
}*/

/*#include<iostream>
#include<climits>
using namespace std;

int findMaxValue(int *a, int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if(*(a+i) > max) {
            max = *(a+i);
        }
    }
    return max;
}

int findSecondMax(int *a, int n) {
    int maxValue = findMaxValue(a, n);
    int secondMaxValue = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(a[i] > secondMaxValue && a[i] != maxValue) {
            secondMaxValue = a[i];
        }
    }
    return secondMaxValue;
}

int main() {
    int n;
    int a[100];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << findSecondMax(a, n) << endl;
    cout << sum / n << endl;
}*/


/*#include <algorithm>
#include<iostream>
#include<cstring>
#include <ranges>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

char* transform(char *str) {
    int length = strlen(str);
    char storeConsonants[100];
    int j = 0;
    for(int i = 0; i < length; i++) {
        if(!isVowel(str[i])) {
            storeConsonants[j++] = str[i];
        }
    }
    storeConsonants[j] = '\0';
    strcpy(str,storeConsonants);

    return str;
}

int main() {
    char str[100];
    cin.getline(str, 100);

    char *storeTransformedString = transform(str);
    cout << storeTransformedString << endl;
}*/

#include <algorithm>
#include<iostream>
#include<cstring>
#include <ranges>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

char* transform(char *str) {
    int length = strlen(str);
    char storeConsonants[100];
    int j = 0;
    for(int i = 0; i < length; i++) {
        if(!isVowel(str[i])) {
            storeConsonants[j++] = str[i];
        }
    }
    storeConsonants[j] = '\0';
    strcpy(str,storeConsonants);

    return str;
}

int main() {
    char str[100];
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        cin.getline(str, 100);
        char *storeTransformedString = transform(str);
        cout << storeTransformedString << endl;
    }
}