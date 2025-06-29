//
// Created by win11pro on 11/14/2024.
//

//14.11.2024
/*#include<iostream>
using namespace std;
int main() {
    for (int i = 9999; i >= 1000; i--) {
        if(i%490 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}*/


/*
#include<iostream>
using namespace std;
int main() {
    int n = 17;
    int number;
    for (int i = 1; i <= n; i++) {
        cin >> number;
        if(i % 2 == 0) {
            cout << number << " "<<endl;
        }
    }
    return 0;
}
*/

/*
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;
    int counter = 0;
    for(int i =n; i>=2; i--) {
        if(i%2 == 0) {
            //6*6 = 36
            cout << i << "*" << i << "="<<pow(i,2)<< endl;
            sum += pow(i,2);
            ++counter;
        }
    }
    cout << sum << endl;
    cout << sum/counter;
    return 0;
}

*/


/*
#include<iostream>
#include<cmath>
using namespace std;

long sumEdge(long number) {
    int ld = number % 10;
    int sld = number /10%10;
    int sumOfLastTwo = ld + sld;
    number /= 100;

    if(sumOfLastTwo >= 10) {
        number*=100;
    } else {
        number*=10;
    }
    number+= sumOfLastTwo;

    return number;
}

void reduce (long number) {
    while(number>= 10) {
        number = sumEdge(number);
        cout << number << endl;
    }
}
int main() {
    long number;
    while (cin >> number) {
        reduce(number);
    }
    return 0;
}
*/



/*
#include<iostream>
#include<cmath>
using namespace std;

int getLastDigit(int number) {
    return number % 10;
}

int getFirstDigit(int number) {
    while(number >=10) {
        number /= 10;
    }
    return number;
}

int sumOfFirstAndLastDigit(int number) {
    return getLastDigit(number) + getFirstDigit(number);
}

int reverseMiddle(int number) {
    int reverse = 0;
    number /=10;//cut the first digit
    while(number>9) {
        int ld = number%10;
        reverse = 10*reverse+ld;
        number = number/10;
    }
}

int main() {
    int a,b;
    cin>>a>>b;
    int counter = 0;

    for(int i = a; i<=b; i++) {
        int reverse = reverseMiddle(i);
        int sumOfFirstAndLast = sumOfFirstAndLastDigit(i);
        if(reverse == 0) {
            continue;
        }
        if(reverse%sumOfFirstAndLast==0) {
            cout << i << " -> ("<<reverseMiddle(i)<<") == ("<<getLastDigit << " + "<< getFirstDigit << ") * "<< reverse / sumOfFirstAndLast << endl;
            counter++;
        }
    }
    cout <<counter << endl;
    return 0;
}
*/



//cik cak
/*
#include<iostream>
#include<cmath>
using namespace std;

bool cikcak(int number) {
    int ld = number%10;
    int sld = number/10%10;

    bool larger;
    if(ld > sld) {
        larger = true;
    } else if(ld < sld) {
        larger = false;
    } else {
        return false;
    }

    number /= 10;

    while(number >= 10) {
        int ld = number%10;
        int sld = number/10%10;
        if(larger) {
                  if(ld <= sld) {
                    return false;
                }
            }
        } else {
            if(ld >= sld) {
                return false;
            }
        }
    larger = !larger;
        number/=10;
    return true

    }




int main() {
    int number;
    while(cin >> number) {
        if(number < 10) {
            continue;
        }
        if(cikcak(number)) {
            cout << number << endl;
        }
    }
    return 0;
}
*/


#include <cmath>
#include<iostream>
using namespace std;

int max3(int a, int b, int c) {
    return max(a, max(b, c));
}

int min3(int a, int b, int c) {
    return min(a, min(b, c));
}

double expression3(int a, int b, int c) {
    return 2*min3(a,b,c) - max3(a,b,c) / 2.0 + fabs(min3(a,b,c)-a);
}

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << expression3(a,b,c) << endl;
    }
    return 0;
}