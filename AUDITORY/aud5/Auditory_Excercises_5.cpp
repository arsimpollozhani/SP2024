//
// Created by win11pro on 10/29/2024.
//

/*#include<iostream>
using namespace std;

int main()
{
    int number, joker = 0;
    for(int i = 0; i < 6; i++)
    {
        cin >> number;
        int leastSignificant = number % 10;
        joker = joker * 10 + leastSignificant;
    }
    cin >> number ;
    joker = joker + 1;

    cout << "Joker : "<<joker<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int zbir = 0, joker = 0;
    for (int i = 0;; i++) {
        int n;
        cin >> n;
        if (n > 90 || n < 1)
            break;
        if (i > 6)
            zbir += n;
        if (i < 7) {
            joker *= 10;
            joker += n % 10;
        }
    }
    cout << joker + zbir;
    return 0;
}
*/
/*
#include <iostream>

using namespace std;

int main() {
    int num;
    cin>> num;
    for (int i = 100; i < 999; i++) {
        if(i%num == 0) {
            cout<<i<<" ";
        }
    }
    return 0;
}
*/

#include <iostream>

using namespace std;

int main() {
    int joker=0;
    for(int i=0;i<=6;i++) {
        int num;
        cin>>num;
        int last_dig=num%10;
        joker=joker*10+last_dig;
    }
    joker=joker+1;
    cout<<joker<<endl;
    return 0;
}


/*#include <iostream>

using namespace std;

int main() {
    int number, joker  =0;
    for(int i = 0; i < 6; i++) {
        cin >> number;
        int leastSignificant = number % 10;
        joker = joker * 10 + leastSignificant;
    }
    cin >> number;
    joker = joker +1;

    cout << "Joker: " << joker << endl;
    return 0;
}*/