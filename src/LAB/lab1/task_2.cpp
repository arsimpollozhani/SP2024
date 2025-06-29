//
// Created by win11pro on 6/22/2025.
//

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


#include <iostream>

using namespace std;

int main() {
    int number_1, number_2, minutes, digits1, digits2;
    float total = 0, first_30_minutes = 3.0, after_30_min = 2.0;
    cin >> number_1 >> number_2 >> minutes;

    if (minutes <= 30) {
        total = minutes * first_30_minutes;
    } else {
        total = 30 * first_30_minutes + (minutes - 30) * after_30_min;
    }

    digits1 = number_1 / 1000000;
    digits2 = number_2 / 1000000;

    if ((digits1 >= 71 && digits1 <= 73) && (digits2 >= 71 && digits2 <= 73)) {
        total = total * 0.70;
    }
    if ((digits1 >= 74 && digits1 <= 76) && (digits2 >= 72 && digits2 <= 76)) {
        total = total * 0.70;
    }

    cout << total;
    return 0;
}
