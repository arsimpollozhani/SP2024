#include<iostream>
#include<cstring>
using namespace std;

int main () {
    int m, n, k, l;
    cin >> m >> n >> k >> l;
    cin.get();

    int visitedPositions [100][100]= {};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visitedPositions[i][j] = 0;
        }
        
    }

    char commands[1000];
    cin.getline(commands, 1000);

    //initial position [0][0]
    int r = 0, c = 0;  //current snake position 


    //direction down
    int deltaRow = 1, deltaCol = 0; 

    //direction map
    /*
        -1,0 -> up
        0,-1 -> left
        0,1 -> right
        1,0 -> down
    */

    //this is abstract a little bit
    for (int i = 0; i < strlen(commands); i++)
    {
        char command = commands[i];
        //moving up/down
        if (deltaCol == 0) {
            if (command == 'L') {  //left-horizontal
                deltaCol = deltaRow;
            } else { //right-horizontal
                deltaCol = -deltaRow;
            }
            deltaRow = 0;
        } else {    //moving left/right
            if (command == 'L') { // left-vertical
                deltaRow = -deltaCol;
            } else { //right-vetical
                deltaRow = deltaCol;
            }
            deltaCol = 0;
        }

        r += deltaRow;
        c += deltaCol;

        //check if position is within boundaries; if it is visited endgame (SELF COLLISION)
        if (r>=0 && r<m && c>=0 && c<n) {
            if (visitedPositions[r][c] == 1) {
                cout << "GAME OVER Ouch";
                return 0;
            }
        } else { //out of boundaries
            cout << "GAME OVER Ouch";
            return 0;
        }

        //if snake ate the apple NJAM
        if (r==k && c==l) {
            cout << "NJAM";
            return 0;
        }

        visitedPositions[r][c] = 1; //mark the spot as visited
    }

    cout << "GAME OVER" << endl;
    
    

    return 0;
}


// 00 01 02
// 10 11 12