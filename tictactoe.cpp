/*A program that allows two players to play tic-tac-toe against each other*/

#include <iostream>
using namespace std;

char matrix[3][3];

void original() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = '-';
        }
    }
}

void display() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

bool checkWin(char player) {
    for (int i = 0; i < 3; i++) {
        if (matrix[i][0] == player && matrix[i][1] == player && matrix[i][2] == player)
            return true; // Checking rows
        if (matrix[0][i] == player && matrix[1][i] == player && matrix[2][i] == player)
            return true; // Checking columns
    }
    if (matrix[0][0] == player && matrix[1][1] == player && matrix[2][2] == player)
        return true; // Checking diagonal
    if (matrix[0][2] == player && matrix[1][1] == player && matrix[2][0] == player)
        return true; // Checking  anti-diagonal
    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == '-')
                return false; // The game is not a draw yet
        }
    }
    return true; // All cells are filled, and there is no winner
}

void entry(char sym, int pos) {
    
    switch(pos)
    {
        case 1:
                matrix[0][0]=sym;
                break;
        case 2: matrix[0][1]=sym;
                break;
        case 3: matrix[0][2]=sym;
                break;
        case 4: matrix[1][0]=sym;
                break;
        case 5: matrix[1][1]=sym;
                break;
        case 6: matrix[1][2]=sym;
                break;
        case 7: matrix[2][0]=sym;
                break;
        case 8: matrix[2][1]=sym;
                break;
        case 9: matrix[2][2]=sym;
                break;
        
    }
}

int main() {
    original();
    char player = 'X';
    int pos;
    display();
    int reset;
    for (int i = 1; i <= 9; i++) {
        cout << "Player " << player << ", enter the position (1-9): ";
        cin >> pos;
        
        entry(player, pos);
        display();
        cout<<"Enter the reset status where 1-Reset ,0-No Reset\n";
        cin>>reset;
        if(reset)
        {
            original();
        }
        if (checkWin(player)) {
            cout <<"Hurray !! "<<player<<" You won\n";
            break;
        }

        if (checkDraw()) {
            cout << "It's a draw!\n";
            break;
        }

        // Swap players
        player = (player == 'X') ? 'O' : 'X';
        
    }
    int play_again=0;
    cout<<"Enter Playagain Status where 1-Yes,0-No\n";
    cin>>play_again;
    if(play_again==1)
    {
        main();

    }
    else{
         return 0;
    }
   
}
