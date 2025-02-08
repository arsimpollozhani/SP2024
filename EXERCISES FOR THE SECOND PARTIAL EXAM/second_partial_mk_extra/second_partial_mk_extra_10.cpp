//
// Created by win11pro on 1/4/2025.
//
// #include<iostream>
// #include<cmath>
// using namespace std;
//
// int main() {
//     int matrix[120][120];
//     int m, n;
//     cin >> m >> n;
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//
//     for(int j = 0; j < n; j++) {
//         int count = 0;
//         for(int i = 0; i < m; i++) {
//             int digits = 0, temp = j;
//             do {
//                 digits++;
//                 temp /= 10;
//             } while (temp > 0);
//             int index_number = i * pow(10, digits) + j;
//             if (matrix[i][j] == index_number) {
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
//
//
//     return 0;
// }


#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int m, n;
    cin>>m>>n;
    int matrix[100][100];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }

    for(int j=0;j<n;j++) {
        int count = 0;
        for(int i=0;i<m;i++) {
            int digit = 0, temp = j;
            do { //it makes sure it has at least one digit ex. 00
                digit++;
                temp = temp/10;
            } while(temp > 0);
            int index = i*pow(10,digit)+j;//not gonna work with j being 2 digit
            if(matrix[i][j] == index)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}