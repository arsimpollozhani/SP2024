//
// Created by win11pro on 12/5/2024.
//

//
//1. i==j main diagonal
//2. i+j == m-1 antiDiagonal
//3. j>i above mainDiagonal
//4. i<j below mainDiagonal
//4. j>i && (j+i)< (m-1) first region
//5. j>i && (j+i)>=m second region
//6 i>j && (i+j)>=m
//8 i+j>m below antidiagonal
//9 (i+j)<m-1 above antidiagonal

//1
/*
#include<iostream>
using namespace std;
int main() {
    int matrix[100][100];
    int m, n;

    /*cin >> m >> n;

    for(int i =0 ; i<m;i++) { //rows
        for(int j =0; j<n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i =0 ; i<m;i++) { //rows
        for(int j =0; j<n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }#1#

    /*
    cin >> m;
    for(int i =0 ; i<m;i++) { //rows
        for(int j =0; j<m; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i =0 ; i<m;i++) { //rows
        for(int j =0; j<m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }#1#


    // first task


    return 0;

}
*/

/*#include<iostream>
using namespace std;
int main() {
    int matrix[100][100];
    int m, n;
    cin >> m >> n;
    int sumEvenRows =0, sumOddColumns = 0;
    for(int i =0 ; i<m;i++) { //rows
        for(int j =0; j<n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i =0 ; i<m;i++) { //rows
        for(int j =0; j<n; j++) {
            if(i%2==0) {
                //in an even row
                sumEvenRows += matrix[i][j];
            }
            // not else if because elemetns are intersected (row,col) both if conditions can be true
            if(j%2==1) {
                sumOddColumns+=matrix[i][j];
            }
        }
    }
    cout << abs(sumEvenRows - sumOddColumns) << endl;
    return 0;
}*/

//2
/*#include<iostream>
using namespace std;
int main() {
    int matrix[100][100];
    int m;
    cin >> m ;
    int min, max;
    for(int i =0 ; i<m;i++) { //rows
        for(int j =0; j<m; j++) {
            cin >> matrix[i][j];

            if(i==0 && j==0) {
                max = min = matrix[0][0];
            } else {
                if(matrix[i][j] > max) {
                    max = matrix[i][j];
                }
                if(matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
        }
    }

    for(int i = 0;i<m;i++) {
        for(int j =0;j<m;j++) {
            if(i == j) {
                matrix[i][j] = (max-min);
            }
        }
    }

    for(int i =0 ; i<m;i++) {
        //rows
        for(int j =0; j<m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}*/


//3
/*#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int matrix[100][100];
    int m;
    cin >> m ;

    int min, max;
    for(int i =0 ; i<m;i++) { //rows
        for(int j =0; j<m; j++) {
            cin >> matrix[i][j];

            if(i==0 && j==1) {
                max = min = matrix[0][1];
            } else if(i!=j){
                if(matrix[i][j] > max) {
                    max = matrix[i][j];
                }
                if(matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
        }
    }

    for(int i = 0;i<m;i++) {
        for(int j =0;j<m;j++) {
            if(i + j == (m-1)) {
                matrix[i][j] = (max-min);
            }
            if(i+j < (m-1) && j>i) {
                matrix[i][j] = 52;
            }
        }
    }
//faster
    /*for(int i = 0; i<m; i++) {
        matrix[i][i] = (max-min);
    }#1#

    for(int i =0 ; i<m;i++) {
        //rows
        for(int j =0; j<m; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}*/


/*//Task 3  -- Symmetrical matrix
#include<iostream>
using namespace std;
int main() {
    //i,j == j,i
    int matrix[100][100];
    int m;
    cin >> m ;
    for(int i =0 ; i<m;i++) {
        for(int j =0; j<m; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i =0; i<m;i++) {
        for(int j =0; j<m; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                cout << "Asymetrical";
                return 0;
            }
        }
    }
    cout << "Symmetrical";
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main() {
    //i,j == j,i
    int matrix[100][100];
    int m;
    cin >> m ;
    for(int i =0 ; i<m;i++) {
        for(int j =0; j<m; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i =0; i<m;i++) {
        for(int j = i + 1; j<m; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                cout << "Asymetrical";
                return 0;
            }
        }
    }
    cout << "Symmetrical";
    return 0;
}*/


//Task 4

/*#include<iostream>
using namespace std;
int main() {
    int matrix[100][100];
    int m, n;
    cin >> m >> n;
    for(int i = 1; i<m; i++) {
        for(int j = 1; j<n; j++) {
            cin>>matrix[i][j];
        }
    }
    int counter = 0;
    int bomb[100][100] ={0};

    for(int i = 1; i<m-1; i++) { // 0 and last col cant form a cross
        for(int j = 1; j<n-1; j++) {// 0 and last row cant form a cross
            if(matrix[i][j] == 1 && matrix[i-1][j]==1 && matrix[i+1][j]==1 && matrix[i][j-1]==1 && matrix[i][j+1]==1) {
                //possible cross
                if(bomb[i][j] == 0 && bomb[i-1][j]==0 && bomb[i+1][j]==0 && bomb[i][j-1]==0 && bomb[i][j+1]==0) {
                    counter++;
                    bomb[i][j] = bomb[i-1][j] = bomb[i+1][j] =  bomb[i][j-1] =  bomb[i][j+1]= 1;
                }
            }
        }
    }
    return 0;
}*/
//Second version
/*#include<iostream>
using namespace std;
int main() {
    int matrix[100][100];
    int m, n;
    cin >> m >> n;
    for(int i = 1; i<m; i++) {
        for(int j = 1; j<n; j++) {
            cin>>matrix[i][j];
        }
    }
    int counter = 0;
    int bomb[100][100] ={0};

    for(int i = 1; i<m-1; i++) { // 0 and last col cant form a cross
        for(int j = 1; j<n-1; j++) {// 0 and last row cant form a cross
            if(matrix[i][j] == 1 && matrix[i-1][j]==1 && matrix[i+1][j]==1 && matrix[i][j-1]==1 && matrix[i][j+1]==1) {
                //possible cross
                if(bomb[i][j] == 0 && bomb[i-1][j]==0 && bomb[i+1][j]==0 && bomb[i][j-1]==0 && bomb[i][j+1]==0) {
                    counter++;
                    bomb[i][j] = bomb[i-1][j] = bomb[i+1][j] =  bomb[i][j-1] =  bomb[i][j+1]= 1;
                }
            }
        }
    }
    return 0;
}*/

//7 midterm exercise
#include<iostream>
using namespace std;
int main() {
    int m,n;
    int matrix[100][100];
    cin>>m>>n;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }

    for(int j=0 ; j<n; j++) {
        int topSum = 0, bottomSum = 0;
        if(m%2==0) {// even number of elements in j-th column
            for(int i = 0; i<m/2; i++) {
                topSum += matrix[i][j];
            }
            for(int i = m/2; i< m; i++) {
                bottomSum += matrix[i][j];
            }
            int diff = abs(topSum - bottomSum);
            matrix[m/2][j] == diff;
            matrix[m/2 -1][j] == diff;
        } else { // odd number of elements in j-th column
            for(int i = 0; i<=m/2; i++) {
                topSum += matrix[i][j];
            }
            for(int i = m/2; i< m; i++) {
                bottomSum += matrix[i][j];
            }
        }
    }

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}