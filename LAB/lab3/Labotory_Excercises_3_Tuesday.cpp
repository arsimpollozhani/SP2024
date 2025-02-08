//
// Created by win11pro on 11/5/2024.
//
/*#include<iostream>
using namespace std;
int main() {
    int x , k;
    cin>>x>>k;
    float total = 0;
    float less= 0;
    int temp = x; // store x to temporary for manipulation
    while (temp>0) { // loop through x (temp)
        int digit = temp%10; // take the last digit
        if(digit < k) { // check if digit is less than k
            less++; // if condition TRUE increment less
        }
        total++; // counts the total digits
        temp = temp/10; // remove last digit, in order to check the next digit before the last
    }

    //float percentage = (less *100)/total;
    float percentage = (less/total)*100;
    cout << percentage << "%" <<endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int count = 0;
    int num = x - 1;
    while(count < 10 && num > 0) {
        int temp = num;
        int reversed = 0;

        while(temp > 0) {
            reversed = reversed * 10 + temp % 10;
            temp = temp / 10;
        }

        if (num == reversed) {
            temp = num;
            int sum = 0;

            while(temp > 0) {
                sum = sum + temp % 10;
                temp = temp / 10;
            }
            if(sum!=0 && num % sum == 0) {
                cout << num << " ";
                count++;
            }
        }
        num--;
    }
    return 0;
}*/



//3

//3. From SI are entered positive whole numbers, until there are entered
//different than positive whole numbers. For each input display the
//greatest digit of the number, at the end find the average of all the
//greatest digits of the entered numbers.
//INPUT 123 OUTPUT 3 INPUT 789 OUTPUT 9 INPUT . OUTPUT 6

//WITHOUT HELP
/*#include<iostream>
using namespace std;
int main() {
    int whole, maxDigit = 0;
    int sum = 0, count = 0;
    float average = 0;
    while(1){
        if ((cin>>whole) && (whole>0)) {
            int temp = whole;
            while (temp>0) {

                int digit = temp%10;
                if (digit > maxDigit) {
                    maxDigit = digit;
                    sum = sum + maxDigit;
                    count++;
                }
                temp=temp/10;

            }
            cout << maxDigit << endl;
            average = float(sum)/count;

        } else {
            break;
        }

    }
    cout << average << endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main()
{
    int x;

    cin >> x;
    int count = 0;
    int num = x - 1;

    while( count < 10 )
    {

        int temp = num;
        int reverse = 0;
        while (temp > 0)
            {
                int digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp /=10;
            }

        if (num == reverse)
            {
                temp = num;
                int sum = 0;

                    while (temp > 0){
                        sum = sum + (temp%10);
                        temp /= 10;
                    }

                    if(sum!=0 && num%sum == 0)
                    {
                        cout << num << " ";
                        count++;
                    }

            }
        num--;

    }
    return 0;
}*/


/*
#include<iostream>

using namespace std;

int main() {
    int whole, sum = 0, count = 0;
    float average = 0;
    while(1) {

        if(cin>>whole && (whole>0)) {
            int maxDigit = 0;
            int temp = whole;
            while(temp>0) {
                int digit = temp%10;
                if(digit>maxDigit) {
                    maxDigit = digit;
                }
                temp /= 10;
            }
            cout << maxDigit << endl;
            sum = sum + maxDigit;
            count++;
            average = (float)sum/count;

        } else {
            break;
        }
    }
    cout << average <<endl;
    return 0;
}*/


/*
1. From SI enter number X and digit K. Print in percentages how much of the digits of X are lesser than K

INPUT:		OUTPUT:
12345 5		80%
*/









//1
/*#include<iostream>

using namespace std;

int main() {
    int x, k;
    float less = 0 , count = 0;
    cin >> x >> k;
    int temp = x;

    while (temp > 0) {
        int digit = temp % 10;
        if(digit < k) {
            less++;
        }
        count++;
        temp = temp / 10;
    }
    float percent = (less/count)*100;
    cout << percent << "%" << endl;
    return 0;
}*/


//2

/*#include<iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    int num = x -1 ;
    int counter = 0;
    while(counter < 10) {
        int temp = num;
        int palindrome = 0;
        while(temp > 0) {
            int digit = temp % 10;
            palindrome = palindrome * 10 + digit;
            temp /= 10;
        }

        if(num == palindrome) {
            temp = num;
            int sum = 0;
            while(temp > 0) {
                sum = sum + (temp%10);
                temp = temp/10;
            }
            if (sum!=0 && num%sum == 0) {
                cout << num << " ";
                counter++;
            }
        }
        num--;
    }
    return 0;
}*/


#include<iostream>

using namespace std;

int main() {
    int whole,sum = 0, maxDigit, count = 0;
    float avg;
    while(1) {
        if(cin>>whole && (whole>0)) {
            maxDigit = 0;
            int temp = whole;
            while(temp>0) {
                int digit = temp%10;
                if(digit > maxDigit) {
                    maxDigit = digit;
                }
                temp = temp/10;
            }
            cout << maxDigit << endl;
            sum = sum + maxDigit;
            count++;
            avg = float(sum)/count;
        } else {
            break;
        }
    }
    cout << avg << endl;
    return 0;
}