//
// Created by win11pro on 11/25/2024.
//
/*#include<iostream>
using namespace std;
int main() {
    int array[] = {1,2,3,4,5};
    cout << array << endl; //address of the array
    cout << array[0] << endl; // first element
    array[0] = 7; // modify first element
    cout << array[0] << endl; // after modifying
    array[2] = array[3] + array[4]; // operations within array
    cout << array[2] << endl;// result = 4th element[3] + 5th element[4]
    return 0;
}*/

/*2.1. Task 1
Write a program that will check whether two arrays are equal or not.
Display the result of the comparison on the screen.
The maximum size of the arrays is 100.*/

/*#include<iostream>
using namespace std;
int main() {
    int n1, n2 , i;
    int a[100], b[100];//max size is 100
    cout << "Size of the first array: "<<endl;
    cin >> n1; //enter the size of the array if n1 = 5 -> enter 5 numbers
    cout << "Size of the second array: "<<endl;
    cin >> n2;//enter the size of the array if n2 = 5 -> enter 5 numbers

    if(n1 != n2) { // if n1 and n2 the sizes are different arrays are not equal
        cout << "Arrays are not equal!"<<endl;
    } else {
        cout << "Elements of the first array"<<endl;
        for( i = 0; i < n1; i++) {
            cout << "a["<<i<<"] = ";
            cin >> a[i];
        }
        cout << "Elements of the second array"<<endl;
        for( i = 0; i < n2; i++) {
            cout << "b["<<i<<"] = ";
            cin >> b[i];
        }

        for( i = 0; i < n1; i++) {
            if(a[i] != b[i]) { // check elements of a and b if equal
                break;
            }
        }
        if(i == n1) {
            cout << "Arrays are equal!"<<endl;
        } else {
            cout << "Arrays are not equal!"<<endl;
        }
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main() {
    int n1, n2 , i;
    int a[100], b[100];//max size is 100
    bool areEqual = true;
    //int flag = 1;
    cout << "Size of the first array: "<<endl;
    cin >> n1; //enter the size of the array if n1 = 5 -> enter 5 numbers
    cout << "Size of the second array: "<<endl;
    cin >> n2;//enter the size of the array if n2 = 5 -> enter 5 numbers

    if(n1 != n2) { // if n1 and n2 the sizes are different arrays are not equal
        cout << "Arrays are not equal!"<<endl;
    } else {
        cout << "Elements of the first array"<<endl;
        for( i = 0; i < n1; i++) {
            cout << "a["<<i<<"] = ";
            cin >> a[i];
        }
        cout << "Elements of the second array"<<endl;
        for( i = 0; i < n2; i++) {
            cout << "b["<<i<<"] = ";
            cin >> b[i];
        }

        for( i = 0; i < n1; i++) {
            if(a[i] != b[i]) { // check elements of a and b if equal
                areEqual = false;
                //flag = 0;
                break;
            }
        }
        if(areEqual) { // if(flag)
            cout << "Arrays are equal!"<<endl;
        } else {
            cout << "Arrays are not equal!"<<endl;
        }
    }
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main() {
    int n1, n2 , i;
    int a[100], b[100];//max size is 100
    bool areEqual = true;
    int misMatchIndex = -1;
    //int flag = 1;
    cout << "Size of the first array: "<<endl;
    cin >> n1; //enter the size of the array if n1 = 5 -> enter 5 numbers
    cout << "Size of the second array: "<<endl;
    cin >> n2;//enter the size of the array if n2 = 5 -> enter 5 numbers

    if(n1 != n2) { // if n1 and n2 the sizes are different arrays are not equal
        cout << "Arrays are not equal!"<<endl;
    } else {
        cout << "Elements of the first array"<<endl;
        for( i = 0; i < n1; i++) {
            cout << "a["<<i<<"] = ";
            cin >> a[i];
        }
        cout << "Elements of the second array"<<endl;
        for( i = 0; i < n2; i++) {
            cout << "b["<<i<<"] = ";
            cin >> b[i];
        }

        for( i = 0; i < n1; i++) {
            if(a[i] != b[i]) { // check elements of a and b if equal
                areEqual = false;
                misMatchIndex = i;
                //flag = 0;
                break;
            }
        }
        if(areEqual) { // if(flag)
            cout << "Arrays are equal!"<<endl;
        } else {
            cout <<"Arrays are not equal!"<<endl;
            cout << "Mismatch at index "<<misMatchIndex<<", position "<<misMatchIndex+1<<endl;
            cout << "a["<<misMatchIndex<<"] = "<<a[misMatchIndex]<<endl;
            cout << "b["<<misMatchIndex<<"] = "<<b[misMatchIndex]<<endl;
        }
    }
    return 0;
}*/

/*2.2. Task 2
Write a program that, for an array whose elements are entered from the
keyboard, calculates the sum of even elements, the sum of odd elements,
and the ratio between the number of even and odd elements.
Print the results to the screen.

Example:

For the array: 3 2 7 6 2 5 1, the output should be:
    Sum even: 8
    Sum odd: 16
    Rel: 0.75
*/

/*#include<iostream>
using namespace std;
int main() {
    int even_num = 0, odd_num = 0;
    int sumEven = 0, sumOdd = 0;
    int a[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(a[i] % 2) {
            odd_num++;
            sumOdd = sumOdd + a[i];
        } else {
            even_num++;
            sumEven = sumEven + a[i];
        }
    }

    cout << "Sum even: "<< sumEven << endl;
    cout << "Sum odd: "<< sumOdd << endl;
    cout << "Ratio: "<<(float)even_num/(float)odd_num;
    return 0;
}*/

/*2.3. Task 3
Write a program that calculates the scalar product of two vectors with
n coordinates. The number of coordinates n, as well as the coordinates
of the vectors, are entered from the standard input. Print the result
to the screen.*/

/*
#include<iostream>
using namespace std;
int main() {
    int a[100], b[100], n, scalar = 0;
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++) {
        cin>>b[i];
    }
    for(int i = 0; i < n; i++) {
        scalar = scalar + a[i] * b[i];//*
    }
    cout << "The scalar product is: " << scalar << endl;
    return 0;
}
*/

/*2.4. Task 4
Write a program that checks if a given array of n elements,
read from the standard input, is strictly increasing, strictly decreasing,
or neither strictly increasing nor strictly decreasing.
Print the result to the screen.*/

/*#include<iostream>
using namespace std;
int main() {
    int n, a[100];
    short increasing = 1, decreasing = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if(a[i] >= a[i + 1]) {
            increasing = 0;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if(a[i] <= a[i + 1]) {
            decreasing = 0;
            break;
        }
    }
//123
    if(!decreasing && !increasing) {
        cout << "The array is neither strictrly increacing nor strictrly decreasing"<<endl;
    } else if (decreasing) {
        cout << "The array is strictly decreasing"<<endl;
    } else if (increasing) {
        cout << "The array is strictly increasing"<<endl;
    }
    return 0;
}*/




/*2.5. Task 5
Write a program to rotate the elements of an array one place to the right.
Finally, print the rotated array to the screen.
Read the elements of the array from the standard input.*/
/*
#include<iostream>
using namespace std;
int main() {
    int n, temp;
    int a[100];
    cout << "Size of the array: ";
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    temp = a[n-1]; // last element

    for(int i = n-1; i > 0; i--) { // starting from the end
        a[i] = a[i-1]; // assign a[i] to the left element
    }

    a[0] = temp; // first element becomes the last element

    for(int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
*/

/*2.6. Task 6
Write a program to rotate the elements of an array m places to the right.
Finally, print the rotated array

to the screen. Read the elements of the array and the number of rotations
from the standard input.*/
/*
#include<iostream>
using namespace std;
int main() {
    int m, n, temp;
    int a[100];
    cout << "Size of the array: ";
    cin>>n;
    cout << "Number of rotations: ";
    cin>>m;
    for(int i = 0; i < n; i++) {
        cin>>a[i]; // entering elements
    }
    for(int i = 0; i < n; i++) {
        cout<<a[i]<<" "; // displaying original elements
    }
    cout << endl;
    for(int j = 0; j < m; j++) {
        temp = a[n-1];// temp = last number
        for(int i = n-1; i >= 0; i--) {
            a[i] = a[i-1]; // last is assigned to second last
        }                  //1 2 3 4 5 ->
        a[0] = temp;
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
*/


/*2.7. Task 7
Write a program that removes duplicates from an array.
Finally, print the obtained array to the screen.
Read the elements of the array from the standard input.*/

/*#include<iostream>
using namespace std;

int main() {
    int a[100],size , deleted = 0;
    cin >> size;

    for(int i = 0; i < size; i++) {
        cin >> a[i];
    }
    for(int i = 0 ;i < size- deleted; i++) {
        for(int j = i + 1; j < size - deleted; j++) {
            if(a[i] == a[j]) {
                for(int k = j; k < size - deleted; k++) {
                    a[k] = a[k + 1];

                }
                deleted++;
                --j;
            }

        }
    }
    size = size - deleted;

    for(int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    return 0;
}*/

#include<iostream>
using namespace std;
const int MAX =100;
/* int symmetryTest(int matrix[MAX][MAX], int n)
{
    for(int i = 0; i < n ; i++)
    {
        for(int j = 1 ; j > i; j++)
        {
            if(matrix[i][j] == matrix[j][i])
            {
                return true;
            }
        }
    }
    return false;
} */
int main()
{
    int matrix[MAX][MAX];
    int n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}