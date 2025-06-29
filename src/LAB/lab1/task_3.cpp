//
// Created by win11pro on 6/22/2025.
//
#include <iostream>
using namespace std;

int main() {
    int position, hours = 0, minutes = 0;
    cout << "Enter the position in queue: " << endl;
    cin >> position;
    int time = (5 * position) - 5;

    if (time >= 0 && time <= 360) {
        if (time >= 120) {
            time += 30;
        }
        if (time >= 210) {
            time += 30;
        }
        if (time >= 60) {
            hours = time / 60;
            minutes = time % 60;
        } else {
            minutes = time;
        }
        cout << hours << ":" << minutes << endl;
    } else {
        cout << "Student will not be served at all";
    }
    return 0;
}


/*#include <iostream>
using namespace std;

int main() {
    int position, hours=0 , minutes=0;
    cin >> position;
    int time=(5*position)-5;

    if ( time >= 0 && time <= 360) {
        if( time >= 120 ) {
            time+=30;
        }
        if (time >= 210) {
            time+=30;
        }
        if (time >= 60) {
            hours=time/60;
            minutes=time%60;
        } else {
            minutes=time;
        }
        cout <<"Hours: "<< hours << ", minutes: " << minutes << endl;
    } else {
        cout <<"Student will not be served at all";
    }
    return 0;
}*/

//
// #include <iostream>
// using namespace std;
//
// int main() {
//     int position, hours = 0, minutes = 0, time;
//     cin >> position;
//     time = (5 * position) - 5;
//
//
//     if (time >= 120) {
//         time += 30;
//     }
//     if (time >= 210) {
//         time += 30;
//     }
//
//     if (time > 360) {
//         cout << "Studentot ne e voopsto usluzen";
//     } else {
//         hours = time / 60;
//         minutes = time % 60;
//         cout << "Hours: " << hours << ", minutes: " << minutes << endl;
//     }
//
//
//     return 0;
// }
