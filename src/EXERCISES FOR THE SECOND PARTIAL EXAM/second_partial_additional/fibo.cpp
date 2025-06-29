//
// Created by win11pro on 1/9/2025.
//
/*#include<iostream>
using namespace std;

int fibo(int num)
{
    if(num <= 1)
    {
        return num;
    } else {
        return fibo(num-1) + fibo(num-2);
    }
}

int main()
{
    cout << fibo(5) << endl;
    return 0;
}*/


#include<iostream>
#include<iomanip>
#include<cstring>
#include<cctype>
using namespace std;

float calculate_ratio(char *str)
{
    float upper = 0, lower = 0;
    for(int i = 0; i < strlen(str); ++i)
    {

        if(isupper(str[i]))
        {
            ++upper;
        }
        if(islower(str[i]))
        {
            ++lower;
        }
    }
    float ratio =  upper / lower;
    return ratio;
}

int findMaxRatioIndex(float *ratios, int n) {
    int maxIndex = 0;
    float maxElement = ratios[0];
    for(int i = 0; i < n; ++i) {
        if(maxElement < ratios[i]) {
            maxElement = ratios[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}



int main()
{
    int n;
    cin >> n;
    cin.ignore();
    float saveRatios[100]={0};
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        char str[500];
        cin.getline(str,500);
        float ratio = calculate_ratio(str);
        saveRatios[j++]=ratio;
        cout << fixed << setprecision(2) << ratio << " " << str << endl;
    }
    cout << findMaxRatioIndex(saveRatios,100) << endl;
    return 0;
}