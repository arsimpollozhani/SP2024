#include<iostream>
#include<cstring>
#include<fstream>
#include<string>
using namespace std;

 

void printInfo (const char * line) {
    int letters = 0;
    int words = 0;
    for (int i = 0; i < strlen(line); i++)
    {
        if (isalnum(line[i])) letters++;
        if (isspace(line[i])) words++;
    }
    cout << letters << ", " << words+1 << ": " << line << endl;
}

int main () {

    //solution without files
    
    // char line [100];
    // while (cin.getline (line, 100)) {
    //     if (strcmp(line, "#") == 0) {
    //         break;
    //     }

    //     printInfo (line);
    // }

    // with files
    const char * filename = "D:\\Programming_Tasks\\Structured_Programming\\Excercises\\r2\\input.txt";
    ifstream fin (filename);

    string line;
    while (getline(fin, line)){
        if (line == "#") break;
        const char* str = line.c_str();
        printInfo(str);
    }

    return 0;
}