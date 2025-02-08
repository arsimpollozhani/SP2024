//
// Created by win11pro on 11/9/2024.
//
/*
#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    int number, sum = 0;
    while(n<=5){
        cout << "Enter a number: ";
        cin >> number ;
        sum += number;
        n++;
    }
    cout << sum << endl;
    cout << "\nThe average value of the entered number is: "<<(float)sum / (n-1) <<endl;
    return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main()
{
    int number, sum = 0;
    do{
        cin >> number;
        sum = sum + number;
    } while(number != 0);
    cout << sum << endl;
    return 0;
}
*/


/*
#include <iostream>

using namespace std;

int main()
{
    int sum, x,y;
    sum = 0;
    y = 5;
    for(x = 1; x < y; x++); //x=5 after loop ends
        sum = sum + x * y; //sum = 25;
    cout << sum << endl;
    return 0;
}
*/


/*
#include <iostream>

using namespace std;

int main()
{
    char c= '.';
    cout << "Enter a symbol: ";
    for( ;c!='x'; ){
        cin >> c;
        cout << c;
    }
    cout << "End of loop\n";
 ;   return 0;
}
*/


/*
#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    for(cout << "Enter numbers\n"; number!=6; cin >> number);
    cout << "That's the number I want";
    return 0;
}
*/


/*
#include <iostream>

using namespace std;

int main()
{
    int j = 0;
    while (j++ < 3)//0 1 2 3 4
        cout << "Ha ";
    cout << "J = " <<j << endl;
    do{
        j = j - 2; //4
        cout << "Hi ";
    } while(++j);

    for(j = 1; j <= 3; j++){
        cout << "Ho ";
    }
    cout << endl;
    return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    for(;;++x){
        if(x > 20'000)
            break;
    }
    cout << x;
    return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main()
{
    char c;
    while((c=cin.get()) != EOF){
        if(c >= '0' && c <= '9')
            continue; //skip the numbers
        cout << c;
    }
    return 0;
}
*/


/*
#include <iostream>

using namespace std;

int main()
{
    char c;
    while((c=cin.get()) != EOF){
        if(isdigit(c))
            continue; //skip the numbers
        cout << c;
    }
    return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i = 0; i<10; i++)
    {
        if(i<5){
            continue;//skip first four 5 digits 0 1 2 3 4/ 5 6 7 8 9
        }
        cout << i << endl;
    }
    return 0;
}
*/

/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, j , n , x = 0;
    bool k;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Prime numbers smaller than " << n << " are\n";
    for(i = 1; i < n; i++){
            k = true;
        for(j = 2; j <= i / 2; j++){
            if (i%j == 0){
                k = false;
            }
        }
        if(k){
            cout << i << endl;
            x++;
        }
    }
    cout << "\n Total: "<< x << " prime numbers\n";
    return 0;
}
*/


/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int j = 0;
    while(j < 6){
        switch (j)
        {
            case 0: j++;
            case 1: j++; break;
            case 2:
            case 3: j+=2; break;
            default: j=j-1;
        }
        cout << "Value of j is: "<<j++<<endl;
    }
    return 0;
}
*/

/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    char op ='+';
    int number, solution = 0;
    do{
        cin >> number;
        switch(op)
        {
            case '+': solution += number; break;
            case '-': solution -= number; break;
            case '*': solution *+ number; break;
            case '/': solution /= number; break;
        }
    }while((op = cin.get())!='=');
    cout << "The solution is "<<solution;
    return 0;
}
*/

/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int i, j;
    for(i = 0, j = 8; i < 8; i++, j--){
        cout << i << " + " << j << " = " << i+j << endl;
    }
    cout << " i = "<< i << " j = "<<j<<endl;
    return 0;
}
*/



//FIBONACI

/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //1  1  2  3  5  8 13 21 34 55 89 144 233 377 610 987
//    c1 c2 c3
//       c1 c2 c3
//          c1 c2 c3
    int c1, c2, c3;
    const int n = 1000;

    c1=c2=1;
    cout << c1 << " ";
    do{
        cout << " "<<c2;
        c3 = c2 + c1;
        c1 = c2;
        c2 = c3;
    }while(c2 < n);
    cout << endl;
    return 0;
}
*/


/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int c1, c2;
    const int n = 1000;
    for(cout << (c1 = c2 = 1); c2 < n; c1 =(c2 = c2 + c1)-c1)
        cout << " "<< c2;
    cout << endl;
    return 0;
}
*/