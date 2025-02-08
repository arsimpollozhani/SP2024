//
// Created by win11pro on 10/21/2024.
//
/*Write a program where a number is entered, which indicates the place
in the queue at the counter and to calculate how much time it would take
to get to the queue if those at the counter work for 5 hours and rest
for 1 hour and it takes 5 minutes for one student.*/
/*#include<iostream>
using namespace std;

int main() {
    int position_queue;
    int students_per_cycle = (5*60) / 5;

    cout << "Enter your position in the queue: ";
    cin >> position_queue;

    int complete_cycles = position_queue / students_per_cycle;
    int remaining_students = position_queue % students_per_cycle;

    int total_time = complete_cycles * (5*60+1*60);
    total_time = total_time + remaining_students * 5;

    int hours = total_time / 60;
    int minutes = total_time % 60;

    cout << "Time to reach the counter: "<< hours << " hours and "<< minutes << " minutes"<<endl;
    return 0;
}*/


//TASK 1
//Enter five digit number, print the middle digits, calculate
//the difference of the first and last digit of that number
/*#include<iostream>
using namespace std;


int main() {
    int number;
    cout << "Enter 5-digit number: ";
    cin >> number;
    int first_digit = number / 10000;
    int last_digit = number % 10;
    int middle_digits = (number / 10) % 1000;
    cout << "First digit: " << first_digit << endl;
    cout << "Last digit: " << last_digit << endl;
    cout <<"Middle digits: " << middle_digits << endl;
    cout <<" The difference of first and last digit is : "<< first_digit - last_digit << endl;
}*/


//TASK 2
/*
 //Enter two different phone numbers; enter the minutes of the call between the two numbers
 //for the first 30 minutes the minute costs 3 denars, after 30 min , minute costs 2 denars
 //calculate the total cost. If the prefix of the first and second number is 071 AND 073 OR 074 AND 076
 // make a discount of 30%
 // show total cost, if some condition is met/ or not...
#include<iostream>
using namespace std;


int main() {
    int num1 , num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int minutes;
    float cost = 0;
    cout << "Enter minutes: ";
    cin >> minutes;
    if (minutes <= 30) {
        cost = minutes * 3;
    } else if (minutes > 30) {
        cost = minutes * 3 + (minutes - 30) * 2;
    }

    int digit1 = num1 % 10;
    int digit2 = num2 % 10;
    if (digit1 == 1 && digit2 == 3 || digit1 == 4 && digit2 == 6 ) {
        cost = cost * 0.70;
    }
    cout << "total cost = " << cost;
    return 0;
}
*/


/*#include<iostream>
using namespace std;


int main() {
    int num1 , num2;
    cout << "Enter two numbers (07*******): ";
    cin >> num1 >> num2;
    int minutes;
    float cost = 0;
    cout << "Enter minutes: ";
    cin >> minutes;
    if (minutes <= 30) {
        cost = minutes * 3;
    } else {
        cost = minutes * 3 + (minutes - 30) * 2;
    }

    int digit1 = (num1 / 1000000);
    int digit2 = (num2 / 1000000);
    if ((digit1 == 71 && digit2 == 73) || (digit1 == 74 && digit2 == 76) ) {
        cost = cost * 0.70;
    }
    cout << "total cost = " << cost;
    return 0;
}*/

//Time calculation for a student to be served.
/*#include <iostream>
using namespace std;

int main() {
    int mesto,vkupnoVreme,saati = 0,minuti = 0;
    cin >> mesto;
    vkupnoVreme = mesto*5 - 5;
    if (vkupnoVreme > 120)
        vkupnoVreme += 30;
    if (vkupnoVreme > 210)
        vkupnoVreme += 30;
    if (vkupnoVreme >= 360)
        cout << "Studentot ne bil usluzhen";
    if (vkupnoVreme > 60) {
        saati = vkupnoVreme/60;
        minuti = vkupnoVreme%60;
    }
    else if (vkupnoVreme < 60) minuti = vkupnoVreme;
    if (vkupnoVreme < 360)
        cout << "Saati:" << saati << ",minuti: " << minuti << endl;
}*/


/*studenti idat da se zapisat na finki. finki pocinja so upis u 9 saat , raboti dva saati ,
prai pauza pola saat, pa raboti saat vreme pa prai pola saat pauza raboti dva saati i poslr zavrsuva
za eden student potrebni se 5 min za pregleduvanje na dokumenti
vnesi reden broj na studentot i neka ispise kolku saati i kolku minuti ke
ceka i dali dal dokumenti pred da zavrsi finki so rabota*/

/*#include <iostream>
using namespace std;

int main() {
    int mesto, vkupnoVreme, saati = 0, minuti = 0;

    cout << "Vnesi mesto vo redica: ";  // Enter queue position
    cin >> mesto;

    // Calculate initial time
    vkupnoVreme = mesto*5 - 5;

    // Add breaks
    if (vkupnoVreme > 120)
        vkupnoVreme += 30;
    if (vkupnoVreme > 210)
        vkupnoVreme += 30;

    if (vkupnoVreme >= 360) {
        cout << "Studentot ne bil usluzhen" << endl;
    } else {
        // Calculate hours and minutes
        if (vkupnoVreme >= 60) {
            saati = vkupnoVreme / 60;
            minuti = vkupnoVreme % 60;
        } else {
            minuti = vkupnoVreme;
        }
        cout << "Saati: " << saati << ", minuti: " << minuti << endl;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int position, hours=0 , minutes=0;
    cout << "Enter the position in queue: "<<endl;
    cin >> position;
    int time=(5*position)-5;

    if ( time > 0 && time < 360) {
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
        cout << hours << ":" << minutes << endl;
    } else {
        cout <<"You are not able to hand the documents! Or invalid input!";
    }
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main() {
    int phone_1, phone_2, minutes;
    float cost_total = 0;
    int cost_first_30_min = 3;
    int cost_after_30_min = 2;

    cout << "Enter the first number:";
    cin >> phone_1;
    cout << "Enter the second number:";
    cin>>phone_2;
    cout<<"Enter the minutes: ";
    cin>>minutes;
    if(minutes<30) {
        cost_total=minutes*cost_first_30_min;
    } else {
        cost_total=cost_first_30_min*minutes+(minutes-30)*cost_after_30_min;
    }
    int digits_1=phone_1/1000000;
    int digits_2=phone_2/1000000;
    if((digits_1==71&&digits_2==76)||(digits_1==74&&digits_2==76)) {
        cost_total=cost_total*0.7;
    }
    if((digits_1==76&&digits_2==71)||(digits_1==76&&digits_2==74)) {
        cost_total=cost_total*0.7;
    }

    cout<<"Total cost:"<<cost_total<<endl;
    return 0;
}*/


#include <iostream>
using namespace std;

int main() {
    int position, hours=0 , minutes=0;
    cout << "Enter the position in queue: "<<endl;
    cin >> position;
    int time=(5*position)-5;

    if ( time >= 0 && time < 360) {
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
        cout << hours << ":" << minutes << endl;
    } else {
        cout <<"You are not able to hand the documents! Or invalid input!";
    }
    return 0;
}