//
// Created by win11pro on 10/26/2024.
//


/*#include <iostream>

using namespace std;

int main()
{//12345
    int number;
    cin >> number ;
    int digit1 = number/10000,digit5 = number%10, middle = (number/10)%1000;
    cout<<middle <<endl;
    cout << digit1+digit5;
    return 0;
}*/


/*#include <iostream>

using namespace std;

int main()
{
    int number_1, number_2, minutes, digits1, digits2;
    float total = 0, first_30_minutes = 3.0, after_30_min = 2.0;
    cin>>number_1>>number_2>>minutes;

    if (minutes<=30)
    {
        total = minutes * first_30_minutes;
    } else
    {
        total = 30 * first_30_minutes + (minutes-30)*after_30_min;
    }

    digits1=number_1/1000000;
    digits2=number_2/1000000;
    if(((digits1>=71&&digits1<=73)||(digits1>=74&&digits1<=76))&&
       ((digits2>=71&&digits2<=73)||(digits2>=74&&digits2<=76)))
    {
        total = total * 0.70;
    }

    cout<<total;
    return 0;
}*/





/*
#include <iostream>

using namespace std;

int main()
{
    int number_1, number_2, minutes, digits1, digits2;
    float total = 0, first_30_minutes = 3.0, after_30_min = 2.0;
    cin>>number_1>>number_2>>minutes;

    if (minutes<=30)
    {
        total = minutes * first_30_minutes;
    } else
    {
        total = 30 * first_30_minutes + (minutes-30)*after_30_min;
    }

    digits1=number_1/1000000;
    digits2=number_2/1000000;

    if((digits1>=71 && digits1<=73)&&(digits2>=71 && digits2<=73))
    {
        total = total * 0.70;
    }
    if ((digits1>=74 && digits1<=76)&&(digits2>=72 && digits2<=76)) {
        total = total * 0.70;
    }

    cout<<total;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int position, hours=0 , minutes=0;
    cout << "Enter the position in queue: "<<endl;
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
        cout << hours << ":" << minutes << endl;
    } else {
        cout <<"Student will not be served at all";
    }
    return 0;
}
*/

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



/*
#include <iostream>
using namespace std;

int main() {
    int position, hours=0 , minutes=0, time;
    cin >> position;
    time=(5*position)-5;


        if( time >= 120 ) {
            time+=30;
        }
        if (time >= 210) {
            time+=30;
        }

    if(time>360)
    {
        cout<<"Studentot ne e voopsto usluzen";
    }
    else
    {
        hours=time/60;
        minutes=time%60;
        cout<<"Hours: "<<hours<<", minutes: "<<minutes<<endl;
    }


    return 0;
*/
}