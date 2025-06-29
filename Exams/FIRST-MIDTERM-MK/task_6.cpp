//Created: task_6.cpp

#include<iostream>

using namespace std;

int main()
{
    int sum, x, y;
    int pair = 0, isPair = 0;
    if (cin >> sum)
    {
        while (cin >> x >> y)
        {
            if(x == 0 && y == 0){
                break;
            }
            isPair++;
            if(x+y == sum)
            {
                pair++;
            }
        }
    }
    cout << "Vnesovte "<<pair<<" parovi od broevi chij zbir e "<<sum<<endl;
    cout << "Procentot na parovi so zbir "<<sum << " e "<<float(pair)/isPair*100.0<< "%" << endl;
    return 0;
}