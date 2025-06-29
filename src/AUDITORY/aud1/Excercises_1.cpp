
/*
https://codeforces.com/problemset/problem/486/A
https://codeforces.com/problemset/problem/1335/A
https://codeforces.com/problemset/problem/732/A
https://codeforces.com/problemset/problem/1703/A
https://codeforces.com/contest/466/problem/A#1#
*/

/*
//1 Calculating function

#include<iostream>
using namespace std;

int main() {

    long long n;
    cin >> n;

    if (n%2 == 0) {
        cout << n / 2 << endl;
    }
    else {
        cout << -(n+1)/2 << endl;
    }
    return 0;
}*/

//2 Candies and two sisters
// Alice must recieve more candies than Betty, both must recieve at least
// one candy
// a + b =n           a>b

/*
#include<iostream>
using namespace std;

int main() {


    int t;
    cin >> t;
    while(t--) {
        long long int n;  // n can be large up to 2*10^9
        cin >> n;

        cout << (n-1) / 2 << endl;
    }
    return 0;
}*/


// Buy a shovel
/*#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    // Check the number of shovels Polycarp needs to buy
    for (int i = 1; i <= 10; ++i) {
        // Total price for i shovels
        int total_price = k * i;

        // Check if the total price is divisible by 10 or leaves r burles as remainder
        if (total_price % 10 == 0 || total_price % 10 == r) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}*/

//remainder and division for finding digits
/*#include <iostream>
using namespace std;

int main() {
    cout<< 1857 % 10 << endl;
    cout<< 1857 % 100 << endl;
    cout<< 1857 % 1000 << endl;
    cout<< 1857 / 10 << endl;
    cout<< 1857 / 100 << endl;
    cout<< 1857 / 1000 << endl;
    return 0;
}*/
// YES OR YES
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        for( int i=0; i<3 ; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + ('a'-'A');
            }
        }

        if(s == "yes") {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}*/

//Cheap travel
// one way subwat ticket costs  a  rubles
// SHe found out buy special ticket for m rides - costs b rubles
/*#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, m , a, b;
    cin >> n >> m >> a >> b;
    // n - total number of subway rides Ann plans to take
    // m - number of rides covered by one multi-ride ticket
    // a - price of single ride ticket
    // b - price of multi ride ticket that covers m rides
    //option one
    int cost_single = n * a;

    int full_tickets = n / m;
    int remaining_rides = n % m;

    int cost_multi = full_tickets * b + min(remaining_rides * a, b);

    cout << min(cost_single, cost_multi) << endl;



    return 0;
}*/

