


#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;


//tranform string only to display letters, and word in new line

void transform(char *line)
{
    char storeLetters[81];
    int wordIndex = 0;
    for(int i = 0; i < strlen(line); i++)
    {
        if(isalpha(line[i])){
            storeLetters[wordIndex++] = line[i];
        } else if(isspace(line[i]) || line[i+1] == '\0')
        {
            if(wordIndex > 0)
            {
                storeLetters[wordIndex] = '\0'; // add null ter. at the end of the word
                cout << storeLetters << endl; //print the word
                wordIndex = 0; //reset wordindex for the next word to be counted
            }
        }
    }
    if(wordIndex > 0) //for the last word
    {
        storeLetters[wordIndex] = '\0';
        cout << storeLetters << endl;
    }
}

int main()
{
    char line[81];
    cin.getline(line, 81);
    transform(line);
    return 0;
}