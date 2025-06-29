#include<iostream>
#include<cstring>
using namespace std;

void transform(char *str, int x, int i = 0)
{
    if(str[i] == '\0')
    {
        return;
    }

    if(str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] = 'a' + (str[i] - 'a' + x) % 26;
    } else if (str[i] >= 'A' && str[i] <= 'Z')
    {
        str[i] = 'A' + (str[i] - 'A' + x) % 26;
    }

    transform(str, x, i+1);
}

int main()
{
    int n, x;
    cin >> n >> x;

    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        char str[81];
        cin.getline(str,81);

        transform(str,x);
        cout << str << endl;

    }


}
