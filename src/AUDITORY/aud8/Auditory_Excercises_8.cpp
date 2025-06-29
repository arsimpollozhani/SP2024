//
// Created by win11pro on 11/25/2024.
//
//MATRICES

/*1.1. Task 1
Write a program that, for a matrix entered from the keyboard, calculates
the difference between the sum of elements in odd columns and the sum of
elements in even rows. The matrix does not have to be square.*/

/*#include<iostream>
using namespace std;
int main() {
    int a[100][100], n, m , sumCols = 0, sumRows = 0;

    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if((j+1) % 2) {
                sumCols += a[i][j];
            }
            if(!((i+1) % 2)) {
                sumRows += a[i][j];
            }
        }
    }
    cout << "Sum of Rows: " << sumRows << endl;
    cout << "Sum of Cols: " << sumCols << endl;
    cout << "Difference sumCols - sumRows = "<< sumCols - sumRows << endl;
    return 0;
}*/


/*1.2. Task 2
Write a program that, for a matrix entered from the keyboard,
replaces the elements of the main diagonal with the difference between
the maximum and minimum element in the matrix. Print the resulting matrix
to the screen.*/

/*#include<iostream>
using namespace std;
int main() {
    int a[100][100], n, max, min;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            if(i==0 && j==0) {
                min = max = a[i][j];
            } else if(a[i][j] > max) {
                max = a[i][j];
            } else if(a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++) {
        a[i][i] = max - min;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}*/

/*1.2. Task 2
Write a program that, for a matrix entered from the keyboard,
replaces the elements of the main diagonal with the difference between
the maximum and minimum element in the matrix. Print the resulting matrix
to the screen.*/

/*#include<iostream>
using namespace std;

int main() {
    int a[100][100], n, max, min;
    cin >> n;
    //square matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (i == 0 && j == 0) {
                min = max = a[i][j];
            } else if (a[i][j] > max) {
                max = a[i][j];
            } else if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        a[i][i] = max - min;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}*/

/*1.3. Task 3
Write a program that, for a square matrix entered from the keyboard,
prints to the screen whether it is symmetric with respect to the main
diagonal.*/

/*#include<iostream>
using namespace std;

int main() {
    int a[100][100],n, symmetric = 1;
    cout << "Enter the dimension of the square matrix: "<<endl;
    cin >> n;
    cout << "Enter the elements of the matrix: "<<endl;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) { //**
                symmetric = 0;
                break;      //for the j
            }
        }
        if(!symmetric) { // for the i
            break;
        }
    }
    if(symmetric) {
        cout << "Symmetric about main diagonal";
    } else {
        cout << "No symmetry about main diagonal";
    }

    return 0;
}*/


/*#include<iostream>
using namespace std;

int main() {
    int a[100][100], m;
    cin>>m;
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }

    for(int i = 0; i< m; i++) {
            swap(a[i][i],a[i][m-i-1]);
    }

    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            cout<<a[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}*/

//stock growth calculation
/*#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n, temp;
    int a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    temp = a[n-1];
    for (int i = n-1; i >= 0; i--) {
        a[i] = a[i-1];
    }
    a[0] = temp;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
*/


/*#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n, m, temp;
    int a[100];
    cout << "Enter Array size: ";
    cin >> n;
    cout << "Number of rotations: ";
    cin >> m;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int j = 0; j < m; j++) {
        temp = a[n-1];
        for (int i = n-1; i >= 0; i--) {
            a[i] = a[i-1];
        }
        a[0] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;


double square(double x) {
    return x*x;
}

void printSquare(double x) {
    cout << "The square of " << x << " is " << square(x) << endl;
}

bool accept() {
    cout << "Do you want to proceed (y or n)?\n";

    char answer = 0;
    cin >> answer;

    if(answer == 'y') return true;

    return false;
}

bool accept2() {
    cout << "Do you want to proceed (y or n)?\n";
    char answer = 0;
    cin >> answer;

    switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that as a no.\n";
            return false;
    }
}

bool accept3() {

    int tries = 1;
    while(tries < 4) {
        cout << "Do you want to proceed (y or n)?\n";
        char answer = 0;
        cin >> answer;
        switch (answer) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                cout << "I'll take that as a no.\n";
                ++tries;
        }

    }
}
int main() {
    /*printSquare(8);#1#
    //cout << accept() << endl;
    // cout << accept2() << endl;
    cout << accept3() << endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;
//recursive function
int recursiveSum(int m, int n) {
    //base case (that we don't end it with infinite recr)
    if(m==n)
        return m;
    return m + recursiveSum(m+1,n);
}

void walk(int steps) {
    for(int i = 0; i < steps; i++) {
        cout << "You take a step\n";
    }
}

void recursiveWalk(int steps) {
    if(steps > 0) { //Base Case
        cout << "R: You take a step\n";
        recursiveWalk(steps - 1);
    }
}
//Sum numebrs between m and n
int main() {
    //with loops
    // int m = 2 , n = 4;
    // cout << "Sum = " << recursiveSum(m,n) << endl;
    // int sum = 0;
    // for(int i = m; i <= n; i++) {
    //     sum += i;
    // }
    // cout << sum << endl;

    walk(20);
    recursiveWalk(20);

    return 0;
}*/


#include <iostream>
using namespace std;

//factorial 6*5*4*3*2*1 =
//iterative approach
int factorial(int num) {
    int result = 1;
    for(int i = 1; i<= num; i++) {
        result = result * i;
    }
    return result;
}

//recursive approach
int recFactorial(int num) {
    if(num > 1) { // base case
        return num * recFactorial(num - 1);
    }
    else {
        return 1;
    }
}
int main() {
    //iterative function
    cout << factorial(10)<< endl;
    //recursive function
    cout << recFactorial(10) << endl;
    return 0;
}