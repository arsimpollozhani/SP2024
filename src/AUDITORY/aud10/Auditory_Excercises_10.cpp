//
// Created by win11pro on 12/1/2024.
//
//Recursion

/* #include<iostream>
using namespace std;

int factoriel(int number)
{
    if(number == 1)
    {
        return 1;
    } else {
        return number * factoriel(number-1);
    }
}

int main()
{
    cout << factoriel(5) << endl;
    return 0;
}
 */

 /*
Task 1
To calculate the sum 1! + (1+2)! + (1+2+3)! + … + (1+2+…+n)!, follow these steps: - use a recursive function to calculate the sum
of the first k natural numbers. - use a recursive function to calculate the factorial of a natural number */


/* #include<iostream>
using namespace std;

int factoriel(int number)
{
    if(number == 1)
    {
        return 1;
    } else {
        return number * factoriel(number-1);
    }
}

int sumOfNumberUpToN(int number)
{
    if(number==1)
    {
        return 1;
    } else {
        return number + sumOfNumberUpToN(number-1);
    }
}

int formula(int number)
{
    if(number == 1)
    {
        return 1;
    } else
    {
        return factoriel(sumOfNumberUpToN(number)) + formula(number-1);
    }
}
int main()
{

    cout << formula(3) << endl;
    int result = 0;
    //solution with for loop
    // for(int i = 1; i <= 3; i++)
    // {
    //     result += factoriel(sumOfNumberUpToN(i));
    // }
    // cout << result << endl;
    return 0;
} */



/*
1.2. Task 2
Write a recursive function count_down(int n) that for a given integer n prints the numbers from n to 0.*/
/* #include<iostream>
using namespace std;

void countDown(int n)
{
    if(n==0)
    {
        cout << 0 << " ";
        return;
    } else {
        countDown(n-1);
        cout << n << " "; // fucked up situation
    }
}
int main()
{

    countDown(16);
    return 0;
} */

/*
1.3. Task 3
Write a program that for a given natural number, calculates the difference between the nearest larger prime number and the number itself.

The program should use a recursive function to find the appropriate prime number, which in turn should use a recursive function to check
if a given number is a prime number.

Example:

If 573 is entered, the program should print 577 - 573 = 4 */

/* #include<iostream>
using namespace std;

int isPrime(int number, int divisor)
{
    if(divisor == number)
    {
        return 1;
    } else {
        if(number%divisor == 0)
        {
            return 0;
        } else {
            return isPrime(number, divisor + 1);
        }
    }
}

int findNextPrime(int number)
{
    if(isPrime(number,2))
    {
        return number;
    } else {
        return findNextPrime(number + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int nextPrime = findNextPrime(n+1);
    cout << nextPrime << " - " << n << " = "<< nextPrime-n << endl;
    return 0;
} */


/* 1.5. Task 5
Write a recursive function that will calculate the sum of the digits of a number.

sumDigits(126) -> 9
sumDigits(49) -> 13
sumDigits(12) -> 3 */

/* #include<iostream>

using namespace std;

int sumDigits(int n)
{
    if(n==0)
    {
        return 0;
    } else {
        return n%10 + sumDigits(n/10);
    }
}

int main()
{
    int n;

    cout << "Enter a number: " << endl;
    cin >> n;
    cout << sumDigits(n) << endl;
    return 0;
} */



/*
1.6. Task 6
For a given number n, write a recursive function that will count the
occurrences of the digit 8. Additionally, if there is another digit
 8 immediately to the left of any 8, its occurrence should be counted
  twice.

count8(8) -> 1
count8(818) -> 2
count8(8818) -> 4*/


//WITHOUT RECURSIVE
/* #include<iostream>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int count = 0;

    int temp = n;
    while(temp > 10)
    {
        int lastDigit = temp % 10;
        int secondLastDigit = temp/10%10;
        if(lastDigit == 8)
        {
            count++;
            if(secondLastDigit == 8)
            {
                count++;
            }

        }
        temp/=10;

    }
    cout << count << endl;
    return 0;
} */

//Recursive  approach
/* #include<iostream>
using namespace std;

int countEights(int number)
{
    if(number==0)
    {
        return 0;
    } else
    {
        int lastDigit = number % 10;
        int seconLastDigit = number /10%10;
        if(lastDigit ==8)
        {
            if(seconLastDigit == 8)
            {
                return 2+countEights(number/10);
            } else {
                return 1+countEights(number/10);
            }
        } else
        {
            return countEights(number/10);
        }
    }
}
int main()
{
    int number;
    cin >> number;
    cout << countEights(number);
    return 0;
} */


//Eucilidian Algorithm for GCD 2 numbers
/* #include<iostream>
using namespace std;

int gcd(int first, int second)
{
    if(second == 0)
    {
        return 0;
    } else
    {
        return gcd(second, first%second);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << gcd(48,36);
    return 0;
}
 */

//more than two numbers
/* #include<iostream>
using namespace std;

int gcd(int first, int second)
{
    if(second == 0)
    {
        return first;
    } else
    {
        return gcd(second, first%second);
    }
}

int main()
{
    int n;
    cin >> n;
    int array[100];
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];

    }
    int gcdResult = gcd(array[0], array[1]);

    for(int i = 2; i < n; i++)
    {
        gcdResult = gcd(gcdResult,array[i]);
    }

    cout << gcdResult << endl;
    return 0;
}
 */


//LCM
/* #include<iostream>
using namespace std;

int lcm(int m, int n, int divisor)
{
    if(m==1 && n==1)
    {
        return 1;
    } else {
        if(m%divisor == 0 || n%divisor == 0)
        {
            if(m%divisor==0)
            {
                m/=divisor;
            }
            if(n%divisor==0)
            {
                n/=divisor;
            }
            return divisor * lcm(m,n,divisor);
        } else {
            return lcm(m,n,divisor+1);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int array[100];
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];

    }
    int lcmResult = lcm(array[0], array[1],2);

    for(int i = 2; i < n; i++)
    {
        lcmResult = lcm(lcmResult,array[i],2);
    }

    cout << lcmResult << endl;
    return 0;
} */



/*
1.9. Task 9
Write a program that for a given array of integers (input from the
keyboard) will print the sum of elements from the array. The program
should include a recursive function for finding the sum of elements in
 a given array.*/
/* #include<iostream>
using namespace std;

int sum(int array[100], int n)
{
    if(n==1)
    {
        return array[0];
    } else {
        return array[n-1] + sum(array, n-1);
    }
}

int main()
{
    int n;
    int array[100];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Sum of array : "<< sum(array, n);
    return 0;
} */

/* 1.10. Task 10 (Homework)
Write a program that for a given array of integers
(input from the keyboard), will print the largest element.
The program should include a recursive function for finding the
largest element in a given array.

Example: For the array

5 8 3 12 9 6
The output should be:

The largest element in the array should be 12 */


#include<iostream>
#include<climits>
using namespace std;

int findLargest(int array[100], int n, int index = 0, int largest = INT_MIN)
{
    if(index == n)
    {
        return largest;
    }
    if(array[index] > largest)
    {
        largest = array[index];
    }
    return findLargest(array,n, index+1,largest);

}

int main()
{
    int n;
    int array[100];
    cin >> n;
    for(int i = 0; i<n ; i++)
    {
        cin >> array[i];
    }

    cout << findLargest(array, n) << endl;;
    return 0;
}




